%{
// #include "Calculater.tab.h"
#include <stdio.h>
#include <stdlib.h>

int characters = 0;

void yyerror(char *);
%}

/* regexp definitions */
delim [ \t]
ws {delim}+
digit [0-9]
letter [A-Za-z]
id {letter}({letter}|{digit})*
integer (0|([1-9]{digit}*))
number {integer}(\.{digit}+)?((E|e)[+\-]?{digit}+)?
operator [-+()=*/]
semicolon ;
newline \n

%%

{number} { printf("%s\n",yytext); return atoi(yytext); }
{id} { return *yytext; }
{operator} { return *yytext; }
{ws} ;
{semicolon} { return *yytext; }
{newline} { ; }
. { return *yytext; }

%%

/* 선언하지 않으면 컴파일 에러 발생 */
int yywrap(void)
{
  return 1;
}

main () {
    int tok;
    int t = 1;
    while(t) {
      t++;
      printf("d: %d\n",t);
      printf("ret : %d\n",yylex());
    }
}