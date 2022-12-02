%{
#include<stdio.h>
#include"go_yacc.tab.h"
int lineno = 1;
int tokenno = 0;
%}

digits [0-9]
integer 0|[1-9][0-9]*
float {integer}\.{digits}+((E|e)[+\-]?{digits}+)?
identifier ([a-zA-Z]|[0-9]|"_")+
string \"[^"]*\"
imaginary ({integer}|{float})[i]

%%

break            {printf(" Break ");
                tokenno++;
                return BREAK;
                }
default         {printf(" Default ");
                tokenno++;
                return DEFAULT;
                }
func            {printf(" FUNC ");
                tokenno++;
                return FUNC;
                }
interface       {printf(" INTERFACE ");
                tokenno++;
                return INTERFACE;
                }
select          {printf(" SELECT ");
                tokenno++;
                return SELECT;
                }
case            {printf(" CASE ");
                tokenno++;
                return CASE;
                }
defer           {printf(" DEFER ");
                tokenno++;
                return DEFER;
                }
go              {printf(" GO ");
                tokenno++;
                return GO;
                }
map             {printf(" MAP ");
                tokenno++;
                return MAP;
                }
struct          {printf(" STRUCT ");
                tokenno++;
                return STRUCT;
                }
chan            {printf(" CHAN ");
                tokenno++;
                return CHAN;
                }
else            {printf(" ELSE ");
                tokenno++;
                return ELSE;
                }
goto            {printf(" GOTO ");
                tokenno++;
                return GOTO;
                }
package         {printf(" PACKAGE ");
                tokenno++;
                return PACKAGE;
                }
switch          {printf(" SWITCH ");
                tokenno++;
                return SWITCH;
                }
const           {printf(" CONST ");
                tokenno++;
                return CONST;
                }
fallthrough     {printf(" FALLTHROUGH ");
                tokenno++;
                return FALLTHROUGH;
                }
if              {printf(" IF ");
                tokenno++;
                return IF;
                }
range           {printf(" RANGE ");
                tokenno++;
                return RANGE;
                }
type            {printf(" TYPE ");
                tokenno++;
                return TYPE;
                }
continue        {printf(" CONTINUE ");
                tokenno++;
                return CONTINUE;
                }
for             {printf(" FOR ");
                tokenno++;
                return FOR;
                }
import          {printf(" IMPORT ");
                tokenno++;
                return IMPORT;
                }
return          {printf(" RETURN ");
                tokenno++;
                return RETURN;
                }
var             {printf(" VAR ");
                tokenno++;
                return VAR;
                }
true | 
false           {printf(" Boolean: %s ",yytext);
                tokenno++;
                return BooleanValue;
                }

int |
uint            {printf(" Int ");
                        tokenno++;
                        return INT;
                        }
any             {printf(" Any");
                tokenno++;
                return ANY;
                }
bool            {printf(" Bool ");
                tokenno++;
                return BOOL;
                }
byte            {printf(" Byte ");
                tokenno++;
                return BYTE;
                }
comparable      {printf(" Comparable ");
                tokenno++;
                return COMPARABLE;
                }
complex64 |
complex128      {printf(" Complex ");
                                tokenno++;
                                return COMPLEX;
                                }

error       {printf(" ERROR ");
                tokenno++;
                return ERROR;
                }

float |
float64 |
float32         {printf(" FLOAT ");
                tokenno++;
                return FLOAT;
                }

string          {printf(" STRING ");
                tokenno++;
                return STRING;
                }

rune            {printf(" RUNE ");
                tokenno++;
                return RUNE;
                }

("=")           {printf(" Assign ");
                tokenno++;
                return *yytext;
                }
(":=")                          {printf( "Go_Assign" );
                                tokenno++;
                                return GODEF;
                                }

("+")|("-")|("*")|("/")|("%")   {printf(" Arith_Ops ");
                                tokenno++;
                                return *yytext;
                                }
("++")|("--")                   {printf(" Incre_Ops ");
                                tokenno++;
                                return INCRE_DECRE;
                                }


("&")|("|")|("^")|("~")         {printf(" Bit_Ops ");
                                tokenno++;
                                return *yytext;
                                }

("<<")|(">>")|>("&^")   {printf(" Bit_Ops ");
                        tokenno++;
                        return LRSHIFT;
                        }

("+=")|("-=")|("*=")|("/=")|("%=")      {printf(" Arith_Asign ");
                                        tokenno++;
                                        return ARITH_ASSIGN;
                                        }
("&=")|("|=")|("^=")|("<<=")|(">>=")|("&^=")   {printf(" Bit_Asign : %s ",yytext);
                                        tokenno++;
                                        return BIT_ASSIGN;
                                        }
("&&")         {printf(" And ");
                tokenno++;
                return AND;
                }
("||")           {printf(" Or ");
                        tokenno++;
                        return OR;
                        }

("!")     {printf(" Logic_Ops ");
                        tokenno++;
                        return *yytext;
                        }
("==")|("<")|(">")|("!=")|("<=")|(">=") {printf(" Compare_Ops ");
                                        tokenno++;
                                        return COMPARE;
                                        }
"<-"    {printf(" Channel_Ops ");
        tokenno++;
        return CHANNELOP;
        }

(".")|(",")   {printf("%s",yytext);
                tokenno++;
                return *yytext;
                }

"..."   {printf(" ARGS ");
        tokenno++;
        return ARGS;
        }

"("     {printf(" S_LBRACKET ");
        tokenno++;
        return *yytext;
        }
")"     {printf(" S_RBRACKET ");
        tokenno++;
        return *yytext;
        }
"{"     {printf(" M_LBRACKET ");
        tokenno++;
        return *yytext;
        }
"}"     {printf(" M_RBRACKET ");
        tokenno++;
        return *yytext;
        }
"["     {printf(" L_LBRACKET ");
        tokenno++;
        return *yytext;
        }
"]"     {printf(" L_RBRACKET ");
        tokenno++;
        return *yytext;
        }
        
{integer}       {printf(" IntegerValue: %s ",yytext);
                tokenno++;
                return IntegerValue;
                }

{identifier}    {printf(" Identifier: %s ",yytext);
                tokenno++;
                return IDENTIFIER;
                }

{float}         {printf(" FloatValue: %s ",yytext);
                tokenno++;
                return FloatValue;
                }
{string}        {printf(" StringValue: %s ",yytext);
                tokenno++;
                return StringValue;
                }
{imaginary}     {printf(" ImaginaryValue: %s ",yytext);
                tokenno++;
                return ImaginaryValue;
                }

":"                 {printf(" : ");
                    tokenno++;
                    return COLON;
                    }
";"                {printf(" ; ");
                    tokenno++;
                    return SEMICOLON;
                    }
"//".*"\n"         {printf("\n%d: ",++lineno); tokenno = 0;}
"/*"(.|"\n")*"*/"   ;
" "|"\t"|"\r"      { /*do nothing*/ }

\n                  {printf("\n%d : ",++lineno); tokenno = 0; }
.           {
            printf("\n\nline : %d, \n%d-th token : \n%s is not valid token",lineno,++tokenno, yytext );
            exit(1);
            };

%%

int yywrap(void) {
    return 1;
}

/*int main() {
    printf("%d : ",lineno);
    yylex();
    return 0;
}*/