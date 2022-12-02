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

%start Type

%left '*' '/' '%' LRSHIFT '&'
%left '+' '-' '|' '^'
%left COMPARE
%left AND
%left OR

%left '.'
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


// Declaration and Scope Section
TopLevelDecl   : Declaration   ;

Declaration     :   VarDecl {printf("Decl Accept");} | ConstDecl {printf("Decl Accept");} | TypeDecl {printf("Decl Accept");};   

//Identifiers
IdentifierList  :
                    IdentifierList ',' IDENTIFIER
                |   IDENTIFIER
                ;

ExpressionList  :
                    ExpressionList ',' Expression 
                |   Expression
                ;

VarDecl        :    VAR VarSpec
                |   VAR '(' VarSpecList ')'
                ;

VarSpec        : IdentifierList Type '=' ExpressionList
            |   IdentifierList Type
            |   IdentifierList '=' ExpressionList
            ;

VarSpecList     :   VarSpec SEMICOLON VarSpecList
                |   VarSpec
                ;

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

TypeDecl            :
                        TYPE TypeSpec
                    |   TYPE '(' TypeSpecLoop ')'
                    ;
                    
TypeSpec            :
                        AliasDecl | TypeDef ;

TypeSpecLoop        :
                        TypeSpec SEMICOLON TypeSpecLoop
                    |   TypeSpec
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


//Expression
Expression :
                UnaryExpr
                |   Expression AND Expression
                |   Expression OR Expression
                |   Expression COMPARE Expression
                |   Expression '+' Expression
                |   Expression '-' Expression
                |   Expression '|' Expression
                |   Expression '^' Expression
                |   Expression '*' Expression
                |   Expression '/' Expression
                |   Expression '%' Expression
                |   Expression LRSHIFT Expression
                |   Expression '&' Expression
                ;

UnaryExpr :
                    PrimaryExpr
                |   unary_op UnaryExpr
                |   '*' UnaryExpr
                ;

PrimaryExpr :
                Operand {printf("Accept");}
            /* |   Conversion  */
            |   MethodExpr
            |   PrimaryExpr Selector {printf("Accept");}
            |   PrimaryExpr Index {printf("Accept");}
            |   PrimaryExpr Slice {printf("Accept");}
            |   PrimaryExpr TypeAssertion {printf("Accept");}
            |   PrimaryExpr Arguments {printf("Accept");}
            ;


MethodExpr : Type '.' IDENTIFIER ;

Conversion :
        Type '(' Expression ')'
        ;
Selector :      '.' IDENTIFIER ;
Index :         '[' Expression ']' ;
Slice :         
                '[' Expression COLON Expression ']'
            |   '[' Expression COLON ']'
            |   '[' COLON Expression ']'
            |   '[' COLON ']'
            |   '[' Expression COLON Expression COLON Expression ']'
            |   '[' COLON Expression COLON Expression ']'
            ;
TypeAssertion : '.' '(' Type ')' ;
Arguments :     '(' ArgumentsLoop ')'
            |   '(' ')'
            ;
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
            ;

Operand     : 
                Literal
            |   OperandName
            |   '(' Expression ')'
            ;

OperandName :   IDENTIFIER ;
            

Literal     :
                BasicLit
            /* |   CompositeLit */
            /* | FunctionLit */
            ;

BasicLit    :      
            IntegerValue 
            | BooleanValue
            | FloatValue 
            | ImaginaryValue 
            | StringValue
            ;

binary_op :         AND | OR | rel_op | add_op | mul_op ;
rel_op :            COMPARE ;
add_op :            '+' | '-' | '|' | '^' ;
mul_op :            '*' | '/' | '%' | LRSHIFT | '&'  ;
unary_op :          '+' | '-' | '!' | '^' | '&' | CHANNELOP ;

// Type
Type    :   INT {printf("Accepted");}
        |   FLOAT {printf("Accepted");}
        |   BOOL {printf("Accepted");}
        |   COMPLEX {printf("Accepted");}
        |   RUNE {printf("Accepted");}
        |   STRING {printf("Accepted");}
        |   FunctionType {printf("Accepted");}
        |   MapType {printf("Accepted");}
        |   ChannelType {printf("Accepted");}
        |   StructType {printf("Accepted");}
        |   PointerType {printf("Accepted");}
        |   ArrayType {printf("Accepted");}
        |   SliceType {printf("Accepted");}
        |   InterfaceType {printf("Accepted");}
        ;


/* 
FunctionType    :   FUNC '(' ')' {printf("1");}
                |   FUNC '(' ')' Type
                |   FUNC '(' ')' '(' ')'
                |   FUNC '(' ')' '(' ParameterList ')'
                |   FUNC '(' ParameterList ')'
                |   FUNC '(' ParameterList ')' Type
                |   FUNC '(' ParameterList')' '(' ')'
                |   FUNC '(' ParameterList')' '(' ParameterList ')'
                ; */

FunctionType    :   FUNC Signature;

Signature       :
                    Parameters
                |   Parameters Type
                |   Parameters Parameters
                ;
                
Parameters      :
                    '(' ')' 
                |   '(' ParameterList ')'
                ;


ParameterList   : ParameterDecl
                | ParameterDecl ',' ParameterDecl;

ParameterDecl   :   Type
                |   IdentifierList Type
                |   ARGS Type
                |   IdentifierList ARGS Type;    

MapType         :   MAP '[' Type ']' Type;

ChannelType     : CHAN Type  | CHAN CHANNELOP Type | '<-' CHANNELOP Type ;

StructType      : STRUCT '{' StructTypeLoop '}'
                | STRUCT '{' '}'
                ;

StructTypeLoop : FieldDecl SEMICOLON StructTypeLoop
                | FieldDecl SEMICOLON
                ;

FieldDecl       :  IdentifierList Type
                |  IdentifierList Type StringValue
                ;


PointerType     :    '*' Type;

ArrayType       :   '[' Expression ']' Type;

SliceType       :   '[' ']' Type;

InterfaceType   :   INTERFACE '{''}' 
                |   INTERFACE '{' InterfaceElem SEMICOLON '}';

InterfaceElem   :   IDENTIFIER Signature | TypeElem;

TypeElem        :
                    Type TypeElem 
                | '~' Type TypeElem 
                | '|' Type 
                | '|' '~' Type 
                ;
                
TypeList :
            TypeList ',' Type
        |   Type
        ;
ShortVarDecl : IdentifierList GODEF ExpressionList ;
/*------------------------ Statements section ------------------------*/ // 12novel30
Statement :	// main
				Declaration // test fin. 12-02
			|	LabeledStmt // test fin. 12-02
			|	SimpleStmt // test fin. 12-02
			|	GoStmt // test fin. 12-02
			|	ReturnStmt // test fin. 12-02
			|	BreakStmt  // test fin. 12-02
			|	ContinueStmt  // test fin. 12-02
			|	GotoStmt // test fin. 12-02
			|	FallthroughStmt // test fin. 12-02
			|	Block // test fin. 12-02
			|	IfStmt // test fin. 12-02
			|	SwitchStmt // test fin. 12-02
			|	SelectStmt // test fin. 12-02
			|	ForStmt // test fin. 12-02 but limitation
			|	DeferStmt // test fin. 12-02
			;
LabeledStmt :   IDENTIFIER COLON Statement ; // test fin. 12-02
SimpleStmt :
			|	ExpressionStmt {printf("SimpleStmt1 ");}
			|	SendStmt{printf("SimpleStmt2 ");}
			|	IncDecStmt{printf("SimpleStmt3 ");}
			|	Assignment{printf("SimpleStmt4 ");}
			|	ShortVarDecl{printf("SimpleStmt5 ");}
			;
//for SimpleStmt
ExpressionStmt :    Expression ;
SendStmt :          Channel CHANNELOP Expression ;
Channel : //for SendStmt 
			Expression ;
IncDecStmt :        Expression INCRE_DECRE ;
Assignment :        ExpressionList assign_op ExpressionList ;
assign_op : //for Assignment
			ARITH_ASSIGN {printf("here");}
		|   '='
        |   BIT_ASSIGN
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
Block : // test fin. 12-02
            '{' StatementList '}' {printf("block1 ");}
        |   '{' '}' {printf("block2 ");}; 
StatementList : //for block
                    Statement SEMICOLON StatementList
                |   Statement SEMICOLON
				;
// IfStmt = "if" [ SimpleStmt ";" ] Expression Block [ "else" ( IfStmt | Block ) ] .
IfStmt : // test fin. 12-02
			IF SimpleStmt SEMICOLON Expression Block ELSE IfStmt //fin
		| 	IF SimpleStmt SEMICOLON Expression Block ELSE Block //fin
        | 	IF SimpleStmt SEMICOLON Expression Block //fin
		|   IF Expression Block ELSE IfStmt {printf("[if1] ");}//fin
        |   IF Expression Block ELSE Block {printf("[if2] ");}//fin
        |   IF Expression Block {printf("[if3] ");}//fin
		;
SwitchStmt : // test fin. 12-02
			ExprSwitchStmt {printf("[switch1] ");} //fin
		|	TypeSwitchStmt {printf("[switch2] ");} //PrimaryExpr 수정 후 다시 검토
		;
ExprSwitchStmt : //for SwitchStmt //fin
			SWITCH SimpleStmtBrakets ExpressionBrakets '{' ExprCaseClauseLoop'}'
        |   SWITCH SimpleStmtBrakets ExpressionBrakets '{' '}'
        |	SWITCH ExpressionBrakets '{' ExprCaseClauseLoop'}'
        |   SWITCH ExpressionBrakets '{' '}'
        ;
SimpleStmtBrakets : //for SwitchStmt //fin
            SimpleStmt SEMICOLON {printf("[SimpleStmtBrakets] ");} //fin
        /* | {printf("[SimpleStmtBrakets2] ");}/ */
        ;
ExpressionBrakets : //for SwitchStmt //fin
            Expression
        |
        ;
ExprCaseClause : //for SwitchStmt //fin
			ExprSwitchCase COLON StatementList {printf("[ExprCaseClause] ");};
ExprCaseClauseLoop : //for SwitchStmt //fin
            ExprCaseClause ExprCaseClauseLoop
        |   ExprCaseClause
        ;
ExprSwitchCase : //for SwitchStmt //fin
			CASE ExpressionList {printf("101010 ");}
		|	DEFAULT {printf("[DEFAULT1] ");}
		;
TypeSwitchStmt : //for SwitchStmt
			SWITCH SimpleStmtBrakets TypeSwitchGuard '{' TypeCaseClauseLoop '}'
        |   SWITCH TypeSwitchGuard '{' TypeCaseClauseLoop '}'
        ;
TypeSwitchGuard : //for SwitchStmt
			IdetifierGodefBrakets PrimaryExpr '.' '(' TYPE ')'
		;
IdetifierGodefBrakets : //for SwitchStmt
            IDENTIFIER GODEF {printf("[!]");}
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
			CASE TypeList {printf("[case] ");}
		|	DEFAULT {printf("[DEFAULT2] ");}
		;
/*
내가 for range 볼테니까
select에서 어떤거 안되는지 찾아봐줄 수잇어/?

*/
SelectStmt : // test fin. 12-02
			SELECT '{' CommClauseLoop '}'
		;
CommClause : //for SelectStmt // test fin. 12-02
			CommCase COLON StatementList {printf("[CommClause] ");}
		;
CommClauseLoop : //for SelectStmt // test fin. 12-02
            CommClause CommClauseLoop
        |
        ;
CommCase : //for SelectStmt // test fin. 12-02
		|	CASE RecvStmt
        |   DEFAULT {printf("[DEFAULT3] ");}
		;
RecvStmt : //for SelectStmt
			ExpressionList '=' RecvExpr {printf("qwe ");} //fin
		|	IdentifierList GODEF RecvExpr {printf("asd ");} //fin
        |   RecvExpr
		;
RecvExpr : //for SelectStmt
			Expression
		;
ForStmt :
			FOR ForClauseBracket Block {printf("a ");}
		;
ForClauseBracket :
            Condition {printf("b ");} //fin
        |   ForClause {printf("c ");} //fin
        |   RangeClause {printf("d ");}
        | {printf("ttt ");}
        ;
Condition : //for ForStmt 
			Expression {printf("ad ");}
		;
ForClause : //for ForStmt 
			InitStmtBracket SEMICOLON ConditionBracket SEMICOLON PostStmtBracket {printf("bc ");}
		;
InitStmtBracket: //for ForStmt
            SimpleStmt
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
//			ExpressionList '=' RANGE Expression //yet
            IdentifierList '=' RANGE Expression 
		|	IdentifierList GODEF RANGE Expression //fin
        |   RANGE Expression //fin
		;
DeferStmt : // test fin. 12-02
			DEFER Expression
		;


%%

void yyerror(char *s) {
    printf("\nline %d: %s \n", lineno, s);
}

int main() {
    yyparse();
}