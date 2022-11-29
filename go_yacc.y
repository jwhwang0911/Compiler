%{
#include<stdio.h>
%}

%token BREAK DEFAULT SELECT SWITCH CASE FALLTHROUGH IF ELSE GOTO RANGE FOR CONTINUE // 반복문, SELECT문
%token FUNC INTERFACE DEFER RETURN ARGS// 함수, INTERFACE 관련
%token GO CHAN// GO CHAN
%token MAP STRUCT CONST TYPE VAR// 변수 type들
%token PACKAGE IMPORT
%token IDENTIFIER IntegerValue FloatValue StringValue
%token COLON SEMICOLON


%start program // 잘 몰라서 임시로 해뒀어용

%%

Type            :
                    IDENTIFIER | QualifiedIdent
                | IDENTIFIER '[' Type ']'
                | IDENTIFIER '[' Type Type']'
                | IDENTIFIER '[' Type ',' ']'
                | IDENTIFIER '[' Type Type ',' ']' 
                | QualifiedIdent '[' Type ']'
                | QualifiedIdent '[' Type Type ']'
                | QualifiedIdent '[' Type ',' ']'
                | QualifiedIdent '[' Type Type ',' ']'
                | ArrayType 
                | StructType 
                | PointerType 
                | FunctionType 
                | InterfaceType 
                | SliceType 
                | MapType 
                | ChannelType
                | '(' Type ')' 
                | ',' Type
                |
                ;
TypeList :          Type TypeListLoop ;
TypeArgs :          '[' TypeList CommaLoop ']' ;
TypeListLoop:       
                    ',' Type TypeListLoop
                |
                ;
TypeArgsLoop :
                    TypeArgs TypeArgsLoop
                |
                ;
QualifiedIdent  :
                    PACKAGE '.' IDENTIFIER
                |
                ;

ElementType     :
                    Type
                |
                ;

ArrayType       :
                    '[' IntegerValue ']' ElementType
                |
                ;

SliceType       :  
                    '[' ']' ElementType
                |
                ;

StructType      :
                STRUCT '{' StructType '}' 
                | IdentifierList Type SEMICOLON
                | IdentifierList Type SEMICOLON StringValue
                | TYPE SEMICOLON
                | '*' TYPE SEMICOLON
                | TYPE IntegerValue SEMICOLON
                | '*' TYPE IntegerValue SEMICOLON
                | TYPE SEMICOLON StringValue
                | '*' TYPE SEMICOLON StringValue
                | TYPE IntegerValue SEMICOLON StringValue
                | '*' TYPE IntegerValue SEMICOLON StringValue
                ;

IdentifierList  :
                    IDENTIFIER
                | IDENTIFIER ',' IDENTIFIER
                |
                ;

PointerType     :
                    '*' Type
                |
                ;

FunctionType   :
                    FUNC '(' ')'
                | FUNC '(' ParameterList ')'
                | FUNC '(' ParameterList ',' ')'
                | FUNC '(' ')' '(' ')'
                | FUNC '(' ParameterList ')' '(' ')'
                | FUNC '(' ParameterList ',' ')' '(' ')'
                | FUNC '(' ')' '(' ParameterList ')'
                | FUNC '(' ParameterList ')' '(' ParameterList ')'
                | FUNC '(' ParameterList ',' ')' '(' ParameterList ')'
                | FUNC '(' ')' '(' ParameterList ',' ')'
                | FUNC '(' ParameterList ')' '(' ParameterList ',' ')'
                | FUNC '(' ParameterList ',' ')' '(' ParameterList ',' ')'
                | FUNC '(' ')' Type
                | FUNC '(' ParameterList ')' Type
                | FUNC '(' ParameterList ',' ')' Type      
                |
                ;            

ParameterList   :
                Type ParameterList
                | IdentifierList Type ParameterList
                | IdentifierList ARGS Type ParameterList
                | ARGS Type ParameterList
                | ',' Type
                | ',' IdentifierList Type
                | ',' IdentifierList ARGS Type
                | ',' ARGS Type
                |
                ;

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
                |
                ;

TypeElem        :
                    Type TypeElem 
                | '~' Type TypeElem 
                | '|' Type 
                | '|' '~' Type 
                |
                ;

MapType         :
                    MAP '[' Type ']' ElementType
                |
                ;

ChannelType     :
                    CHAN ElementType
                | CHAN '<-' ElementType
                | '<-' CHAN
                |
                ;

// from reference.y
program : package import StatementList
    | program error '\n' {printf("ERROR");}
    ;
package : PACKAGE IDENTIFIER {printf("package end");};
import : import IMPORT StringValue{printf("import end");}
        |
        ;

/*------------------------ Expressions section ------------------------*/ // 12novel30
Operand : 
                Literal
            |   OperandName TypeArgsLoop
            |   '(' Expression ')'
            ;
Literal :
                BasicLit
            |   CompositeLit
            |   FunctionLit
            ;
BasicLit :      int_lit | float_lit | imaginary_lit | rune_lit | string_lit ; // 추가 필요
OperandName :   IDENTIFIER | QualifiedIdent ;
Conversion :    Type '(' Expression CommaLoop ')' ;
CommaLoop :
                ',' CommaLoop
            |
            ;
MethodExpr : Type '.' IDENTIFIER ;
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
                '[' ExpressionLoop ':' ExpressionLoop ']'
            |   '[' ExpressionLoop ':' Expression ':' Expression ']'
            ;
ExpressionLoop :    
                Expression ExpressionLoop
            |
            ;
TypeAssertion : '.' '(' Type ')' ;
Arguments :     '(' ArgumentsLoop ')' ;
ArgumentsLoop : 
                ExpressionList '...' ',' ArgumentsLoop
            |   Type ExpressionListLoop '...' ',' ArgumentsLoop
            |   ExpressionList '...' ArgumentsLoop
            |   Type ExpressionListLoop '...' ArgumentsLoop
            |   ExpressionList ',' ArgumentsLoop
            |   Type ExpressionListLoop ',' ArgumentsLoop
            |   ExpressionList ArgumentsLoop
            |   Type ExpressionListLoop  ArgumentsLoop
            |
            ;
ExpressionListLoop :
                ',' ExpressionList ExpressionListLoop
            |
            ;

/*------------------------ Operators section ------------------------*/ // 12novel30
Expression :
                    UnaryExpr
                |   Expression binary_op Expression
                ;
ExpressionList :
                Expression ',' Expression
            |
            ;
UnaryExpr :
                    PrimaryExpr
                |   unary_op UnaryExpr
                ;
binary_op :         '||' | '&&' | rel_op | add_op | mul_op ;
rel_op :            '==' | '!=' | '<' | '<=' | '>' | '>=' ;
add_op :            '+' | '-' | '|' | '^' ;
mul_op :            '*' | '/' | '%' | '<<' | '>>' | '&' | '&^' ;
unary_op :          '+' | '-' | '!' | '^' | '*' | '&' | '<-' ;

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
			|
			;
LabeledStmt :
				IDENTIFIER ':' Statement
			|
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
SendStmt :          Channel '<-' Expression ;
Channel : //for SendStmt 
			Expression ;
IncDecStmt :
                    Expression '++'
                |	Expression '--'
                ;
Assignment :        ExpressionList assign_op ExpressionList ;
assign_op : //for Assignment
			add_op '='
		|	mul_op '='
		|   '='
		;
//
GoStmt :            GO Expression ;
ReturnStmt :
			RETURN ExpressionList
        |   RETURN
		;
BreakStmt :
			BREAK Label
        |   BREAK
		;
ContinueStmt :
			CONTINUE Label
        |   CONTINUE
		;
GotoStmt :          GOTO IDENTIFIER ; //label
FallthroughStmt :   FALLTHROUGH ;
Block :             '{' StatementList '}' ;
StatementList : //for block
                    Statement ';' StatementList 
				|
				;
IfStmt :
			IF SimpleStmt ';' Expression Block ELSE IfStmt
		| 	IF SimpleStmt ';' Expression Block ELSE Block
		|   IF Expression Block ELSE IfStmt
        |   IF Expression Block ELSE Block
        |   IF Expression Block
		;
SwitchStmt :
			ExprSwitchStmt
		|	TypeSwitchStmt
		|
		;
ExprSwitchStmt : //for SwitchStmt
			SWITCH SimpleStmt ';' Expression '{' ExprCaseClauseLoop'}'
		|   SWITCH Expression '{' ExprCaseClauseLoop'}'
		|   SWITCH SimpleStmt ';' '{' ExprCaseClauseLoop'}'
        |   SWITCH '{' ExprCaseClauseLoop'}'
        ;
ExprCaseClause : //for SwitchStmt
			ExprSwitchCase ':' StatementList ;
ExprCaseClauseLoop : //for SwitchStmt
            ExprCaseClause ExprCaseClauseLoop ;
ExprSwitchCase : //for SwitchStmt
			CASE ExpressionList
		|	DEFAULT
		;
TypeSwitchStmt : //for SwitchStmt
			SWITCH SimpleStmt ';' TypeSwitchGuard '{' TypeCaseClauseLoop '}'
        |   SWITCH TypeSwitchGuard '{' TypeCaseClauseLoop '}'
        ;
TypeSwitchGuard : //for SwitchStmt
			IDENTIFIER ':=' PrimaryExpr '.' '(' 'type' ')'
        |   PrimaryExpr '.' '(' 'type' ')'
		;
TypeCaseClause : //for SwitchStmt
			TypeSwitchCase ':' StatementList
		;
TypeCaseClauseLoop : //for SwitchStmt
            TypeCaseClause TypeCaseClauseLoop ;
TypeSwitchCase : //for SwitchStmt
			CASE TypeList
		|	DEFAULT
		;
SelectStmt :
			SELECT '{' CommClauseLoop '}'
		;
CommClause : //for SelectStmt
			CommCase ':' StatementList
		;
CommClauseLoop : //for SelectStmt
            CommClause CommClauseLoop
        ;
CommCase : //for SelectStmt
			CASE SendStmt
		|	CASE RecvStmt
        |   DEFAULT
		;
RecvStmt : //for SelectStmt
			ExpressionList '=' RecvExpr
		|	IdentifierList ':=' RecvExpr
        |   RecvExpr
		;
RecvExpr : //for SelectStmt
			Expression
		;
ForStmt :
			FOR Condition Block
		|	FOR ForClause Block
		|	FOR RangeClause Block
        |   FOR Block
		;
Condition : //for ForStmt 
			Expression
		;
ForClause : //for ForStmt
			InitStmt ';' Condition ';' PostStmt
        |   ';' Condition ';' PostStmt
        |   InitStmt ';'';' PostStmt
        |   InitStmt ';' Condition ';'
        |   ';' ';' PostStmt
        |   ';' Condition ';'
        |   InitStmt ';' ';'
        |   ';' ';'
		;
InitStmt : //for ForStmt
			SimpleStmt
		;
PostStmt : //for ForStmt
			SimpleStmt
		;
RangeClause : //for ForStmt
			ExpressionList '=' RANGE Expression
		|	IdentifierList ':=' RANGE Expression
        |   RANGE Expression
		;
DeferStmt : 
			DEFER Expression
		;
%%
/* 그 내꺼 노션 보면 EBNF Grammer 어떻게 짜는지 있는 지 있음 */
/* 민선ㅇ Grammer에서 string token 쓰고 싶으면 작은 따옴표로 해야돼 큰 따옴표는 안되더라 */