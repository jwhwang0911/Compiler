%{
#include <stdio.h>
%}

%union {
    int inte;
}

%token INTEGER
%type<inte> expression
%left '+' '-'
%left '*' '/'

%%

program:
                program expression '\n' { printf("%d\n", $2); }
|               /* NOTHING */
;

expression:
                INTEGER
|               expression '+' expression       { $$ = $1 + $3; }
|               expression '-' expression       { $$ = $1 - $3; }
|               expression '*' expression       { $$ = $1 * $3; }
|               expression '/' expression       { $$ = $1 / $3; }
;

%%
/* error 내용을 출력 */
void yyerror(char *s)
{
  printf("%s\n", s);
}

int main() {
    yyparse();
}