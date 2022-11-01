# Setup
1. lexar
```
    sudo apt-get install flex
```

2. yacc
```
    sudo apt install bison
```

# Lexical Analysis
1. lex <target.l>   => lex.yy.c 파일 생성
2. cc lex.yy.c -o <target_to_execute> -ll  => 컴파일
3. ./<target_to_execute> < <input_file> => input_file을 입력으로하는 프로그램 실행 

ex) /Simple_test
```
    lex simple.l
    cc lex.yy.c -o simple -ll
    ./simple < test.c
    // delete whitespace of test.c and then ECHO
```