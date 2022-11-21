%{
#include<stdio.h>
%}

%union{
}

%token PACKAGE IMPORT FUNC VAR
%token IDENTIFIER
%token INTEGER FLOAT STRING
%token IntegerValue FloatValue StringValue

%start program

%%

program : package import statementslist
    | program error '\n' {printf("ERROR");}
    ;

package : PACKAGE IDENTIFIER {printf("package end");};

import : import IMPORT StringValue{printf("import end");}
        |
        ;

statementslist :
                    FuncStatement statementslist
                |   DeclareStatement statementslist
                |   Statement statementslist
                |
                ;

Statement       :
                    IDENTIFIERList '=' DataList
                |
                ; 

FuncStatement   :
                    FUNC IDENTIFIER '(' DeclareStatement ')' '{' statementslist '}'
                |   FUNC IDENTIFIER '(' DeclareStatement ')' TYPE '{' statementslist '}'
                ;

DeclareStatement    :
                    VAR IDENTIFIERList TYPE
                |   VAR IDENTIFIERList TYPE '=' DataList
                |   VAR IDENTIFIERList '=' DataList
                |
                ;

IDENTIFIERList  :
                    IDENTIFIER IDENTIFIERList
                |
                ;

TYPE            :
                    INTEGER
                |   FLOAT
                |   STRING

DataList        :
                    IntegerValue DataList
                |   FloatValue DataList
                |   StringValue DataList
                |
                ;
%%

void yyerror(char *s) {
    printf("%s",s);
}

int main(void) {
    yyparse();
    return 0;
}