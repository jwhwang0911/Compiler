%{
#include<stdio.h>

extern int lineno;
extern int tokenno;
int yylex();
void yyerror(char *s);
%}

%token BREAK DEFAULT SELECT SWITCH CASE FALLTHROUGH IF ELSE GOTO RANGE FOR CONTINUE // 반복문, SELECT문
%token FUNC INTERFACE DEFER RETURN ARGS// 함수, INTERFACE 관련
%token GO CHAN// GO CHAN
%token MAP STRUCT CONST TYPE VAR
%token ANY BOOL BYTE COMPARABLE INT COMPLEX ERROR FLOAT STRING RUNE  // 변수 type들
%token PACKAGE IMPORT
%token IDENTIFIER IntegerValue FloatValue StringValue ImaginaryValue BooleanValue
%token COLON SEMICOLON

%token GODEF INCRE_DECRE LRSHIFT ARITH_ASSIGN BIT_ASSIGN AND OR COMPARE CHANNELOP

%start SourceFile
//SourceFile
/* 

    GODEF       :=
    INCRE_DECRE ++ --
    LRSHIFT     << >> &^
    ARITH_ASSIGN += -= *= /= %=
    BIT_ASSIGN   &= |= ^= <<= >>= &^=
    AND         &&
    OR          ||
    COMPARE     (==)|(<)|(>)|(!=)|(<=)|(>=)
    ARGS        ...
    CHANNELOP   <-

 */

%%

Type : TypeName                                 
        | TypeName TypeArgs
        | '(' Type ')'
        | TypeLit
        ;
TypeName : IDENTIFIER | QualifiedIdent;

TypeList :
            TypeList ',' Type
        |   Type
        ;

TypeArgs :          '[' TypeList ']';

TypeLit : ArrayType | StructType | PointerType | FunctionType | InterfaceType |
            SliceType | MapType | ChannelType
        | ANY
        | FLOAT
        | BOOL
        | BYTE
        | COMPARABLE
        | COMPLEX
        | ERROR 
        | INT
        | RUNE
        | STRING


QualifiedIdent  :
                    IDENTIFIER '.' IDENTIFIER;

ArrayType       :
                    '[' Expression ']' Type;

SliceType       :  
                    '[' ']' Type;

StructType      :
                STRUCT '{' StructTypeLoop '}';

StructTypeLoop : FieldDecl SEMICOLON ';' StructTypeLoop
                | FieldDecl SEMICOLON
                ;

FieldDecl       :  IdentifierList Type
                |  IdentifierList Type StringValue
                |  EmbeddedField
                |  EmbeddedField StringValue
                ;

EmbeddedField   :   TypeName
                |   '*' TypeName
                |   TypeName TypeArgs
                |   '*' TypeName TypeArgs;



PointerType     :
                    '*' Type;

FunctionType   :    FUNC Signature 

Signature       :
                    Parameters
                |   Parameters Type
                ;
                
Parameters      :
                    '(' ')'
                |   '(' ParameterList ')'
                |   '(' ParameterList ',' ')'
                ;
Result          : Parameters
                | Type
                ;

ParameterList   : ParameterDecl
                | ParameterDecl ',' ParameterDecl;

ParameterDecl   :   Type
                |   IdentifierList Type
                |   ARGS Type
                |   IdentifierList ARGS Type;



InterfaceType   :
                INTERFACE '{' InterfaceType '}' 
                | IDENTIFIER '(' ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ',' ')' SEMICOLON
                | IDENTIFIER '(' ')' '(' ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ')' '(' ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ',' ')' '(' ')' SEMICOLON
                | IDENTIFIER '(' ')' '(' ParameterList ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ')' '(' ParameterList ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ',' ')' '(' ParameterList ')' SEMICOLON
                | IDENTIFIER '(' ')' '(' ParameterList ',' ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ')' '(' ParameterList ',' ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ',' ')' '(' ParameterList ',' ')' SEMICOLON
                | IDENTIFIER '(' ')' Type SEMICOLON
                | IDENTIFIER '(' ParameterList ')' Type SEMICOLON
                | IDENTIFIER '(' ParameterList ',' ')' Type SEMICOLON 
                | TypeElem SEMICOLON
                ;

 // MethodName      : IDENTIFIER ;

TypeElem        :
                    Type TypeElem 
                | '~' Type TypeElem 
                | '|' Type 
                | '|' '~' Type 
                ;

MapType         :
                    MAP '[' Type ']' Type;

ChannelType     :
                    CHAN Type
                | CHAN CHANNELOP Type
                | CHANNELOP CHAN Type
                ;


/*------------------------ Declarations and scope section ------------------------*/ // 12novel30
Declaration     : ConstDecl | TypeDecl | VarDecl ;

TopLevelDecl    : Declaration | FunctionDecl | MethodDecl ;

// Constant declarations
ConstDecl       : 
                    CONST ConstSpec
                |   CONST '(' ConstSpecLoop ')' 
                ; 

ConstSpec       :
                    IdentifierList Type '=' ExpressionList
                |   IdentifierList '=' ExpressionList
                |   IdentifierList
                ;

ConstSpecLoop   :
                    ConstSpec SEMICOLON ConstSpecLoop
                |
                ;

IdentifierList  : 
                    IdentifierList ',' IDENTIFIER {printf("zxc ");}
                |   IDENTIFIER {printf("wer ");}
                ;                    
ExpressionList  :    
                    ExpressionList ',' Expression {printf("zxcv ");}
                |   Expression {printf("zxcb ");}
                ;

// Type declarations
TypeDecl            :
                        TYPE TypeSpec
                    |   TYPE '(' TypeSpecLoop ')'
                    ;
                    
TypeSpec            :
                        AliasDecl | TypeDef ;

TypeSpecLoop        :
                        TypeSpec SEMICOLON TypeSpecLoop
                    |
                    ;
// Alias declarations
AliasDecl           : IDENTIFIER '=' Type ;
// Type definitions
TypeDef             : 
                        IDENTIFIER Type
                    |   IDENTIFIER TypeParameters Type
                    ;
// Type parameter declarations
TypeParameters      : '[' TypeParamList ']'
                    | '[' TypeParamList ',' ']'
                    ;
TypeParamList :
                    TypeParamList ',' TypeParamDecl
                |   TypeParamDecl;
TypeParamDecl : IdentifierList TypeElem ;
// Type constraints
// TypeConstraint : TypeElem ;
// Variable declarations
VarDecl : 
            VAR VarSpec
        |   VAR '(' ')'
        |   VAR '(' VarSpecLoop ')'
        ;
VarSpec : 
            IdentifierList Type '=' ExpressionList
        |   IdentifierList Type 
        |   IdentifierList '=' ExpressionList
        ;
VarSpecLoop : 
            VarSpec SEMICOLON VarSpecLoop
        |   VarSpec SEMICOLON
        ;
// Short variable declarations
ShortVarDecl : IdentifierList GODEF ExpressionList ;
// Function declarations
FunctionDecl :
                FUNC IDENTIFIER TypeParameters Signature Block
            |   FUNC IDENTIFIER Signature Block
            |   FUNC IDENTIFIER TypeParameters Signature
            |   FUNC IDENTIFIER Signature
            ; // FunctionName
// FunctionName : IDENTIFIER;
MethodDecl :
                FUNC Parameters IDENTIFIER Signature Block
            |   FUNC Parameters IDENTIFIER Signature
            ; // MethodName



/*------------------------ Expressions section ------------------------*/ // 12novel30
Operand     : 
                Literal
            |   OperandName TypeArgs
            |   OperandName
            |   '(' Expression ')'
            ;

Literal     :
                BasicLit
            |   CompositeLit
            |   FunctionLit
            ;

BasicLit    :      
                IntegerValue 
            | FloatValue 
            | ImaginaryValue 
            | StringValue
            ; // 추가 필요 - rune_lit |
// Composite literals
CompositeLit : LiteralType LiteralValue;   
LiteralType :   StructType | ArrayType | '[' ARGS ']' Type |
                SliceType | MapType | TypeName | TypeName TypeArgs ;
LiteralValue :
                '{' ElementList ',' '}'
            |   '{' ElementList '}'
            |   '{' '}'
            ;
// ElementList : KeyedElement KeyedElementLoop ;
KeyedElement : 
                Key ':' Element
            |   Element
            ;
ElementList :
                ElementList ',' KeyedElement
            |   KeyedElement ;



Key : IDENTIFIER | Expression | LiteralValue ; // fieldname
// FieldName : IDENTIFIER ;
Element : Expression | LiteralValue ;         
// Function literals
FunctionLit : FUNC Signature Block ;

OperandName :   IDENTIFIER | QualifiedIdent ;

// Primary expressions
PrimaryExpr :
                Operand 
            |   Conversion 
            |   MethodExpr
            |   PrimaryExpr Selector 
            |   PrimaryExpr Index 
            |   PrimaryExpr Slice 
            |   PrimaryExpr TypeAssertion
            |   PrimaryExpr Arguments
            ;
Selector :      '.' IDENTIFIER ;
Index :         '[' Expression ']' ;
Slice :         
                '[' ExpressionLoop COLON ExpressionLoop ']'
            |   '[' ExpressionLoop COLON Expression COLON Expression ']'
            ;
ExpressionLoop :    
                Expression
            |
            ;
TypeAssertion : '.' '(' Type ')' ;
Arguments :     '(' ArgumentsLoop ')' ;
ArgumentsLoop :
              ExpressionList ARGS ','
            | ExpressionList ARGS
            | ExpressionList ','
            | ExpressionList
            | Type ARGS ','
            | Type ARGS
            | Type ','
            | Type
            | Type ',' ExpressionList ARGS ','
            | Type ',' ExpressionList ARGS
            | Type ',' ExpressionList ','
            | Type ',' ExpressionList
            |
            ;
// Method expressions
MethodExpr : ParametersType '.' IDENTIFIER ;
ParametersType : Type ;

/*------------------------ Operators section ------------------------*/ // 12novel30
Expression :
                UnaryExpr {printf("1 ");}
                |   Expression AND Expression {printf("2 ");}
                |   Expression OR Expression {printf("3 ");}
                |   Expression COMPARE Expression {printf("4 ");}
                |   Expression '+' Expression {printf("5 ");}
                |   Expression '-' Expression {printf("6 ");}
                |   Expression '|' Expression {printf("7 ");}
                |   Expression '^' Expression {printf("8 ");}
                |   Expression '*' Expression {printf("9 ");}
                |   Expression '/' Expression {printf("10 ");}
                |   Expression '%' Expression {printf("11 ");}
                |   Expression LRSHIFT Expression {printf("12 ");}
                |   Expression '&' Expression {printf("13 ");}
                ;

UnaryExpr :
                    PrimaryExpr {printf("14 ");}
                |   unary_op UnaryExpr {printf("15 ");}
                ;
binary_op :         AND | OR | rel_op | add_op | mul_op ;
rel_op :            COMPARE ;
add_op :            '+' | '-' | '|' | '^' ;
mul_op :            '*' | '/' | '%' | LRSHIFT | '&'  ;
unary_op :          '+' | '-' | '!' | '^' | '*' | '&' | CHANNELOP ;
// Conversions
Conversion :
        Type '(' Expression ')'
        ;
/*------------------------ Statements section ------------------------*/ // 12novel30
Statement :	// main
				Declaration
			|	LabeledStmt // test fin. 12-02
			|	SimpleStmt
			|	GoStmt // test fin. 12-02
			|	ReturnStmt // test fin. 12-02
			|	BreakStmt  // test fin. 12-02
			|	ContinueStmt  // test fin. 12-02
			|	GotoStmt // test fin. 12-02
			|	FallthroughStmt // test fin. 12-02
			|	Block
			|	IfStmt
			|	SwitchStmt
			|	SelectStmt
			|	ForStmt
			|	DeferStmt // test fin. 12-02
			;
LabeledStmt :   IDENTIFIER COLON Statement ; // test fin. 12-02
SimpleStmt :
			|	ExpressionStmt
			|	SendStmt
			|	IncDecStmt
			|	Assignment
			|	ShortVarDecl
			;
//for SimpleStmt
ExpressionStmt :    Expression ;
SendStmt :          Channel CHANNELOP Expression ;
Channel : //for SendStmt 
			Expression ;
IncDecStmt :        Expression INCRE_DECRE ;
Assignment :        ExpressionList assign_op ExpressionList ;
assign_op : //for Assignment
			ARITH_ASSIGN
		|   '='
		;
//
GoStmt : // test fin. 12-02
             GO Expression ;
ReturnStmt : // test fin. 12-02
			RETURN ExpressionList
        |   RETURN
		;
BreakStmt : // test fin. 12-02
			BREAK IDENTIFIER //label
        |   BREAK
		;
ContinueStmt : // test fin. 12-02
			CONTINUE IDENTIFIER //label
        |   CONTINUE
		;
GotoStmt : // test fin. 12-02
            GOTO IDENTIFIER ; //label
FallthroughStmt : // test fin. 12-02
                FALLTHROUGH ;
Block :
            '{' StatementList '}' 
        |   '{' '}' 
StatementList : //for block
                    Statement SEMICOLON StatementList
                |   Statement SEMICOLON
				;
// IfStmt = "if" [ SimpleStmt ";" ] Expression Block [ "else" ( IfStmt | Block ) ] .
IfStmt :
			IF SimpleStmt SEMICOLON Expression Block ELSE IfStmt
		| 	IF SimpleStmt SEMICOLON Expression Block ELSE Block
		|   IF Expression Block ELSE IfStmt
        |   IF Expression Block ELSE Block
        |   IF Expression Block
		;
SwitchStmt : // 다 봤음
			ExprSwitchStmt
		|	TypeSwitchStmt
		;
ExprSwitchStmt : //for SwitchStmt
			SWITCH SimpleStmtBrakets ExpressionBrakets '{' ExprCaseClauseLoop'}'
        |   SWITCH SimpleStmtBrakets ExpressionBrakets '{' '}'
        ;
SimpleStmtBrakets : //for SwitchStmt
            SimpleStmt SEMICOLON
        |
        ;
ExpressionBrakets : //for SwitchStmt
            Expression
        |
        ;
ExprCaseClause : //for SwitchStmt
			ExprSwitchCase COLON StatementList ;
ExprCaseClauseLoop : //for SwitchStmt
            ExprCaseClause ExprCaseClauseLoop
        |   ExprCaseClause
        ;
ExprSwitchCase : //for SwitchStmt
			CASE ExpressionList
		|	DEFAULT
		;
TypeSwitchStmt : //for SwitchStmt
			SWITCH SimpleStmtBrakets TypeSwitchGuard '{' TypeCaseClauseLoop '}'
        ;
TypeSwitchGuard : //for SwitchStmt
			IdetifierGodefBrakets PrimaryExpr '.' '(' Type ')'
		;
IdetifierGodefBrakets : //for SwitchStmt
            IDENTIFIER GODEF
        |
        ;
TypeCaseClause : //for SwitchStmt
			TypeSwitchCase COLON StatementList
		;
TypeCaseClauseLoop : //for SwitchStmt
            TypeCaseClause TypeCaseClauseLoop
        |
        ;
TypeSwitchCase : //for SwitchStmt
			CASE TypeList
		|	DEFAULT
		;
/*
내가 for range 볼테니까
select에서 어떤거 안되는지 찾아봐줄 수잇어/?

*/
SelectStmt : // test fin. 12-02
			SELECT '{' CommClauseLoop '}'
		;
CommClause : //for SelectStmt // test fin. 12-02
			CommCase COLON StatementList
		;
CommClauseLoop : //for SelectStmt // test fin. 12-02
            CommClause CommClauseLoop
        |
        ;
CommCase : //for SelectStmt // test fin. 12-02
		|	CASE RecvStmt
        |   DEFAULT
		;
RecvStmt : //for SelectStmt //yet
			ExpressionList '=' RecvExpr {printf("qwe");}
		|	IdentifierList GODEF RecvExpr {printf("asd");}
        |   RecvExpr
		;
RecvExpr : //for SelectStmt
			Expression
		;
ForStmt :
			FOR ForClauseBracket Block {printf("a ");}
		;
ForClauseBracket :
            Condition {printf("b ");}
        |   ForClause {printf("c ");}
        |   RangeClause {printf("d ");}
        | {printf("ttt ");}
        ;
Condition : //for ForStmt 
			Expression {printf("ad ");}
		;
ForClause : //for ForStmt 
			InitStmtBracket SEMICOLON ConditionBracket SEMICOLON PostStmtBracket {printf("bc ");}
		;
InitStmt : //for ForStmt
			SimpleStmt
		;
InitStmtBracket: //for ForStmt
            InitStmt
        |
        ;
ConditionBracket : //for ForStmt
            Condition
        |
        ;
PostStmt : //for ForStmt
			SimpleStmt
		;
PostStmtBracket : //for ForStmt
            PostStmt
        ;
RangeClause : //for ForStmt
			ExpressionList '=' RANGE Expression
		|	IdentifierList GODEF RANGE Expression
        |   RANGE Expression
		;
DeferStmt : // test fin. 12-02
			DEFER Expression
		;

SourceFile      :
                    PackageClause SEMICOLON ImportLoop TopLevelLoop
                ;

ImportLoop      :
                    ImportDecl SEMICOLON ImportLoop
                | 
                ;

TopLevelLoop    :
                    TopLevelDecl SEMICOLON  TopLevelLoop
                |
                ;

PackageClause   :
                    PACKAGE IDENTIFIER ;            

// import
ImportDecl : 
                IMPORT ImportSpec
            |   IMPORT '(' ImportSpecLoop ')'
            ;
ImportSpec : 
                '.' ImportPath
            |   IDENTIFIER ImportPath
            |   ImportPath  
            ;
ImportSpecLoop :
                ImportSpec SEMICOLON ImportSpecLoop
            |
            ;
ImportPath : StringValue ;

%%

void yyerror(char *s) {
    printf("\nline %d: %s \n", lineno, s);
}

int main() {
    yyparse();
}