%{
    enum TokenTypes {
        BREAK,
        
    }
%}

%%
[0-9]* { return atoi(yytext); }
%%

int main() {
    printf("%d",yylex());
    return;
}