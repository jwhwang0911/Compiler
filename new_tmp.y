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



statement
    : labeled_statement
    | compound_statement
    | expression_statement
    | selection_statement
    | iteration_statement
    | jump_statement
    ;
/* --------------------labeled_statement-------------------- */
labeled_statement
    : IDENTIFIER ':' statement
    | CASE constant_expression ':' statement
    | DEFAULT ':' statement
    ;
/* LabeledStmt :   IDENTIFIER COLON Statement ; */



compound_statement
    : '{' '}'
    | '{' statement_list '}'
    | '{' declaration_list '}'
    | '{' declaration_list statement_list '}'
    ;
// C언어에서는 선언이 나온 후, 문장이 나온다.

declaration_list
    : declaration
    | declaration_list declaration
    ;

statement_list
    : statement
    | statement_list statement
    ;

expression_statement
    : ';'
    | expression ';'
    ;
// expression_statement는 세미 콜론만 단독으로 있어도 Statement로 간주하는 문법을 제공한다.
// 즉, 단독으로 위치한 세미콜론도 expression_statement로 Ruduce되는 하나의 문장이다.

/* --------------------selection_statement-------------------- */
selection_statement
    : IF '(' expression ')' statement
    | IF '(' expression ')' statement ELSE statement
    | SWITCH '(' expression ')' statement
    ;
/* IfStmt :
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
        |
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
SelectStmt : // 다 봤음
			SELECT '{' CommClauseLoop '}'
		;
CommClause : //for SelectStmt
			CommCase COLON StatementList
		;
CommClauseLoop : //for SelectStmt
            CommClause CommClauseLoop
        |
        ;
CommCase : //for SelectStmt
		|	CASE RecvStmt
        |   DEFAULT
		;
RecvStmt : //for SelectStmt
			ExpressionList '=' RecvExpr
		|	IdentifierList GODEF RecvExpr
        |   RecvExpr
		;
RecvExpr : //for SelectStmt
			Expression
		;
*/



/* --------------------iteration_statement-------------------- */
iteration_statement
    : WHILE '(' expression ')' statement
    | DO statement WHILE '(' expression ')' ';'
    | FOR '(' expression_statement expression_statement ')' statement
    | FOR '(' expression_statement expression_statement expression ')' statement
    ;
/* ForStmt :
			FOR ForClauseBracket Block
		;
ForClauseBracket :
            Condition
        |   ForClause
        |   RangeClause
        |
        ;
Condition : //for ForStmt 
			Expression
		;
ForClause : //for ForStmt
			InitStmtBracket SEMICOLON ConditionBracket SEMICOLON PostStmtBracket
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
		; */
/* --------------------jump_statement-------------------- */
jump_statement
    : GOTO IDENTIFIER ';'
    | CONTINUE ';'
    | BREAK ';'
    | RETURN ';'
    | RETURN expression ';'
    ;
/* ReturnStmt :
			RETURN ExpressionList
        |   RETURN
		;
BreakStmt :
			BREAK IDENTIFIER //label
        |   BREAK
		;
ContinueStmt :
			CONTINUE IDENTIFIER //label
        |   CONTINUE
		;
GotoStmt :          GOTO IDENTIFIER ; //label */


translation_unit
    : external_declaration
    | translation_unit external_declaration
    ;
// external_declaration이 한 번 이상 Recursive하게 반복되는 구조이다.
// translation_unit은 Left-Recursion으로써 구현되었다.
external_declaration
    : function_definition
    | declaration
    ;
// external_declaration은 함수 정의, 외부 변수 선언 문법을 제공한다.
// 즉, 외부에 선언될 수 있는 것은 함수, 변수로 제한한다.
function_definition
    : declaration_specifiers declarator declaration_list compound_statement
    | declaration_specifiers declarator compound_statement
    | declarator declaration_list compound_statement
    | declarator compound_statement
    ;

// 본 Post의 하단에 가까울수록 Root에 가까운 문법이다. (우선순위가 낮다.)
// 즉, 올라갈수록 파스 트리의 Leaf에 가까워져 우선 순위가 높아진다.

%%
#include 

extern char yytext[];
extern int column;

yyerror(s)
char *s;
{
    fflush(stdout);
    printf("\n%*s\n%*s\n", column, "^", column, s);
}
