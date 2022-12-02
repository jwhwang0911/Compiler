# 명령어
flex go_lexer.l => lex.yy.c 생성
bison -yd -v go_yacc.y => y.tab.c & y.tab.h & y.output 생성
gcc -o [실행파일이름] lex.yy.c y.tab.c -lfl -ly => 실행파일.exe 생성
Get-Content test_go.txt | 실행파일.exe => 실행


    ')'         shift, and go to state 261
    '['         shift, and go to state 76
    '*'         shift, and go to state 77
    '~'         shift, and go to state 78
    '|'         shift, and go to state 79

    ')'       [reduce using rule 51 (ParameterDecl)]
    $default  reduce using rule 51 (ParameterDecl)



state 261

    3 Type: '(' Type ')' .

    $default  reduce using rule 3 (Type)

ParameterList   : ParameterDecl
                | ParameterDecl ',' ParameterDecl;

ParameterDecl   :   Type
                |   IdentifierList Type
                |   ARGS Type
                |   IdentifierList ARGS Type;


# 명령어
make lex
make yacc
make clean
make -> 둘 다
bison -v ___.y => parsing table
Get-Content test_go.txt | 실행파일.exe => 실행





