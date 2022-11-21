%{
#include <stdio.h>
#include "go_yacc.tab.h"

enum IdentifyTypes {
    PACKAGE_TYPE = 1,
    INT_TYPE,
    FLOAT_TYPE,
    STRING_TYPE,
    FUNC_TYPE
};

int line_number = 1;
%}
characters [a-zA-z]
digits [0-9]
integer (0|[1-9]{digits}*)
float {integer}\.{digits}+((E|e)[+\-]?{digits}+)?
string \"[^"]*\"
identifier {characters}({characters}|[_-]|{digits})*
operaters [-+*/]

%%

package         { printf("Package   ");
                return PACKAGE;
                }
import          { printf("Import   ");
                return IMPORT;
                }
int             { printf("Int   ");
                return INTEGER;
                }
float           { printf("Float   ");
                return FLOAT;
                }
string          { printf("String   ");
                return STRING;
                }
var             { printf("Declare   ");
                return VAR;
                }
func            { printf("Func   ");
                return FUNC;
                }
{integer}       { printf("IntegerValue   ");
                return IntegerValue;
                }
{float}         { printf("FloatValue     ");
                return FloatValue;
                }
{string}        { printf("String_Value   ");
                return StringValue;
                }
{identifier}    { printf("Identifier   ");
                return IDENTIFIER;
                }
{operaters}     { printf("Ops   "); 
                return *yytext; 
                }
"{"             { printf("{");
                return *yytext;
                }
"}"             { printf("}");
                return *yytext; 
                }
"("             {printf("("); return *yytext;}
")"             {printf(")"); return *yytext;}
=               { printf("Assign   "); return *yytext; }

\n              { printf("\n"); line_number++; }
"//".*"\n"          ;
"/*"(.|"\n")*"*\\"   ;
[ \t]       ;
,           ;

%%

int yywrap(void) {
    return 1;
}

/* int main() {
    while(yylex()) {
        
    }
    return 0;
} */