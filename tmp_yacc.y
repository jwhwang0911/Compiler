
%{
#include<stdio.h>
%}

%union{
}

%token PACKAGE IMPORT FUNC VAR RETURN
%token IDENTIFIER
%token INTEGER FLOAT STRING
%token IntegerValue FloatValue StringValue

%start program

%%

program : package import StatementList
    | program error '\n' {printf("ERROR");}
    ;
package : PACKAGE IDENTIFIER {printf("package end");};
import : import IMPORT StringValue{printf("import end");}
        |
        ;

// 여기부터 내가 짬 - 깃허브 보고 수정해야함
StatementList :
					Statement 
				|
				;

Statement :	
				Declaration
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
SimpleStmt :
				EmptyStmt
			|	ExpressionStmt
			|	SendStmt
			|	IncDecStmt
			|	Assignment
			|	ShortVarDecl
			|
			;
//for SimpleStmt
EmptyStmt 	:
			;
ExpressionStmt :
				Expression
			|
			;
SendStmt :
			Channel '<-' Expression .
		|
		;
Channel : //for SendStmt 
			Expression
		|
		;
IncDecStmt :
			Expression '++'
		|	Expression '--'
		|
		;
Assignment :
			ExpressionList assign_op ExpressionList
		|
		;
assign_op : //for Assignment
			add_op '='
		|	mul_op '='
		|
		;
//for Statement
LabeledStmt :
				Label ':' Statement
			|
			;
Label : //for LabeledStmt
			IDENTIFIER
		|
		;
IfStmt :
			'if' SimpleStmt ';' Expression Block 'else' IfStmt
		| 	'if' SimpleStmt ';' Expression Block 'else' Block
		|
		;
SwitchStmt :
			ExprSwitchStmt
		|	TypeSwitchStmt
		|
		;
ExprSwitchStmt : //for SwitchStmt
			'switch' SimpleStmt ';' Expression '{' ExprCaseClause'}'
		|
		;
ExprCaseClause : //for SwitchStmt
			ExprSwitchCase ':' StatementList
		|
		;
ExprSwitchCase : //for SwitchStmt
			'case' ExpressionList
		|	'default'
		|
		;
TypeSwitchStmt : //for SwitchStmt
			'switch' SimpleStmt ';' TypeSwitchGuard '{' TypeCaseClause '}'
			;
TypeSwitchGuard : //for SwitchStmt
			IDENTIFIER ':=' PrimaryExpr '.' '(' 'type' ')'
		|;
TypeCaseClause : //for SwitchStmt
			TypeSwitchCase ':' StatementList
		;
TypeSwitchCase : //for SwitchStmt
			'case' TypeList
		|	'default'
		;
ForStmt :
			"for" Condition Block
		|	"for" ForClause Block
		|	"for" RangeClause Block
		;
Condition : //for ForStmt 
			Expression
		;
ForClause : //for ForStmt
			InitStmt ';' Condition ';' PostStmt
		;
InitStmt : //for ForStmt
			SimpleStmt
		;
PostStmt : //for ForStmt
			SimpleStmt
		;
RangeClause : //for ForStmt
			ExpressionList '=' 'range' Expression
		|	IdentifierList ':=' 'range' Expression
		;
GoStmt :
			'go' Expression
		;
SelectStmt :
			'select' '{' CommClause '}'
		;
CommClause : //for SelectStmt
			CommCase ':' StatementList
		;
CommCase : //for SelectStmt
			'case' SendStmt 'default'
		|	'case' RecvStmt 'default'
		;
RecvStmt : //for SelectStmt
			ExpressionList '=' RecvExpr
		|	IdentifierList ':=' RecvExpr
		;
RecvExpr : //for SelectStmt
			Expression
		;
ReturnStmt :
			'return' ExpressionList
		;
BreakStmt :
			'break' Label
		;
ContinueStmt :
			'continue' Label
		;
GotoStmt :
			'goto' Label
		;
FallthroughStmt : 
			'fallthrough'
		;
DeferStmt : 
			'defer' Expression
		;