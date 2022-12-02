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
TypeArgs :          '[' TypeList ']'
                ;

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
                STRUCT '{' StructTypeLoop '}'

StructTypeLoop : FieldDecl SEMICOLON ';' StructTypeLoop
                |
                ;
FieldDecl       :  IdentifierList Type
                |  IdentifierList Type StringValue
                |  EmbeddedField
                |  EmbeddedField StringValue;
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
                    IdentifierList ',' IDENTIFIER
                |   IDENTIFIER
                ;                    
ExpressionList  :    
                    ExpressionList ',' Expression
                |   Expression
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
        |   VAR '(' VarSpecLoop ')'
        ;
VarSpec : 
            IdentifierList Type '=' ExpressionList
        |   IdentifierList Type 
        |   IdentifierList '=' ExpressionList
        ;
VarSpecLoop : 
            VarSpec SEMICOLON VarSpecLoop
        |
        ;
// Short variable declarations
ShortVarDecl : IdentifierList GODEF ExpressionList ;
// Function declarations
FunctionDecl :
                FUNC IDENTIFIER TypeParameters Signature FunctionBody
            |   FUNC IDENTIFIER Signature FunctionBody
            |   FUNC IDENTIFIER TypeParameters Signature
            |   FUNC IDENTIFIER Signature
            ; // FunctionName
// FunctionName : IDENTIFIER;
FunctionBody : Block ;
MethodDecl :
                FUNC Parameters IDENTIFIER Signature FunctionBody
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
FunctionLit : FUNC Signature FunctionBody ;

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
                    UnaryExpr
                |   Expression binary_op Expression
                ;

UnaryExpr :
                    PrimaryExpr
                |   unary_op UnaryExpr
                ;
binary_op :         AND | OR | rel_op | add_op | mul_op ;
rel_op :            COMPARE ;
add_op :            '+' | '-' | '|' | '^' ;
mul_op :            '*' | '/' | '%' | LRSHIFT | '&'  ;
unary_op :          '+' | '-' | '!' | '^' | '*' | '&' | CHANNELOP ;
// Conversions
Conversion : 
            Type '(' Expression ',' ')'
        |   Type '(' Expression ')'
        ;
/*------------------------ Statements section ------------------------*/ // 12novel30
Statement :	// main
				Declaration // 추가 필요
			|	LabeledStmt //terminating -goto -break -continue
			|	SimpleStmt
			|	GoStmt
			|	ReturnStmt //terminating
			|	BreakStmt
			|	ContinueStmt
			|	GotoStmt //terminating
			|	FallthroughStmt
			|	Block //terminating
			|	IfStmt
			|	SwitchStmt //terminating
			|	SelectStmt //terminating
			|	ForStmt //terminating
			|	DeferStmt
			;

SimpleStmt :
				EmptyStmt
			|	ExpressionStmt
			|	SendStmt
			|	IncDecStmt
			|	Assignment
			|	ShortVarDecl
			;
//for SimpleStmt
EmptyStmt 	:       ;
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
GoStmt :            GO Expression ;

FallthroughStmt :   FALLTHROUGH ;
Block :             '{' StatementList '}' ;
StatementList : //for block
                    Statement SEMICOLON StatementList
                |
				;

/*
내가 for range 볼테니까
select에서 어떤거 안되는지 찾아봐줄 수잇어/?

*/


DeferStmt : 
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