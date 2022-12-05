%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

extern int lineno;
extern int tokenno;
extern char *yytext;
extern FILE *file_parser;
extern FILE *fp;

int yylex();
void yyerror(char *s);
char *block_list[512];
char *id_list[512];
int id_list_index=0;

void put_in_list(char *p);
bool check_in_list(char *p);
void decl_check(char *p);
%}

%union {
    char *id;
}

%token BREAK DEFAULT SELECT SWITCH CASE FALLTHROUGH IF ELSE GOTO RANGE FOR CONTINUE // 반복문, SELECT문
%token FUNC INTERFACE DEFER RETURN ARGS// 함수, INTERFACE 관련
%token GO CHAN// GO CHAN
%token MAP STRUCT CONST TYPE VAR
%token BOOL BYTE INT COMPLEX FLOAT STRING RUNE  // 변수 type들
%token PACKAGE IMPORT
%token IntegerValue FloatValue StringValue ImaginaryValue BooleanValue CharValue
%token COLON SEMICOLON

%token GODEF INCRE_DECRE LRSHIFT ARITH_ASSIGN BIT_ASSIGN AND OR COMPARE CHANNELOP

%token<id> IDENTIFIER

%start SourceFile

%right FUNC INTERFACE CHAN MAP STRUCT BOOL INT COMPLEX FLOAT STRING RUNE BYTE CHANNELOP '(' '[' '<' 

%right GODEF
%right IDENTIFIER ','

%left '='
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
TopLevelDecl   :    Declaration     |   FunctionDecl | MethodDecl 
            |   error
                {
                    printf("[Invalid Syntax] :: Declaration { Variable, Function, Method etc. }\n");
                    fprintf(file_parser,"[Invalid Syntax] :: Declaration { Variable, Function, Method etc. }\n");
                    exit(1);
                }
                ;

FunctionDecl :
                FUNC IDENTIFIER TypeParameters Signature Block { decl_check($2);}
            |    FUNC IDENTIFIER TypeParameters Parameters Block { decl_check($2);}
            |   FUNC IDENTIFIER Signature Block { decl_check($2);}
            |   FUNC IDENTIFIER Parameters Block { decl_check($2);}
            |   FUNC IDENTIFIER TypeParameters Signature { decl_check($2);}
            |   FUNC IDENTIFIER TypeParameters Parameters { decl_check($2);}
            |   FUNC IDENTIFIER Signature { decl_check($2);}
            |   FUNC IDENTIFIER Parameters { decl_check($2);}
            ;
MethodDecl :
                FUNC Receiver IDENTIFIER Signature Block { decl_check($3);}
            |   FUNC Receiver IDENTIFIER Parameters Block { decl_check($3);}
            |   FUNC Receiver IDENTIFIER Signature { decl_check($3);}
            |   FUNC Receiver IDENTIFIER Parameters { decl_check($3);}
            ;
Receiver : Parameters ;

Declaration     :   VarDecl | ConstDecl | TypeDecl ;   

//Identifiers
IdentifierList  :
                ',' IDENTIFIER IdentifierList { decl_check($2);}
                |    ',' IDENTIFIER { decl_check($2);}
                ;

ExpressionList  :
                    ExpressionList ',' Expression 
                |   Expression
                ;

VarDecl        :    VAR VarSpec
                |   VAR '(' VarSpecList ')'
                ;

VarSpec        : 
                IDENTIFIER Type '=' ExpressionList { decl_check($1);}
            |   IDENTIFIER IdentifierList Type '=' ExpressionList { decl_check($1);}
            |   IDENTIFIER Type { decl_check($1);}
            |   IDENTIFIER IdentifierList Type { decl_check($1);}
            |   IDENTIFIER '=' ExpressionList { decl_check($1);}
            |   IDENTIFIER IdentifierList '=' ExpressionList{ decl_check($1);}
            ;

VarSpecList     :   VarSpec SEMICOLON VarSpecList
                |   VarSpec
                ;

ConstDecl       : 
                    CONST ConstSpec
                |   CONST '(' ConstSpecLoop ')' 
                ; 

ConstSpec       :
                    IDENTIFIER Type '=' ExpressionList { decl_check($1);}
                |   IDENTIFIER IdentifierList Type '=' ExpressionList  { decl_check($1);}
                |   IDENTIFIER '=' ExpressionList { decl_check($1);}
                |   IDENTIFIER IdentifierList '=' ExpressionList { decl_check($1);}
                |   IDENTIFIER { decl_check($1);}
                |   IDENTIFIER IdentifierList { decl_check($1);}
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
                    |   TypeSpec SEMICOLON
                    ;
// Alias declarations
AliasDecl           : IDENTIFIER '=' Type  { decl_check($1);}; 
// Type definitions
TypeDef             : 
                        IDENTIFIER Type { decl_check($1);}
                    |   IDENTIFIER TypeParameters Type { decl_check($1);}
                    ;
// Type parameter declarations
TypeParameters      : '[' TypeParamList ']'
                    | '[' TypeParamList ',' ']'
                    ;
TypeParamList :
                    TypeParamList ',' TypeParamDecl
                |   TypeParamDecl;
TypeParamDecl : IDENTIFIER TypeElem ;
                | IDENTIFIER IdentifierList TypeElem ;


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
                Operand
            |   Conversion 
            |   MethodExpr
            |   PrimaryExpr Selector
            |   PrimaryExpr Index
            |   PrimaryExpr Slice
            |   PrimaryExpr TypeAssertion
            |   PrimaryExpr Arguments 
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
            |   IDENTIFIER 
            |   '(' Expression ')'
            ;
            

Literal     :
                BasicLit
            |   CompositeLit
            | FunctionLit
            ;

CompositeLit : LiteralType LiteralValue;   
LiteralType :   StructType | ArrayType | '[' ARGS ']' Type |
                SliceType | MapType ;
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

Key : Expression | LiteralValue ; // fieldname
// FieldName : IDENTIFIER ;
Element : Expression | LiteralValue ;

FunctionLit : FUNC Signature Block ;
            | FUNC Parameters Block ;


BasicLit    :      
            IntegerValue 
            | BooleanValue
            | FloatValue 
            | ImaginaryValue 
            | StringValue
            | CharValue
            ;

unary_op :          '+' | '-' | '!' | '^' | '&' | CHANNELOP ; 

// Type
Type    :   INT
        |   FLOAT
        |   BOOL
        |   COMPLEX 
        |   RUNE 
        |   STRING 
        |   BYTE
        |   FunctionType 
        |   MapType 
        |   ChannelType 
        |   StructType 
        |   PointerType 
        |   ArrayType 
        |   SliceType 
        |   InterfaceType
        ;

                
FunctionType    :   FUNC Signature
                |   FUNC Parameters
                ;


Signature       :
                   Parameters Type 
                |   Parameters Parameters
                ;
                
Parameters      :
                    '(' ')' 
                |   '(' ParameterList ')'
                ;


ParameterList   : ParameterDecl
                | ParameterDecl ',' ParameterDecl;

ParameterDecl   :   Type
                |   IDENTIFIER Type
                |   IDENTIFIER IdentifierList Type
                |   ARGS Type
                |   IDENTIFIER ARGS Type
                |   IDENTIFIER  IdentifierList ARGS Type;
                   

MapType         :   MAP '[' Type ']' Type;

ChannelType     : CHAN Type    |    CHANNELOP Type ;

StructType      : STRUCT '{' StructTypeLoop '}'
                | STRUCT '{' '}'
                ;

StructTypeLoop : FieldDecl SEMICOLON StructTypeLoop
                | FieldDecl SEMICOLON
                ;

FieldDecl       :  IDENTIFIER Type { decl_check($1);}
                |  IDENTIFIER IdentifierList Type { decl_check($1);}
                |  IDENTIFIER Type StringValue{ decl_check($1);}
                |  IDENTIFIER IdentifierList Type StringValue{ decl_check($1);}
                ;


PointerType     :    '*' Type;

ArrayType       :   '[' Expression ']' Type;

SliceType       :   '[' ']' Type;

InterfaceType   :   INTERFACE '{''}'
                |   INTERFACE '{' InterfaceElem SEMICOLON '}';

InterfaceElem   :   
                    IDENTIFIER Signature { decl_check($1);} 
                |   IDENTIFIER Parameters { decl_check($1);} 
                | TypeElem;

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
ShortVarDecl : 
                IDENTIFIER IdentifierList GODEF ExpressionList { decl_check($1);}
            |   IDENTIFIER GODEF ExpressionList { decl_check($1);};
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
            |   error
            {
                printf("[Invalid Syntax] :: Check Statement\n");
                fprintf(file_parser,"[Invalid Syntax] :: Check Statement Grammer\n");
                exit(1);
            }
            ;
LabeledStmt :   IDENTIFIER COLON Statement
            ;
SimpleStmt :
			|	ExpressionStmt 
			|	SendStmt
			|	IncDecStmt
			|	Assignment
			|	ShortVarDecl
			;
//for SimpleStmt
ExpressionStmt :    Expression ;
SendStmt :          Channel CHANNELOP Expression;
Channel : //for SendStmt 
			Expression;
IncDecStmt :        Expression INCRE_DECRE ;
Assignment :        ExpressionList assign_op ExpressionList;
assign_op : //for Assignment
			ARITH_ASSIGN 
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
            '{' StatementList '}' 
        |   '{' '}' ; 
StatementList : //for block
                    Statement SEMICOLON StatementList
                |   Statement SEMICOLON
				;
// IfStmt = "if" [ SimpleStmt ";" ] Expression Block [ "else" ( IfStmt | Block ) ] .
IfStmt : // test fin. 12-02
			IF SimpleStmt SEMICOLON Expression Block ELSE IfStmt 
		| 	IF SimpleStmt SEMICOLON Expression Block ELSE Block 
        | 	IF SimpleStmt SEMICOLON Expression Block 
		|   IF Expression Block ELSE IfStmt
        |   IF Expression Block ELSE Block
        |   IF Expression Block
		;
SwitchStmt : // test fin. 12-02
			ExprSwitchStmt 
		|	TypeSwitchStmt 
		;
ExprSwitchStmt : //for SwitchStmt //fin
			SWITCH SimpleStmtBrakets ExpressionBrakets '{' ExprCaseClauseLoop'}'
        |   SWITCH SimpleStmtBrakets ExpressionBrakets '{' '}'
        |	SWITCH ExpressionBrakets '{' ExprCaseClauseLoop'}'
        |   SWITCH ExpressionBrakets '{' '}'
        ;
SimpleStmtBrakets : //for SwitchStmt //fin
            SimpleStmt SEMICOLON 
        /* | {printf("[SimpleStmtBrakets2] ");}/ */
        ;
ExpressionBrakets : //for SwitchStmt //fin
            Expression
        |
        ;
ExprCaseClause : //for SwitchStmt //fin
			ExprSwitchCase COLON StatementList;
ExprCaseClauseLoop : //for SwitchStmt //fin
            ExprCaseClause ExprCaseClauseLoop
        |   ExprCaseClause
        ;
ExprSwitchCase : //for SwitchStmt //fin
			CASE ExpressionList 
		|	DEFAULT 
		;
TypeSwitchStmt : //for SwitchStmt
			SWITCH SimpleStmtBrakets TypeSwitchGuard '{' TypeCaseClauseLoop '}' 
        |   SWITCH TypeSwitchGuard '{' TypeCaseClauseLoop '}' 
        ;
TypeSwitchGuard : //for SwitchStmt
			IDENTIFIER GODEF PrimaryExpr '.' '(' TYPE ')'
            | PrimaryExpr '.' '(' TYPE ')'
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
RecvStmt : //for SelectStmt
			ExpressionList '=' RecvExpr 
		|	IDENTIFIER IdentifierList GODEF RecvExpr 
        |	IDENTIFIER GODEF RecvExpr
        |   RecvExpr
		;
RecvExpr : //for SelectStmt
			Expression
		;
ForStmt :
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
InitStmtBracket: //for ForStmt
            SimpleStmt
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
            IDENTIFIER '=' RANGE Expression 
		|	IDENTIFIER GODEF RANGE Expression //fin
        |   IDENTIFIER IdentifierList '=' RANGE Expression 
		|	IDENTIFIER IdentifierList GODEF RANGE Expression //fin
        |   RANGE Expression //fin
		;
DeferStmt : // test fin. 12-02
			DEFER Expression
		;


%%

void yyerror(char *s) {
    printf("\n[Syntax Error] line : %d, %d th token : %s \n", lineno,tokenno,yytext);
    fprintf(file_parser,"\n[Syntax Error] line : %d, %d th token : %s \n", lineno,tokenno,yytext);
}

void put_in_list(char *p) {
    id_list[id_list_index] = (char*)malloc(strlen(p)+10);
    sprintf(id_list[id_list_index],"%s", p);
    id_list_index++;
}

bool check_in_list(char *p) {
    for (int i =0; i < id_list_index; i++) {
        if(!strcmp(id_list[i],p)) {
            return true;
        }
    }
    return false;
}

void decl_check(char *p) {
    if(!check_in_list(p)) {
        put_in_list(p);
    } else {
        printf("\n[Sementic Error] line : %d, # of token : %d, %s  Already been declared\n",lineno, tokenno, p);
        fprintf(file_parser,"\n[Sementic Error] line : %d, # of token : %d, %s  Already been declared\n",lineno, tokenno, p);
        for (int i = 0; i < id_list_index; i++  ) {
            fprintf(fp, "%s\n",id_list[i]);
        }
        exit(1);
    };
}

int main() {
    file_parser = fopen("Token.txt","w+");
    fprintf(file_parser,"1 : ");
    fp = fopen("Identifiers.txt","w+");
    fprintf(fp, "[Accepted Idnetifiers]\n\n");
    yyparse();
    for (int i = 0; i < id_list_index; i++  ) {
        fprintf(fp, "%s\n",id_list[i]);
    }
    printf("\n");
    fclose(file_parser);
    fclose(fp);
}