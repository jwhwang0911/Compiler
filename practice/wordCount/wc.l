%{
        int characters = 0;
        int words = 0;
        int lines = 0;
%}
%%
\n     {
            ++lines;
            ++characters;
    }
[ \t]+          {
    characters += yyleng;
}
[^ \t\n]+ {
                ++words;
                characters += yyleng;
        }

%%
#include <stdio.h>

int yylex(void);

int main(void)
{
        extern int characters, words, lines;

        yylex();
        printf("%d characters, ", characters);
        printf("%d words, ", words);
        printf("%d lines\n", lines);
        return 0;
}