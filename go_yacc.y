%{
#include<stdio.h>
%}

%token BREAK DEFAULT SELECT SWITCH CASE FALLTHROUGH IF ELSE GOTO RANGE FOR CONTINUE // 반복문, SELECT문
%token FUNC INTERFACE DEFER RETURN ARGS// 함수, INTERFACE 관련
%token GO CHAN// GO CHAN
%token MAP STRUCT CONST TYPE VAR// 변수 type들
%token PACKAGE IMPORT
%token IDENTIFIER IntegerValue FloatValue StringValue
%token COLON SEMICOLON

%%

Type            :
                    IDENTIFIER | QualifiedIdent
                | IDENTIFIER '[' Type ']'
                | IDENTIFIER '[' Type Type']'
                | IDENTIFIER '[' Type ',' ']'
                | IDENTIFIER '[' Type Type ',' ']'
                | QualifiedIdent '[' Type ']'
                | QualifiedIdent '[' Type Type ']'
                | QualifiedIdent '[' Type ',' ']'
                | QualifiedIdent '[' Type Type ',' ']'
                .,lk;kl| ArrayType 
                | StructType 
                | PointerType 
                | FunctionType 
                | InterfaceType 
                | SliceType 
                | MapType 
                | ChannelType
                | '(' Type ')' 
                | ',' Type
                |
                ;

QualifiedIdent  :
                    PACKAGE '.' IDENTIFIER
                |
                ;

ElementType     :
                    Type
                |
                ;

 ArrayType       :
                    '[' IntegerValue ']' ElementType
                |
                ;

SliceType       :  
                    '[' ']' ElementType
                |
                ;

StructType      :
                STRUCT '{' StructType '}' 
                | IdentifierList Type SEMICOLON
                | IdentifierList Type SEMICOLON StringValue
                | TYPE SEMICOLON
                | '*' TYPE SEMICOLON
                | TYPE IntegerValue SEMICOLON
                | '*' TYPE IntegerValue SEMICOLON
                | TYPE SEMICOLON StringValue
                | '*' TYPE SEMICOLON StringValue
                | TYPE IntegerValue SEMICOLON StringValue
                | '*' TYPE IntegerValue SEMICOLON StringValue
                ;

IdentifierList  :
                    IDENTIFIER
                | IDENTIFIER ',' IDENTIFIER
                |
                ;

PointerType     :
                    '*' Type
                |
                ;

FunctionType   :
                    FUNC '(' ')'
                | FUNC '(' ParameterList ')'
                | FUNC '(' ParameterList ',' ')'
                | FUNC '(' ')' '(' ')'
                | FUNC '(' ParameterList ')' '(' ')'
                | FUNC '(' ParameterList ',' ')' '(' ')'
                | FUNC '(' ')' '(' ParameterList ')'
                | FUNC '(' ParameterList ')' '(' ParameterList ')'
                | FUNC '(' ParameterList ',' ')' '(' ParameterList ')'
                | FUNC '(' ')' '(' ParameterList ',' ')'
                | FUNC '(' ParameterList ')' '(' ParameterList ',' ')'
                | FUNC '(' ParameterList ',' ')' '(' ParameterList ',' ')'
                | FUNC '(' ')' Type
                | FUNC '(' ParameterList ')' Type
                | FUNC '(' ParameterList ',' ')' Type      
                |
                ;            

ParameterList   :
                Type ParameterList
                | IdentifierList Type ParameterList
                | IdentifierList ARGS Type ParameterList
                | ARGS Type ParameterList
                | ',' Type
                | ',' IdentifierList Type
                | ',' IdentifierList ARGS Type
                | ',' ARGS Type
                |
                ;

InterfaceType   :
                INTERFACE '{' InterfaceType '}' 
                | IDENTIFIER '(' ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ',' ')' SEMICOLON
                | IDENTIFIER '(' ')' '(' ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ')' '(' ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ',' ')' '(' ')' SEMICOLON
                | IDENTIFIER '(' ')' '(' ParameterList ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ')' '(' ParameterList ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ',' ')' '(' ParameterList ')' SEMICOLON
                | IDENTIFIER '(' ')' '(' ParameterList ',' ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ')' '(' ParameterList ',' ')' SEMICOLON
                | IDENTIFIER '(' ParameterList ',' ')' '(' ParameterList ',' ')' SEMICOLON
                | IDENTIFIER '(' ')' Type SEMICOLON
                | IDENTIFIER '(' ParameterList ')' Type SEMICOLON
                | IDENTIFIER '(' ParameterList ',' ')' Type SEMICOLON 
                | TypeElem SEMICOLON
                |
                ;

TypeElem        :
                    Type TypeElem 
                | '~' Type TypeElem 
                | '|' Type 
                | '|' '~' Type 
                |
                ;

MapType         :
                    MAP '[' Type ']' ElementType
                |
                ;

ChannelType     :
                    CHAN ElementType
                | CHAN '<-' ElementType
                | '<-' CHAN
                |
                ;
%%
/* 그 내꺼 노션 보면 EBNF Grammer 어떻게 짜는지 있는 지 있음 */
/* 민선ㅇ Grammer에서 string token 쓰고 싶으면 작은 따옴표로 해야돼 큰 따옴표는 안되더라 */