/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BREAK = 258,
     DEFAULT = 259,
     SELECT = 260,
     SWITCH = 261,
     CASE = 262,
     FALLTHROUGH = 263,
     IF = 264,
     ELSE = 265,
     GOTO = 266,
     RANGE = 267,
     FOR = 268,
     CONTINUE = 269,
     FUNC = 270,
     INTERFACE = 271,
     DEFER = 272,
     RETURN = 273,
     ARGS = 274,
     GO = 275,
     CHAN = 276,
     MAP = 277,
     STRUCT = 278,
     CONST = 279,
     TYPE = 280,
     VAR = 281,
     ANY = 282,
     BOOL = 283,
     BYTE = 284,
     COMPARABLE = 285,
     INT = 286,
     COMPLEX = 287,
     ERROR = 288,
     FLOAT = 289,
     STRING = 290,
     RUNE = 291,
     PACKAGE = 292,
     IMPORT = 293,
     IDENTIFIER = 294,
     IntegerValue = 295,
     FloatValue = 296,
     StringValue = 297,
     ImaginaryValue = 298,
     BooleanValue = 299,
     COLON = 300,
     SEMICOLON = 301,
     GODEF = 302,
     INCRE_DECRE = 303,
     LRSHIFT = 304,
     ARITH_ASSIGN = 305,
     BIT_ASSIGN = 306,
     AND = 307,
     OR = 308,
     COMPARE = 309,
     CHANNELOP = 310
   };
#endif
/* Tokens.  */
#define BREAK 258
#define DEFAULT 259
#define SELECT 260
#define SWITCH 261
#define CASE 262
#define FALLTHROUGH 263
#define IF 264
#define ELSE 265
#define GOTO 266
#define RANGE 267
#define FOR 268
#define CONTINUE 269
#define FUNC 270
#define INTERFACE 271
#define DEFER 272
#define RETURN 273
#define ARGS 274
#define GO 275
#define CHAN 276
#define MAP 277
#define STRUCT 278
#define CONST 279
#define TYPE 280
#define VAR 281
#define ANY 282
#define BOOL 283
#define BYTE 284
#define COMPARABLE 285
#define INT 286
#define COMPLEX 287
#define ERROR 288
#define FLOAT 289
#define STRING 290
#define RUNE 291
#define PACKAGE 292
#define IMPORT 293
#define IDENTIFIER 294
#define IntegerValue 295
#define FloatValue 296
#define StringValue 297
#define ImaginaryValue 298
#define BooleanValue 299
#define COLON 300
#define SEMICOLON 301
#define GODEF 302
#define INCRE_DECRE 303
#define LRSHIFT 304
#define ARITH_ASSIGN 305
#define BIT_ASSIGN 306
#define AND 307
#define OR 308
#define COMPARE 309
#define CHANNELOP 310




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


