%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"go_yacc.tab.h"


FILE *file_parser;
FILE *fp;
int lineno = 1;
int tokenno = 0;
extern int id_list_index;
extern char *id_list[512];
%}

digits [0-9]
integer 0|[1-9][0-9]*
float {integer}\.{digits}+((E|e)[+\-]?{digits}+)?
identifier ([a-zA-Z]|[0-9]|"_")+
string \"[^"]*\"
char \'[^'"]\'
imaginary ({integer}|{float})[i]



%%

break            {fprintf(file_parser," Break ");
                tokenno++;
                return BREAK;
                }
default         {fprintf(file_parser," Default ");
                tokenno++;
                return DEFAULT;
                }
func            {fprintf(file_parser," FUNC ");
                tokenno++;
                return FUNC;
                }
interface       {fprintf(file_parser," INTERFACE ");
                tokenno++;
                return INTERFACE;
                }
select          {fprintf(file_parser," SELECT ");
                tokenno++;
                return SELECT;
                }
case            {fprintf(file_parser," CASE ");
                tokenno++;
                return CASE;
                }
defer           {fprintf(file_parser," DEFER ");
                tokenno++;
                return DEFER;
                }
go              {fprintf(file_parser," GO ");
                tokenno++;
                return GO;
                }
map             {fprintf(file_parser," MAP ");
                tokenno++;
                return MAP;
                }
struct          {fprintf(file_parser," STRUCT ");
                tokenno++;
                return STRUCT;
                }
chan            {fprintf(file_parser," CHAN ");
                tokenno++;
                return CHAN;
                }
else            {fprintf(file_parser," ELSE ");
                tokenno++;
                return ELSE;
                }
goto            {fprintf(file_parser," GOTO ");
                tokenno++;
                return GOTO;
                }
package         {fprintf(file_parser," PACKAGE ");
                tokenno++;
                return PACKAGE;
                }
switch          {fprintf(file_parser," SWITCH ");
                tokenno++;
                return SWITCH;
                }
const           {fprintf(file_parser," CONST ");
                tokenno++;
                return CONST;
                }
fallthrough     {fprintf(file_parser," FALLTHROUGH ");
                tokenno++;
                return FALLTHROUGH;
                }
if              {fprintf(file_parser," IF ");
                tokenno++;
                return IF;
                }
range           {fprintf(file_parser," RANGE ");
                tokenno++;
                return RANGE;
                }
type            {fprintf(file_parser," TYPE ");
                tokenno++;
                return TYPE;
                }
continue        {fprintf(file_parser," CONTINUE ");
                tokenno++;
                return CONTINUE;
                }
for             {fprintf(file_parser," FOR ");
                tokenno++;
                return FOR;
                }
import          {fprintf(file_parser," IMPORT ");
                tokenno++;
                return IMPORT;
                }
return          {fprintf(file_parser," RETURN ");
                tokenno++;
                return RETURN;
                }
var             {fprintf(file_parser," VAR ");
                tokenno++;
                return VAR;
                }
true | 
false           {fprintf(file_parser," Boolean: %s ",yytext);
                tokenno++;
                return BooleanValue;
                }

int |
uint            {fprintf(file_parser," Int ");
                        tokenno++;
                        return INT;
                        }
bool            {fprintf(file_parser," Bool ");
                tokenno++;
                return BOOL;
                }
byte            {fprintf(file_parser," Byte ");
                tokenno++;
                return BYTE;
                }
complex64 |
complex128      {fprintf(file_parser," Complex ");
                                tokenno++;
                                return COMPLEX;
                                }

float64 |
float32         {fprintf(file_parser," FLOAT ");
                tokenno++;
                return FLOAT;
                }

string          {fprintf(file_parser," STRING ");
                tokenno++;
                return STRING;
                }

rune            {fprintf(file_parser," RUNE ");
                tokenno++;
                return RUNE;
                }

("=")           {fprintf(file_parser," Assign ");
                tokenno++;
                return *yytext;
                }
(":=")                          {fprintf(file_parser, "Go_Assign" );
                                tokenno++;
                                return GODEF;
                                }

("+")|("-")|("*")|("/")|("%")   {fprintf(file_parser," Arith_Ops ");
                                tokenno++;
                                return *yytext;
                                }
("++")|("--")                   {fprintf(file_parser," Incre_Ops ");
                                tokenno++;
                                return INCRE_DECRE;
                                }


("&")|("|")|("^")|("~")         {fprintf(file_parser," Bit_Ops ");
                                tokenno++;
                                return *yytext;
                                }

("<<")|(">>")|>("&^")   {fprintf(file_parser," Bit_Ops ");
                        tokenno++;
                        return LRSHIFT;
                        }

("+=")|("-=")|("*=")|("/=")|("%=")      {fprintf(file_parser," Arith_Asign ");
                                        tokenno++;
                                        return ARITH_ASSIGN;
                                        }
("&=")|("|=")|("^=")|("<<=")|(">>=")|("&^=")   {fprintf(file_parser," Bit_Asign : %s ",yytext);
                                        tokenno++;
                                        return BIT_ASSIGN;
                                        }
("&&")         {fprintf(file_parser," And ");
                tokenno++;
                return AND;
                }
("||")           {fprintf(file_parser," Or ");
                        tokenno++;
                        return OR;
                        }

("!")     {fprintf(file_parser," Logic_Ops ");
                        tokenno++;
                        return *yytext;
                        }
("==")|("<")|(">")|("!=")|("<=")|(">=") {fprintf(file_parser," Compare_Ops ");
                                        tokenno++;
                                        return COMPARE;
                                        }
"<-"    {fprintf(file_parser," Channel_Ops ");
        tokenno++;
        return CHANNELOP;
        }

(".")|(",")   {fprintf(file_parser,"%s",yytext);
                tokenno++;
                return *yytext;
                }

"..."   {fprintf(file_parser," ARGS ");
        tokenno++;
        return ARGS;
        }

"("     {fprintf(file_parser," S_LBRACKET ");
        tokenno++;
        return *yytext;
        }
")"     {fprintf(file_parser," S_RBRACKET ");
        tokenno++;
        return *yytext;
        }
"{"     {fprintf(file_parser," M_LBRACKET ");
        tokenno++;
        return *yytext;
        }
"}"     {fprintf(file_parser," M_RBRACKET ");
        tokenno++;
        return *yytext;
        }
"["     {fprintf(file_parser," L_LBRACKET ");
        tokenno++;
        return *yytext;
        }
"]"     {fprintf(file_parser," L_RBRACKET ");
        tokenno++;
        return *yytext;
        }
        
{integer}       {fprintf(file_parser," IntegerValue: %s ",yytext);
                tokenno++;
                return IntegerValue;
                }

{float}         {fprintf(file_parser," FloatValue: %s ",yytext);
                tokenno++;
                return FloatValue;
                }

{char}          {fprintf(file_parser,"CharValue : %s",yytext);
                tokenno++;
                return CharValue;
                }

{string}        {fprintf(file_parser," StringValue: %s ",yytext);
                tokenno++;
                return StringValue;
                }
{imaginary}     {fprintf(file_parser," ImaginaryValue: %s ",yytext);
                tokenno++;
                return ImaginaryValue;
                }

{identifier}    {fprintf(file_parser," Identifier: %s ",yytext);
                tokenno++;
                char *val = (char*)malloc(strlen(yytext)+10);
                sprintf(val,"%s", yytext);
                yylval.id = val;
                return IDENTIFIER;
                }


":"                 {fprintf(file_parser," : ");
                    tokenno++;
                    return COLON;
                    }
";"                {fprintf(file_parser," ; ");
                    tokenno++;
                    return SEMICOLON;
                    }
"//".*"\n"         {fprintf(file_parser,"\n%d: ",++lineno); tokenno = 0;}
"/*"(.|"\n")*"*/"   ;
" "|"\t"|"\r"      { /*do nothing*/ }

\n                  {fprintf(file_parser,"\n%d : ",++lineno); tokenno = 0; }


.           {
            fprintf(file_parser,"\n\n[Error] line : %d, %d-th token : %s is not valid token\n",lineno,++tokenno, yytext );
            printf("\n\n[Error] line : %d, %d-th token : %s is not valid token\n",lineno,++tokenno, yytext );
            for (int i = 0; i < id_list_index; i++  ) {
                fprintf(fp, "%s\n",id_list[i]);
        }
            exit(1);
            };

%%

int yywrap(void) {
    return 1;
}

/* int main() {
    fprintf(file_parser,"%d : ",lineno);
    yylex();
    return 0;
} */