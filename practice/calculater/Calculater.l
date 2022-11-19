%{
#include "Calculater.tab.h"
%}

digit [0-9]
integer {digit}+

%%

{integer} {     yylval.inte = atoi(yytext);
                return INTEGER;}

[-+/*\n]        return *yytext;
[ \t]+  ;
.   ;

%%
int yywrap(void)
{
  return 1;
}
