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

# MakeFile
1. make : 컴파일
    - lexar file name = (TARGET_LEX)
    - parser file name = (TARGET_PARS)
    - Execution file name = (EXEC)
    ```
    TARGET_LEX = example
    TARGET_PARS = example
    EXEC = result
    ```
    만약 파일명 바꾸고싶으면 Makefile들어가서 해당 파일명 변경

2. clean
    - lex, yacc 로 생성된 파일 + 실앻파일 모두 삭제

3. run : 컴파일과 실행까지 한번에

4. ./result < {inputfile} : input 파일 넣고 실행