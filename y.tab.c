/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\go_yacc.y"

#include<stdio.h>

extern int lineno;
extern int tokenno;
int yylex();
void yyerror(char *s);


/* Line 189 of yacc.c  */
#line 82 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 234 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4513

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  326
/* YYNRULES -- Number of states.  */
#define YYNSTATES  550

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,     2,     2,    74,    75,     2,
      56,    57,    65,    70,    58,    71,    61,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    64,
       2,    68,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,    72,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,    67,    63,    66,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    12,    14,    16,    18,    22,
      24,    28,    30,    32,    34,    36,    38,    40,    42,    44,
      46,    48,    50,    52,    54,    56,    58,    60,    62,    64,
      68,    73,    77,    82,    87,    90,    93,    97,    99,   102,
     104,   107,   110,   114,   117,   120,   122,   125,   128,   132,
     137,   139,   143,   145,   148,   151,   155,   160,   165,   171,
     178,   185,   193,   202,   210,   219,   229,   238,   248,   259,
     265,   272,   280,   283,   286,   290,   293,   297,   303,   306,
     310,   314,   316,   318,   320,   322,   324,   326,   329,   334,
     339,   343,   345,   349,   350,   354,   356,   360,   362,   365,
     370,   372,   374,   378,   379,   383,   386,   390,   394,   399,
     403,   405,   408,   411,   415,   420,   425,   428,   432,   436,
     439,   443,   449,   454,   459,   463,   469,   474,   476,   479,
     481,   485,   487,   489,   491,   493,   495,   497,   499,   502,
     504,   506,   511,   513,   515,   517,   520,   525,   529,   532,
     536,   538,   542,   544,   546,   548,   550,   552,   554,   558,
     560,   562,   564,   566,   568,   571,   574,   577,   580,   583,
     586,   590,   596,   604,   606,   607,   612,   616,   620,   623,
     626,   628,   632,   635,   638,   640,   646,   651,   656,   660,
     661,   665,   667,   669,   673,   677,   681,   685,   689,   693,
     697,   701,   705,   709,   713,   717,   719,   722,   724,   726,
     728,   730,   732,   734,   736,   741,   743,   745,   747,   749,
     751,   753,   755,   757,   759,   761,   763,   765,   767,   769,
     771,   775,   776,   778,   780,   782,   784,   786,   788,   792,
     794,   797,   801,   803,   805,   808,   811,   813,   816,   818,
     821,   823,   826,   828,   832,   835,   839,   842,   850,   858,
     864,   870,   874,   876,   878,   885,   891,   894,   895,   897,
     898,   902,   905,   907,   910,   912,   919,   926,   929,   930,
     934,   937,   938,   941,   943,   948,   952,   955,   956,   957,
     960,   962,   966,   970,   972,   974,   978,   980,   982,   984,
     985,   987,   993,   995,   997,   998,  1000,  1001,  1003,  1005,
    1010,  1015,  1018,  1021,  1026,  1030,  1031,  1035,  1036,  1039,
    1042,  1047,  1050,  1053,  1055,  1059,  1060
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     195,     0,    -1,    79,    -1,    79,    81,    -1,    56,    78,
      57,    -1,    82,    -1,    39,    -1,    83,    -1,    80,    58,
      78,    -1,    78,    -1,    59,    80,    60,    -1,    84,    -1,
      86,    -1,    90,    -1,    91,    -1,    96,    -1,    85,    -1,
      98,    -1,    99,    -1,    27,    -1,    34,    -1,    28,    -1,
      29,    -1,    30,    -1,    32,    -1,    33,    -1,    31,    -1,
      36,    -1,    35,    -1,    39,    61,    39,    -1,    59,   143,
      60,    78,    -1,    59,    60,    78,    -1,    23,    62,    87,
      63,    -1,    88,    46,    64,    87,    -1,    88,    46,    -1,
     105,    78,    -1,   105,    78,    42,    -1,    89,    -1,    89,
      42,    -1,    79,    -1,    65,    79,    -1,    79,    81,    -1,
      65,    79,    81,    -1,    65,    78,    -1,    15,    92,    -1,
      93,    -1,    93,    78,    -1,    56,    57,    -1,    56,    94,
      57,    -1,    56,    94,    58,    57,    -1,    95,    -1,    95,
      58,    95,    -1,    78,    -1,   105,    78,    -1,    19,    78,
      -1,   105,    19,    78,    -1,    16,    62,    96,    63,    -1,
      39,    56,    57,    46,    -1,    39,    56,    94,    57,    46,
      -1,    39,    56,    94,    58,    57,    46,    -1,    39,    56,
      57,    56,    57,    46,    -1,    39,    56,    94,    57,    56,
      57,    46,    -1,    39,    56,    94,    58,    57,    56,    57,
      46,    -1,    39,    56,    57,    56,    94,    57,    46,    -1,
      39,    56,    94,    57,    56,    94,    57,    46,    -1,    39,
      56,    94,    58,    57,    56,    94,    57,    46,    -1,    39,
      56,    57,    56,    94,    58,    57,    46,    -1,    39,    56,
      94,    57,    56,    94,    58,    57,    46,    -1,    39,    56,
      94,    58,    57,    56,    94,    58,    57,    46,    -1,    39,
      56,    57,    78,    46,    -1,    39,    56,    94,    57,    78,
      46,    -1,    39,    56,    94,    58,    57,    78,    46,    -1,
      97,    46,    -1,    78,    97,    -1,    66,    78,    97,    -1,
      67,    78,    -1,    67,    66,    78,    -1,    22,    59,    78,
      60,    78,    -1,    21,    78,    -1,    21,    55,    78,    -1,
      55,    21,    78,    -1,   102,    -1,   107,    -1,   115,    -1,
     100,    -1,   119,    -1,   120,    -1,    24,   103,    -1,    24,
      56,   104,    57,    -1,   105,    78,    68,   106,    -1,   105,
      68,   106,    -1,   105,    -1,   103,    46,   104,    -1,    -1,
     105,    58,    39,    -1,    39,    -1,   106,    58,   143,    -1,
     143,    -1,    25,   108,    -1,    25,    56,   109,    57,    -1,
     110,    -1,   111,    -1,   108,    46,   109,    -1,    -1,    39,
      68,    78,    -1,    39,    78,    -1,    39,   112,    78,    -1,
      59,   113,    60,    -1,    59,   113,    58,    60,    -1,   113,
      58,   114,    -1,   114,    -1,   105,    97,    -1,    26,   116,
      -1,    26,    56,    57,    -1,    26,    56,   117,    57,    -1,
     105,    78,    68,   106,    -1,   105,    78,    -1,   105,    68,
     106,    -1,   116,    46,   117,    -1,   116,    46,    -1,   105,
      47,   106,    -1,    15,    39,   112,    92,   162,    -1,    15,
      39,    92,   162,    -1,    15,    39,   112,    92,    -1,    15,
      39,    92,    -1,    15,    93,    39,    92,   162,    -1,    15,
      93,    39,    92,    -1,   122,    -1,   132,    81,    -1,   132,
      -1,    56,   143,    57,    -1,   123,    -1,   124,    -1,   131,
      -1,    40,    -1,    41,    -1,    43,    -1,    42,    -1,   125,
     126,    -1,    86,    -1,    84,    -1,    59,    19,    60,    78,
      -1,    85,    -1,    98,    -1,    79,    -1,    79,    81,    -1,
      62,   128,    58,    63,    -1,    62,   128,    63,    -1,    62,
      63,    -1,   129,    69,   130,    -1,   130,    -1,   128,    58,
     127,    -1,   127,    -1,    39,    -1,   143,    -1,   126,    -1,
     143,    -1,   126,    -1,    15,    92,   162,    -1,    39,    -1,
      83,    -1,   121,    -1,   146,    -1,   141,    -1,   133,   134,
      -1,   133,   135,    -1,   133,   136,    -1,   133,   138,    -1,
     133,   139,    -1,    61,    39,    -1,    59,   143,    60,    -1,
      59,   137,    45,   137,    60,    -1,    59,   137,    45,   143,
      45,   143,    60,    -1,   143,    -1,    -1,    61,    56,    78,
      57,    -1,    56,   140,    57,    -1,   106,    19,    58,    -1,
     106,    19,    -1,   106,    58,    -1,   106,    -1,    78,    19,
      58,    -1,    78,    19,    -1,    78,    58,    -1,    78,    -1,
      78,    58,   106,    19,    58,    -1,    78,    58,   106,    19,
      -1,    78,    58,   106,    58,    -1,    78,    58,   106,    -1,
      -1,   142,    61,    39,    -1,    78,    -1,   144,    -1,   143,
      52,   143,    -1,   143,    53,   143,    -1,   143,    54,   143,
      -1,   143,    70,   143,    -1,   143,    71,   143,    -1,   143,
      67,   143,    -1,   143,    72,   143,    -1,   143,    65,   143,
      -1,   143,    73,   143,    -1,   143,    74,   143,    -1,   143,
      49,   143,    -1,   143,    75,   143,    -1,   133,    -1,   145,
     144,    -1,    70,    -1,    71,    -1,    76,    -1,    72,    -1,
      65,    -1,    75,    -1,    55,    -1,    78,    56,   143,    57,
      -1,   100,    -1,   148,    -1,   149,    -1,   156,    -1,   157,
      -1,   158,    -1,   159,    -1,   160,    -1,   161,    -1,   162,
      -1,   164,    -1,   165,    -1,   178,    -1,   184,    -1,   194,
      -1,    39,    45,   147,    -1,    -1,   150,    -1,   151,    -1,
     153,    -1,   154,    -1,   118,    -1,   143,    -1,   152,    55,
     143,    -1,   143,    -1,   143,    48,    -1,   106,   155,   106,
      -1,    50,    -1,    68,    -1,    20,   143,    -1,    18,   106,
      -1,    18,    -1,     3,    39,    -1,     3,    -1,    14,    39,
      -1,    14,    -1,    11,    39,    -1,     8,    -1,    62,   163,
      63,    -1,    62,    63,    -1,   147,    46,   163,    -1,   147,
      46,    -1,     9,   149,    46,   143,   162,    10,   164,    -1,
       9,   149,    46,   143,   162,    10,   162,    -1,     9,   143,
     162,    10,   164,    -1,     9,   143,   162,    10,   162,    -1,
       9,   143,   162,    -1,   166,    -1,   172,    -1,     6,   167,
     168,    62,   170,    63,    -1,     6,   167,   168,    62,    63,
      -1,   149,    46,    -1,    -1,   143,    -1,    -1,   171,    45,
     163,    -1,   169,   170,    -1,   169,    -1,     7,   106,    -1,
       4,    -1,     6,   167,   173,    62,   176,    63,    -1,   174,
     133,    61,    56,    78,    57,    -1,    39,    47,    -1,    -1,
     177,    45,   163,    -1,   175,   176,    -1,    -1,     7,    80,
      -1,     4,    -1,     5,    62,   180,    63,    -1,   181,    45,
     163,    -1,   179,   180,    -1,    -1,    -1,     7,   182,    -1,
       4,    -1,   106,    68,   183,    -1,   105,    47,   183,    -1,
     183,    -1,   143,    -1,    13,   185,   162,    -1,   186,    -1,
     187,    -1,   193,    -1,    -1,   143,    -1,   189,    46,   190,
      46,   192,    -1,   149,    -1,   188,    -1,    -1,   186,    -1,
      -1,   149,    -1,   191,    -1,   106,    68,    12,   143,    -1,
     105,    47,    12,   143,    -1,    12,   143,    -1,    17,   143,
      -1,   198,    46,   196,   197,    -1,   199,    46,   196,    -1,
      -1,   101,    46,   197,    -1,    -1,    37,    39,    -1,    38,
     200,    -1,    38,    56,   201,    57,    -1,    61,   202,    -1,
      39,   202,    -1,   202,    -1,   200,    46,   201,    -1,    -1,
      42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    41,    42,    43,    45,    45,    48,    49,
      52,    54,    54,    54,    54,    54,    55,    55,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    69,
      72,    75,    78,    80,    81,    84,    85,    86,    87,    90,
      91,    92,    93,    98,   100,   103,   104,   108,   109,   110,
     116,   117,   119,   120,   121,   122,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   149,   150,   151,   152,   156,   159,   160,
     161,   166,   166,   166,   168,   168,   168,   172,   173,   177,
     178,   179,   183,   184,   188,   189,   192,   193,   198,   199,
     203,   203,   206,   207,   210,   213,   214,   217,   218,   221,
     222,   223,   228,   229,   230,   233,   234,   235,   238,   239,
     242,   245,   246,   247,   248,   252,   253,   260,   261,   262,
     263,   267,   268,   269,   273,   274,   275,   276,   279,   280,
     280,   280,   281,   281,   281,   281,   283,   284,   285,   289,
     290,   293,   294,   298,   298,   298,   300,   300,   302,   304,
     304,   308,   309,   310,   311,   312,   313,   314,   315,   317,
     318,   320,   321,   324,   325,   327,   328,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     345,   346,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   366,   367,   373,   373,   373,
     373,   373,   373,   373,   376,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     396,   397,   398,   399,   400,   401,   402,   405,   406,   408,
     409,   410,   412,   413,   417,   419,   420,   423,   424,   427,
     428,   431,   433,   435,   436,   438,   439,   443,   444,   445,
     446,   447,   450,   451,   454,   455,   458,   459,   462,   463,
     466,   468,   469,   472,   473,   476,   479,   482,   483,   486,
     489,   490,   493,   494,   502,   505,   508,   509,   511,   512,
     513,   516,   517,   518,   521,   524,   527,   528,   529,   530,
     533,   536,   539,   542,   543,   546,   547,   550,   553,   556,
     557,   558,   561,   565,   569,   570,   574,   575,   579,   583,
     584,   587,   588,   589,   592,   593,   595
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "DEFAULT", "SELECT", "SWITCH",
  "CASE", "FALLTHROUGH", "IF", "ELSE", "GOTO", "RANGE", "FOR", "CONTINUE",
  "FUNC", "INTERFACE", "DEFER", "RETURN", "ARGS", "GO", "CHAN", "MAP",
  "STRUCT", "CONST", "TYPE", "VAR", "ANY", "BOOL", "BYTE", "COMPARABLE",
  "INT", "COMPLEX", "ERROR", "FLOAT", "STRING", "RUNE", "PACKAGE",
  "IMPORT", "IDENTIFIER", "IntegerValue", "FloatValue", "StringValue",
  "ImaginaryValue", "BooleanValue", "COLON", "SEMICOLON", "GODEF",
  "INCRE_DECRE", "LRSHIFT", "ARITH_ASSIGN", "BIT_ASSIGN", "AND", "OR",
  "COMPARE", "CHANNELOP", "'('", "')'", "','", "'['", "']'", "'.'", "'{'",
  "'}'", "';'", "'*'", "'~'", "'|'", "'='", "':'", "'+'", "'-'", "'^'",
  "'/'", "'%'", "'&'", "'!'", "$accept", "Type", "TypeName", "TypeList",
  "TypeArgs", "TypeLit", "QualifiedIdent", "ArrayType", "SliceType",
  "StructType", "StructTypeLoop", "FieldDecl", "EmbeddedField",
  "PointerType", "FunctionType", "Signature", "Parameters",
  "ParameterList", "ParameterDecl", "InterfaceType", "TypeElem", "MapType",
  "ChannelType", "Declaration", "TopLevelDecl", "ConstDecl", "ConstSpec",
  "ConstSpecLoop", "IdentifierList", "ExpressionList", "TypeDecl",
  "TypeSpec", "TypeSpecLoop", "AliasDecl", "TypeDef", "TypeParameters",
  "TypeParamList", "TypeParamDecl", "VarDecl", "VarSpec", "VarSpecLoop",
  "ShortVarDecl", "FunctionDecl", "MethodDecl", "Operand", "Literal",
  "BasicLit", "CompositeLit", "LiteralType", "LiteralValue",
  "KeyedElement", "ElementList", "Key", "Element", "FunctionLit",
  "OperandName", "PrimaryExpr", "Selector", "Index", "Slice",
  "ExpressionLoop", "TypeAssertion", "Arguments", "ArgumentsLoop",
  "MethodExpr", "ParametersType", "Expression", "UnaryExpr", "unary_op",
  "Conversion", "Statement", "LabeledStmt", "SimpleStmt", "ExpressionStmt",
  "SendStmt", "Channel", "IncDecStmt", "Assignment", "assign_op", "GoStmt",
  "ReturnStmt", "BreakStmt", "ContinueStmt", "GotoStmt", "FallthroughStmt",
  "Block", "StatementList", "IfStmt", "SwitchStmt", "ExprSwitchStmt",
  "SimpleStmtBrakets", "ExpressionBrakets", "ExprCaseClause",
  "ExprCaseClauseLoop", "ExprSwitchCase", "TypeSwitchStmt",
  "TypeSwitchGuard", "IdetifierGodefBrakets", "TypeCaseClause",
  "TypeCaseClauseLoop", "TypeSwitchCase", "SelectStmt", "CommClause",
  "CommClauseLoop", "CommCase", "RecvStmt", "RecvExpr", "ForStmt",
  "ForClauseBracket", "Condition", "ForClause", "InitStmt",
  "InitStmtBracket", "ConditionBracket", "PostStmt", "PostStmtBracket",
  "RangeClause", "DeferStmt", "SourceFile", "ImportLoop", "TopLevelLoop",
  "PackageClause", "ImportDecl", "ImportSpec", "ImportSpecLoop",
  "ImportPath", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    40,    41,    44,    91,
      93,    46,   123,   125,    59,    42,   126,   124,    61,    58,
      43,    45,    94,    47,    37,    38,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    78,    78,    79,    79,    80,    80,
      81,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      84,    85,    86,    87,    87,    88,    88,    88,    88,    89,
      89,    89,    89,    90,    91,    92,    92,    93,    93,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    97,    97,    97,    98,    99,    99,
      99,   100,   100,   100,   101,   101,   101,   102,   102,   103,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   111,   111,   112,   112,   113,
     113,   114,   115,   115,   115,   116,   116,   116,   117,   117,
     118,   119,   119,   119,   119,   120,   120,   121,   121,   121,
     121,   122,   122,   122,   123,   123,   123,   123,   124,   125,
     125,   125,   125,   125,   125,   125,   126,   126,   126,   127,
     127,   128,   128,   129,   129,   129,   130,   130,   131,   132,
     132,   133,   133,   133,   133,   133,   133,   133,   133,   134,
     135,   136,   136,   137,   137,   138,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     141,   142,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   144,   144,   145,   145,   145,
     145,   145,   145,   145,   146,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     148,   149,   149,   149,   149,   149,   149,   150,   151,   152,
     153,   154,   155,   155,   156,   157,   157,   158,   158,   159,
     159,   160,   161,   162,   162,   163,   163,   164,   164,   164,
     164,   164,   165,   165,   166,   166,   167,   167,   168,   168,
     169,   170,   170,   171,   171,   172,   173,   174,   174,   175,
     176,   176,   177,   177,   178,   179,   180,   180,   181,   181,
     181,   182,   182,   182,   183,   184,   185,   185,   185,   185,
     186,   187,   188,   189,   189,   190,   190,   191,   192,   193,
     193,   193,   194,   195,   196,   196,   197,   197,   198,   199,
     199,   200,   200,   200,   201,   201,   202
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     4,     4,     2,     2,     3,     1,     2,     1,
       2,     2,     3,     2,     2,     1,     2,     2,     3,     4,
       1,     3,     1,     2,     2,     3,     4,     4,     5,     6,
       6,     7,     8,     7,     8,     9,     8,     9,    10,     5,
       6,     7,     2,     2,     3,     2,     3,     5,     2,     3,
       3,     1,     1,     1,     1,     1,     1,     2,     4,     4,
       3,     1,     3,     0,     3,     1,     3,     1,     2,     4,
       1,     1,     3,     0,     3,     2,     3,     3,     4,     3,
       1,     2,     2,     3,     4,     4,     2,     3,     3,     2,
       3,     5,     4,     4,     3,     5,     4,     1,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     4,     1,     1,     1,     2,     4,     3,     2,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       3,     5,     7,     1,     0,     4,     3,     3,     2,     2,
       1,     3,     2,     2,     1,     5,     4,     4,     3,     0,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     3,     1,     1,     2,     2,     1,     2,     1,     2,
       1,     2,     1,     3,     2,     3,     2,     7,     7,     5,
       5,     3,     1,     1,     6,     5,     2,     0,     1,     0,
       3,     2,     1,     2,     1,     6,     6,     2,     0,     3,
       2,     0,     2,     1,     4,     3,     2,     0,     0,     2,
       1,     3,     3,     1,     1,     3,     1,     1,     1,     0,
       1,     5,     1,     1,     0,     1,     0,     1,     1,     4,
       4,     2,     2,     4,     3,     0,     3,     0,     2,     2,
       4,     2,     2,     1,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   318,     1,   315,     0,   317,     0,
       0,   326,   325,     0,   319,   323,     0,     0,     0,     0,
      84,     0,    81,    82,    83,    85,    86,   313,   315,   322,
       0,     0,   321,     0,     0,     0,    95,    93,    87,    91,
       0,   103,    98,   100,   101,     0,     0,   112,   317,   314,
     325,   320,     0,   124,    45,     0,     0,     0,     0,     0,
       0,     0,    19,    21,    22,    23,    26,    24,    25,    20,
      28,    27,     6,     0,     0,    47,     0,     0,     0,     0,
      52,     2,     5,     7,    11,    16,    12,    13,    14,     0,
      50,    15,     0,    17,    18,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,   105,     0,     0,     0,   113,
       0,     0,     0,   116,   316,   324,     0,     0,   110,   231,
     122,    46,   123,    44,     0,    54,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     6,   134,   135,   137,   136,
     213,     0,     0,     0,   211,   207,   208,   210,   212,   209,
     191,     2,     7,    11,    16,    12,    17,   161,   127,   131,
     132,     0,   133,   129,   205,   163,     0,     0,   192,     0,
     162,    43,     0,     0,    75,     0,    73,     0,     3,    48,
       0,     0,    72,     0,    53,   126,    93,    88,    94,    90,
      97,     0,     6,   104,   106,   103,    99,   119,   114,   117,
       0,   111,     0,   107,   248,     0,   231,   252,   231,     0,
     231,   250,     0,   246,     0,     6,   254,   215,     0,     0,
     236,    97,     0,   216,   217,   232,   233,     0,   234,   235,
     218,   219,   220,   221,   222,   223,   224,     0,   225,   226,
     262,   263,   227,   228,   229,   121,    15,     0,    79,     0,
      95,     0,    39,     0,     0,    37,     0,     0,     0,    29,
      80,     4,    44,   191,     0,     0,    31,     0,     3,     0,
     138,   128,   189,   174,     0,   164,   165,   166,   167,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,    74,    76,     9,     0,    49,
      51,    55,   125,    92,     0,    89,   102,   118,   115,   108,
     109,   247,   287,     0,   269,    97,     0,   251,     0,     0,
       0,    97,   302,     0,   296,   297,   303,     0,   298,   249,
     312,   245,   244,   231,     0,   242,   243,     0,   240,   256,
       0,   253,    56,    78,     0,     6,    40,    41,    32,    34,
      38,    35,    57,     0,     0,     0,     0,   158,   130,     0,
       0,     6,   148,   157,   152,     0,     0,   150,   156,   184,
     180,     0,     0,   173,   169,     0,   190,   203,   193,   194,
     195,    30,   200,   198,   196,   197,   199,   201,   202,   204,
       0,    10,    96,   290,     0,   287,     0,     0,   266,     6,
     268,     0,     0,     0,   261,     0,   311,     0,   243,   295,
     306,   230,   120,   241,   255,   238,    77,    42,     0,    36,
       0,    52,     0,    69,    58,     0,     0,     0,   141,   214,
       0,   147,     0,   182,   183,   178,   179,   176,   174,   170,
       0,     8,     0,     0,    97,   289,   293,   286,   284,   231,
     277,     0,   281,     0,     0,     0,     0,     0,   300,   305,
       0,    33,    60,     0,     0,     0,     0,    70,    59,     0,
       0,   146,   151,   157,   149,   156,   181,   188,   177,     0,
     173,   175,     0,     0,   285,   274,     0,   265,   272,     0,
       0,   283,     0,   281,     0,     0,     0,   260,   259,     0,
     310,   309,   231,    63,     0,    61,     0,     0,     0,     0,
      71,   186,   187,   171,     0,   294,   292,   291,   273,   271,
     264,   231,   282,   280,   275,   231,     0,     0,   307,   308,
     301,    66,    64,     0,    62,     0,     0,   185,     0,   270,
     279,     0,   258,   257,    67,    65,     0,   172,   175,    68
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   150,    81,   298,   178,    82,    83,    84,    85,    86,
     253,   254,   255,    87,    88,    53,    54,    89,    90,    91,
      92,    93,    94,   217,    21,    22,    97,    98,   218,   219,
      23,   107,   108,    43,    44,    55,   117,   118,    24,   110,
     111,   220,    25,    26,   157,   158,   159,   160,   161,   363,
     364,   365,   366,   367,   162,   163,   164,   275,   276,   277,
     372,   278,   279,   371,   165,   166,   190,   168,   169,   170,
     222,   223,   224,   225,   226,   227,   228,   229,   337,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     314,   401,   488,   489,   490,   241,   402,   403,   493,   494,
     495,   242,   395,   396,   397,   445,   446,   243,   323,   324,
     325,   326,   327,   460,   529,   530,   328,   244,     2,     8,
      27,     3,     9,    30,    31,    15
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -447
static const yytype_int16 yypact[] =
{
     -19,     2,    48,    81,  -447,  -447,   108,    -3,   106,    98,
      12,  -447,    23,    12,  -447,  -447,    -7,    -5,     8,    50,
    -447,   107,  -447,  -447,  -447,  -447,  -447,  -447,   108,  -447,
     122,    -1,  -447,    86,   990,   135,  -447,   139,  -447,  1974,
    3266,   147,  -447,  -447,  -447,    44,  2321,  -447,   106,  -447,
      23,  -447,   139,   126,  4227,   137,   137,   145,  4227,  4274,
     161,   166,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,    -4,   200,  4227,  -447,  2860,  4227,  4227,  4321,
    4227,   172,  -447,  -447,  -447,  -447,  -447,  -447,  -447,    76,
     176,  -447,   189,  -447,  -447,  1245,   137,   190,   180,    41,
     201,  3092,  3314,  2918,  4227,  4227,  4227,   193,   184,  -447,
     196,   186,  3092,  3362,  -447,  -447,  3563,    18,  -447,  2250,
    -447,  4227,   126,  -447,  4227,  4227,  4368,  4227,  4227,   -10,
    1500,   205,  4227,  3610,   137,  4438,  -447,  -447,  -447,  -447,
     200,  3092,  2686,  4227,  4227,  -447,  -447,  -447,  -447,  -447,
    4415,   102,   131,   183,   185,   187,   188,  -447,  -447,  -447,
    -447,   191,  -447,   172,    95,  -447,   194,   290,  -447,  3092,
    -447,  4227,  4227,  4227,  4227,  4227,   189,  4227,  -447,  -447,
     195,  3663,  -447,  4227,  4227,   126,   139,  -447,  -447,   198,
    1908,  3092,   486,  4227,  4227,   147,  -447,   139,  -447,   198,
    3092,   189,    20,  -447,   207,   197,  2976,  -447,  3150,   209,
    2566,   218,  3092,  3092,  3092,   628,  -447,  -447,    28,    -8,
    -447,   804,   212,  -447,  -447,  -447,  -447,   206,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,   202,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,   203,  4274,  4227,  3710,
      58,   221,   172,   208,   222,   227,  3563,  3757,   132,  -447,
    4227,  -447,   126,  3804,  1311,   204,  4227,  3092,   210,  2744,
    -447,  -447,  3092,  3092,    69,  -447,  -447,  -447,  -447,  -447,
     231,  3092,  3092,  3092,  3092,  4227,  3092,  3092,  3092,  3092,
    3092,  3092,  3092,  3092,  -447,   189,  4227,  4227,   115,  -447,
    -447,  4227,  -447,  -447,  3092,   198,  -447,  -447,   198,  -447,
    -447,  -447,    24,   229,  3208,   888,   234,  -447,  3092,    65,
      45,  1059,  -447,   126,  -447,  -447,  -447,   235,  -447,  -447,
    1908,   198,  1908,  2504,  3092,  -447,  -447,  3092,  -447,  2430,
    3092,  -447,  -447,  4227,  4227,   216,   172,  -447,  -447,   219,
    -447,  3851,  -447,  1755,  3898,  3945,   225,  -447,  -447,  4227,
    1398,  1143,  -447,   215,  -447,   100,   223,  -447,   655,   735,
      16,   228,   243,  1568,  -447,  4227,  -447,  1908,  1908,  1908,
    1908,  4227,  1908,  1908,  1908,  1908,  1908,  1908,  1908,  1908,
    4227,  -447,  1908,  -447,  3150,    24,   230,   246,  -447,   584,
    1908,   211,   232,  3410,   287,  3092,  1908,  2628,   286,  -447,
    3092,  -447,   198,   198,  -447,  1908,  4227,  -447,   -10,  -447,
     254,  3610,   140,  -447,  -447,  3463,  3992,  4039,  4227,  -447,
    2802,  -447,  3034,   244,  3092,   247,  3092,  -447,  3092,  -447,
    4086,  4227,    77,    68,   394,  -447,  -447,  -447,  -447,  2504,
    -447,    10,   158,    96,     4,  1653,  3092,  3092,  1908,  -447,
     258,  -447,  -447,   260,   251,   265,   152,  -447,  -447,  3516,
    4133,  -447,  -447,  -447,  -447,  1908,  -447,    19,  -447,   252,
     552,  -447,  3092,  3092,  -447,  -447,  3092,  -447,   163,   250,
     269,  -447,  4227,   158,   253,   270,    72,  -447,  -447,   308,
    1908,  1908,  3150,  -447,   276,  -447,   277,   271,   280,   154,
    -447,   272,  3092,  -447,  3092,  1908,  -447,  -447,   198,  -447,
    -447,  2504,   273,  -447,  -447,  2504,  4227,     4,  -447,  -447,
    -447,  -447,  -447,   281,  -447,   283,   275,  -447,  1823,  -447,
    -447,  4180,  -447,  -447,  -447,  -447,   288,  -447,   274,  -447
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -447,   -34,   379,  -159,  -130,  -447,   634,   889,  1144,  1399,
     -81,  -447,  -447,  -447,  -447,   -29,   336,  -129,   178,   242,
     174,  1654,  -447,    15,  -447,  -447,   352,   167,   -15,    17,
    -447,   353,   175,  -447,  -447,   332,  -447,   171,  -447,   355,
     179,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -158,
     -55,  -447,  -447,   -54,  -447,  -447,   -26,  -447,  -447,  -447,
     -58,  -447,  -447,  -447,  -447,  -447,  1909,   214,  -447,  -447,
      51,  -447,  -199,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,   -37,  -329,  -446,  -447,  -447,
    -447,  -447,  -447,  -107,  -447,  -447,  -447,  -447,  -447,  -108,
    -447,  -447,  -447,    -9,  -447,  -447,  -264,  -447,  -447,   -22,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,   361,
     342,  -447,  -447,   388,   346,   159
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -301
static const yytype_int16 yytable[] =
{
      80,   258,    39,   270,    46,   102,   105,   313,   498,   316,
     414,   322,   113,   208,   485,   -95,   120,   486,     1,    95,
     121,   268,    39,    20,   125,   127,   122,   123,   393,   250,
      46,   394,    33,   271,    36,   435,    10,   116,   511,    11,
     133,     4,   335,   171,   172,   174,   175,    40,     5,    34,
     304,    37,   130,    12,    11,   251,    51,   131,    13,    36,
     336,   184,    10,    20,    41,    11,   119,   185,   175,  -288,
     193,   175,   194,   487,   436,   334,   202,   512,   203,   175,
     309,   543,   175,    36,    13,   245,   100,   175,   116,    36,
     175,   175,   248,   175,   249,   335,    80,   130,   260,   175,
      -6,   109,   131,   304,    -6,   262,    45,   263,   374,   266,
     171,   374,   407,   408,   256,    95,   175,    -6,   189,   131,
     484,    16,   347,   100,   482,   375,   304,     6,   526,   199,
      17,    18,    19,   179,   180,   100,   483,   175,   175,   296,
     175,   175,    34,   297,    28,    52,     7,    80,   302,   301,
     175,   272,   272,    48,   273,   273,   274,   496,   430,   175,
     175,   177,   491,   431,  -144,   492,    95,   485,    50,    29,
     486,    39,    32,   390,    96,   391,  -160,  -160,    36,  -160,
    -160,  -160,    46,  -160,  -160,  -160,    40,   116,   119,   355,
     356,  -160,   539,    34,  -160,   319,   540,   463,   464,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,   124,   305,   506,
     507,   535,   536,   343,   175,   175,   417,   308,   516,   517,
     128,   132,   351,   354,   422,   357,   175,   320,   129,   175,
     331,   177,   175,   263,   181,   182,   186,   187,   369,   195,
     188,   196,   197,   198,   259,  -140,   311,  -142,   317,  -139,
    -143,   381,   299,   269,   176,   280,   304,   329,   339,   312,
     345,   340,   175,   175,   359,   341,   342,   175,   349,   350,
     376,   348,  -145,   451,   473,   398,   176,   131,   404,   176,
     405,   410,   427,   418,  -155,   437,   409,   176,   438,   370,
     201,   449,   432,   448,   452,   176,   466,   454,   457,   176,
     462,   176,   476,   528,   502,   478,   503,   176,   504,   175,
     416,   505,   513,   520,   521,   525,   524,   175,   527,   421,
     175,   426,   531,   532,   176,   428,   534,   544,   533,   545,
     537,   390,   546,   522,   549,   175,  -276,   461,    95,   281,
     509,   440,   282,   283,   284,   176,   295,   175,   176,   176,
     285,   412,    35,   303,   413,   286,   441,   287,   176,   300,
     288,   289,   290,   291,   292,   293,   246,   176,   176,    38,
     306,    42,   106,   310,    47,   472,   307,   453,   474,   442,
     479,   519,   175,   294,   411,   523,   447,   175,   459,    49,
     114,   421,   175,   470,   175,    14,   115,     0,     0,     0,
       0,     0,     0,   256,     0,     0,   175,   175,     0,     0,
      95,   443,     0,     0,     0,     0,     0,   497,   499,     0,
       0,     0,   176,   176,   412,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,   421,   175,   176,     0,  -294,
     176,     0,     0,   281,     0,     0,   282,   283,   284,     0,
       0,   477,     0,     0,    95,   151,     0,     0,   297,   286,
       0,   287,     0,     0,   288,   289,   290,   291,   292,   293,
     295,   176,     0,     0,     0,   176,     0,     0,     0,     0,
     151,     0,   151,     0,     0,     0,     0,     0,     0,     0,
     542,   151,   541,     0,     0,     0,     0,     0,   151,     0,
       0,     0,     0,   518,     0,     0,     0,   175,   252,     0,
       0,     0,     0,     0,     0,     0,     0,   176,     0,     0,
     151,   151,     0,     0,     0,   176,     0,     0,   176,     0,
       0,  -159,  -159,   -95,  -159,  -159,  -159,     0,  -159,  -159,
    -159,     0,   130,   176,   -95,     0,  -159,   131,   151,     0,
       0,     0,     0,     0,  -159,   176,  -159,  -159,  -159,  -159,
    -159,  -159,     0,     0,     0,     0,     0,     0,     0,     0,
     151,     0,     0,     0,     0,     0,     0,     0,     0,   151,
       0,     0,     0,     0,     0,   151,     0,   151,     0,   151,
     176,   151,   151,   151,     0,   176,     0,   514,     0,     0,
     176,   281,   176,     0,   282,   283,   284,     0,     0,     0,
       0,     0,     0,     0,   176,   176,     0,   286,     0,   287,
       0,     0,   288,   289,   290,   291,   292,   293,     0,     0,
     346,   450,     0,  -159,     0,     0,  -159,  -159,  -159,     0,
     130,     0,     0,     0,   176,   131,   151,     0,   151,     0,
       0,   151,   151,     0,  -159,  -159,  -159,  -159,  -159,  -159,
     151,   151,   151,   151,     0,   151,   151,   151,   151,   151,
     151,   151,   151,   333,  -159,   -95,  -159,  -159,  -159,     0,
    -159,  -159,  -159,   151,   130,     0,   -95,     0,     0,   131,
       0,     0,     0,   151,     0,     0,  -159,   151,  -159,  -159,
    -159,  -159,  -159,  -159,   281,     0,     0,   282,   283,   284,
     152,     0,   151,   151,     0,   176,   151,     0,   151,   151,
     286,     0,   287,     0,  -154,   288,   289,   290,   291,   292,
     293,     0,     0,     0,     0,   152,     0,   152,     0,     0,
       0,     0,     0,     0,     0,     0,   152,     0,     0,     0,
      56,    57,     0,   152,   433,     0,    59,    60,    61,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,   151,    99,   152,   152,     0,     0,     0,
       0,     0,   151,     0,   151,     0,   151,     0,     0,   151,
      73,   267,     0,   434,    76,     0,  -191,   252,     0,     0,
      77,    78,    79,   152,     0,     0,     0,     0,     0,   151,
       0,   151,     0,   151,     0,   151,     0,   151,     0,     0,
       0,     0,     0,     0,     0,   152,     0,     0,   151,     0,
       0,     0,     0,     0,   152,   151,   151,     0,     0,     0,
     152,     0,   152,     0,   152,     0,   152,   152,   152,     0,
    -237,     0,   338,   281,     0,     0,   282,   283,   284,  -239,
       0,   151,   151,     0,     0,   151,  -237,     0,     0,   286,
       0,   287,     0,     0,   288,   289,   290,   291,   292,   293,
       0,   151,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   151,     0,   151,     0,     0,     0,     0,     0,     0,
     151,   152,     0,   152,   151,     0,   152,   152,     0,     0,
       0,     0,     0,     0,     0,   152,   152,   152,   152,     0,
     152,   152,   152,   152,   152,   152,   152,   152,     0,     0,
       0,     0,     0,     0,  -237,     0,   338,   281,   152,     0,
     282,   283,   284,  -239,     0,     0,     0,     0,   152,     0,
     119,     0,   152,   286,     0,   287,     0,     0,   288,   289,
     290,   291,   292,   293,     0,   153,     0,   152,   152,     0,
       0,   152,     0,   152,   152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     153,     0,   153,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,     0,     0,    56,    57,     0,   153,    58,
       0,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,   152,    72,
     153,   153,     0,     0,     0,     0,     0,   152,     0,   152,
       0,   152,     0,     0,   152,    73,    74,    75,     0,    76,
       0,     0,     0,     0,     0,    77,    78,    79,   153,     0,
       0,     0,     0,     0,   152,     0,   152,     0,   152,     0,
     152,     0,   152,     0,     0,     0,     0,     0,     0,     0,
     153,     0,     0,   152,     0,     0,     0,     0,     0,   153,
     152,   152,     0,     0,     0,   153,     0,   153,     0,   153,
       0,   153,   153,   153,     0,  -237,     0,   338,   281,     0,
       0,   282,   283,   284,  -239,     0,   152,   152,     0,     0,
     152,  -300,     0,     0,   286,     0,   287,     0,     0,   288,
     289,   290,   291,   292,   293,     0,   152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,     0,   152,     0,
       0,     0,     0,     0,     0,   152,   153,     0,   153,   152,
       0,   153,   153,     0,     0,     0,     0,     0,     0,     0,
     153,   153,   153,   153,     0,   153,   153,   153,   153,   153,
     153,   153,   153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -159,   153,     0,  -159,  -159,  -159,     0,   130,
       0,  -159,     0,   153,   131,     0,  -159,   153,     0,     0,
       0,     0,  -153,  -159,  -159,  -159,  -159,  -159,  -159,     0,
     154,     0,   153,   153,     0,     0,   153,     0,   153,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   154,     0,   154,     0,     0,
       0,     0,     0,     0,     0,     0,   154,     0,     0,     0,
      56,    57,     0,   154,   183,     0,    59,    60,    61,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,   153,    99,   154,   154,     0,     0,     0,
       0,     0,   153,     0,   153,     0,   153,     0,     0,   153,
      73,    74,     0,   100,    76,     0,     0,     0,     0,     0,
      77,    78,    79,   154,     0,     0,     0,     0,     0,   153,
       0,   153,     0,   153,     0,   153,     0,   153,     0,     0,
       0,     0,     0,     0,     0,   154,     0,     0,   153,     0,
       0,     0,     0,     0,   154,   153,   153,     0,     0,     0,
     154,     0,   154,     0,   154,     0,   154,   154,   154,     0,
     281,     0,     0,   282,   283,   284,     0,     0,   358,     0,
       0,   153,   153,     0,     0,   153,   286,     0,   287,     0,
       0,   288,   289,   290,   291,   292,   293,     0,     0,     0,
       0,   153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,   153,     0,     0,     0,     0,     0,     0,
     153,   154,     0,   154,   153,     0,   154,   154,     0,     0,
       0,     0,     0,     0,     0,   154,   154,   154,   154,     0,
     154,   154,   154,   154,   154,   154,   154,   154,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   281,   154,     0,
     282,   283,   284,     0,     0,   429,     0,     0,   154,     0,
       0,     0,   154,   286,     0,   287,     0,     0,   288,   289,
     290,   291,   292,   293,     0,   155,     0,   154,   154,     0,
       0,   154,     0,   154,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     155,     0,   155,     0,     0,     0,     0,     0,     0,     0,
       0,   155,     0,     0,     0,    56,    57,     0,   155,    58,
       0,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,   154,    72,
     155,   155,     0,     0,     0,     0,     0,   154,     0,   154,
       0,   154,     0,     0,   154,    73,    74,   257,     0,    76,
       0,     0,     0,     0,     0,    77,    78,    79,   155,     0,
       0,     0,     0,     0,   154,     0,   154,     0,   154,     0,
     154,     0,   154,     0,     0,     0,     0,     0,     0,     0,
     155,     0,     0,   154,     0,     0,     0,     0,     0,   155,
     154,   154,     0,     0,     0,   155,     0,   155,     0,   155,
       0,   155,   155,   155,     0,     0,     0,   281,     0,     0,
     282,   283,   284,     0,     0,     0,   154,   154,   439,     0,
     154,     0,     0,   286,     0,   287,     0,     0,   288,   289,
     290,   291,   292,   293,     0,     0,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   154,     0,   154,     0,
       0,     0,     0,     0,     0,   154,   155,     0,   155,   154,
       0,   155,   155,     0,     0,     0,     0,     0,     0,     0,
     155,   155,   155,   155,     0,   155,   155,   155,   155,   155,
     155,   155,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   281,   155,     0,   282,   283,   284,     0,     0,
       0,     0,     0,   155,     0,   119,     0,   155,   286,     0,
     287,     0,     0,   288,   289,   290,   291,   292,   293,     0,
     156,     0,   155,   155,     0,     0,   155,     0,   155,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,     0,   156,     0,     0,
       0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
      56,    57,     0,   156,    58,     0,    59,    60,    61,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,   155,    72,   156,   156,     0,     0,     0,
       0,     0,   155,     0,   155,     0,   155,     0,     0,   155,
      73,    74,   420,     0,    76,     0,     0,     0,     0,     0,
      77,    78,    79,   156,     0,     0,     0,     0,     0,   155,
       0,   155,     0,   155,     0,   155,     0,   155,     0,     0,
       0,     0,     0,     0,     0,   156,     0,     0,   155,     0,
       0,     0,     0,     0,   156,   155,   155,     0,     0,     0,
     156,     0,   156,     0,   156,     0,   156,   156,   156,     0,
       0,     0,   281,     0,     0,   282,   283,   284,     0,     0,
       0,   155,   155,   547,     0,   155,     0,     0,   286,     0,
     287,     0,     0,   288,   289,   290,   291,   292,   293,     0,
       0,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,     0,   155,     0,     0,     0,     0,     0,     0,
     155,   156,     0,   156,   155,     0,   156,   156,     0,     0,
       0,     0,     0,     0,     0,   156,   156,   156,   156,     0,
     156,   156,   156,   156,   156,   156,   156,   156,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   281,   156,     0,
     282,   283,   284,     0,     0,     0,     0,     0,   156,     0,
       0,     0,   156,   286,     0,   287,     0,     0,   288,   289,
     290,   291,   292,   293,     0,   167,     0,   156,   156,    56,
      57,   156,     0,   156,   156,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,   167,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   221,    73,
      74,     0,   100,    76,     0,     0,     0,     0,     0,    77,
      78,    79,   101,     0,     0,     0,     0,     0,   156,     0,
     264,   167,     0,     0,     0,     0,     0,   156,     0,   156,
       0,   156,     0,     0,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,     0,   156,     0,   156,     0,
     156,     0,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,     0,     0,     0,     0,     0,     0,
     156,   156,     0,     0,     0,   221,     0,   315,     0,   321,
       0,   330,     0,   332,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,   156,     0,     0,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,     0,   156,     0,
       0,     0,     0,     0,     0,   156,   360,     0,   368,   156,
       0,     0,   373,     0,     0,     0,     0,     0,     0,     0,
     377,   378,   379,   380,     0,   382,   383,   384,   385,   386,
     387,   388,   389,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   392,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   400,     0,     0,     0,   406,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   221,     0,     0,     0,     0,     0,   221,   415,
       0,     0,     0,   204,     0,   205,   206,     0,   207,   208,
       0,   209,     0,   210,   211,   134,    57,   212,   213,     0,
     214,    59,    60,    61,    17,    18,    19,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,   215,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   444,     0,   140,   141,     0,     0,   142,
       0,     0,   119,   216,   455,   144,    78,    79,     0,   458,
     145,   146,   147,     0,     0,   148,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,     0,   368,
       0,   475,    59,    60,    61,   392,     0,   480,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,   221,     0,
      99,     0,     0,     0,     0,   500,   501,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,   100,
      76,     0,     0,     0,     0,     0,    77,    78,    79,   112,
       0,   515,   515,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   392,     0,   538,     0,     0,     0,     0,     0,     0,
     221,     0,     0,   204,   221,   205,   206,     0,   207,   208,
       0,   209,     0,   210,   211,   134,    57,   212,   213,     0,
     214,    59,    60,    61,    17,    18,    19,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,   215,
     136,   137,   138,   139,     0,     0,  -231,     0,     0,     0,
       0,     0,     0,     0,     0,   140,   141,     0,     0,   142,
       0,     0,   119,     0,     0,   144,    78,    79,     0,     0,
     145,   146,   147,     0,     0,   148,   149,   204,     0,   205,
     206,     0,   207,   208,     0,   209,     0,   210,   211,   134,
      57,   212,   213,     0,   214,    59,    60,    61,    17,    18,
      19,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,   215,   136,   137,   138,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   140,
     141,     0,     0,   142,     0,     0,   119,     0,     0,   144,
      78,    79,     0,     0,   145,   146,   147,     0,   318,   148,
     149,   134,    57,     0,     0,     0,     0,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,   192,   136,   137,   138,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   141,     0,     0,   142,     0,     0,  -299,     0,
       0,   144,    78,    79,     0,     0,   145,   146,   147,     0,
     456,   148,   149,   134,    57,     0,     0,     0,     0,    59,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,   135,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   140,   141,     0,     0,   142,     0,     0,
       0,     0,     0,   144,    78,    79,     0,     0,   145,   146,
     147,   134,    57,   148,   149,   265,     0,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,   135,   136,   137,   138,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   141,     0,     0,   142,   143,     0,     0,     0,
       0,   144,    78,    79,     0,     0,   145,   146,   147,   134,
      57,   148,   149,     0,     0,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,   361,   136,   137,   138,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   140,
     141,     0,     0,   142,     0,     0,   269,   362,     0,   144,
      78,    79,     0,     0,   145,   146,   147,   134,    57,   148,
     149,     0,     0,    59,    60,    61,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,   361,   136,   137,   138,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   140,   141,     0,
       0,   142,     0,     0,   269,   471,     0,   144,    78,    79,
       0,     0,   145,   146,   147,   134,    57,   148,   149,     0,
       0,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,   135,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,   141,     0,     0,   142,
     143,     0,     0,     0,     0,   144,    78,    79,     0,     0,
     145,   146,   147,   134,    57,   148,   149,     0,     0,    59,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,   192,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   140,   141,     0,     0,   142,   143,     0,
       0,     0,     0,   144,    78,    79,     0,     0,   145,   146,
     147,   134,    57,   148,   149,     0,     0,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,   192,   136,   137,   138,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   141,     0,     0,   142,     0,     0,  -267,     0,
       0,   144,    78,    79,     0,     0,   145,   146,   147,   134,
      57,   148,   149,     0,     0,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,   135,   136,   137,   138,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   140,
     141,     0,     0,   142,     0,     0,   269,     0,     0,   144,
      78,    79,     0,     0,   145,   146,   147,   134,    57,   148,
     149,     0,     0,    59,    60,    61,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,   135,   136,   137,   138,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   140,   141,     0,
       0,   142,     0,     0,     0,     0,     0,   144,    78,    79,
       0,     0,   145,   146,   147,   134,    57,   148,   149,     0,
       0,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,   192,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,   141,     0,     0,   142,
       0,     0,     0,     0,     0,   144,    78,    79,     0,     0,
     145,   146,   147,   134,    57,   148,   149,     0,     0,    59,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,   399,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   140,   141,     0,     0,   142,     0,     0,
       0,     0,     0,   144,    78,    79,     0,     0,   145,   146,
     147,    56,    57,   148,   149,     0,     0,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,   103,     0,     0,     0,    56,
      57,    77,    78,    79,   104,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,     0,    76,     0,     0,     0,    56,    57,    77,
      78,    79,   191,    59,    60,    61,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    76,     0,     0,     0,   134,    57,    77,    78,    79,
     200,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,   135,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,   141,     0,     0,   142,
       0,     0,     0,     0,     0,    77,    78,    79,    56,    57,
       0,     0,    58,     0,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
     465,     0,    76,     0,     0,     0,     0,     0,    77,    78,
      79,    56,    57,     0,     0,    58,     0,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,   508,     0,    76,     0,     0,    56,    57,
       0,    77,    78,    79,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,   100,    76,     0,     0,    56,    57,     0,    77,    78,
      79,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,   261,     0,    76,
       0,     0,     0,     0,     0,    77,    78,    79,    56,    57,
       0,     0,    58,     0,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    76,     0,     0,    56,    57,     0,    77,    78,
      79,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    76,
     344,     0,    56,    57,     0,    77,    78,    79,    59,    60,
      61,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    99,     0,     0,     0,
       0,     0,     0,   352,     0,     0,     0,     0,     0,     0,
       0,     0,    73,   353,     0,     0,    76,     0,     0,    56,
      57,     0,    77,    78,    79,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
     267,   261,     0,    76,     0,     0,    56,    57,     0,    77,
      78,    79,    59,    60,    61,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,     0,
      99,     0,     0,   419,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
      76,     0,     0,    56,    57,     0,    77,    78,    79,    59,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,    99,     0,     0,
       0,     0,     0,     0,   423,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    76,     0,     0,
      56,    57,     0,    77,    78,    79,    59,    60,    61,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,    99,     0,     0,     0,     0,     0,
       0,   424,     0,     0,     0,     0,     0,     0,     0,     0,
      73,   425,     0,     0,    76,     0,     0,    56,    57,     0,
      77,    78,    79,    59,    60,    61,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,    99,     0,     0,     0,     0,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    76,     0,     0,    56,    57,     0,    77,    78,    79,
      59,    60,    61,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,    99,     0,
       0,     0,     0,     0,     0,   468,     0,     0,     0,     0,
       0,     0,     0,     0,    73,   469,     0,     0,    76,     0,
       0,    56,    57,     0,    77,    78,    79,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,   481,     0,    76,     0,     0,    56,    57,
       0,    77,    78,    79,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    99,     0,     0,     0,     0,     0,     0,   510,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    76,     0,     0,    56,    57,     0,    77,    78,
      79,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,   548,     0,    76,
       0,     0,    56,    57,     0,    77,    78,    79,    59,    60,
      61,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,    76,     0,     0,    56,
      57,     0,    77,    78,    79,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
      74,     0,     0,    76,     0,     0,    56,    57,     0,    77,
      78,    79,    59,    60,    61,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
      76,     0,     0,    56,    57,     0,    77,   173,    79,   247,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    76,     0,     0,
      56,    57,     0,    77,    78,    79,    59,    60,    61,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,   267,     0,     0,    76,     0,     0,     0,     0,     0,
      77,    78,    79,  -159,  -159,     0,  -159,  -159,  -159,     0,
    -159,  -159,  -159,     0,   130,     0,     0,     0,  -159,   131,
       0,  -159,     0,     0,     0,     0,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159
};

static const yytype_int16 yycheck[] =
{
      34,   130,    17,   161,    19,    39,    40,   206,   454,   208,
     339,   210,    46,     9,     4,    19,    53,     7,    37,    34,
      54,   151,    37,     8,    58,    59,    55,    56,     4,    39,
      45,     7,    39,   163,    39,    19,    39,    52,    19,    42,
      74,    39,    50,    77,    78,    79,    80,    39,     0,    56,
      58,    56,    56,    56,    42,    65,    57,    61,    61,    39,
      68,    95,    39,    48,    56,    42,    62,    96,   102,    45,
     104,   105,   106,    63,    58,    47,    58,    58,    60,   113,
      60,   527,   116,    39,    61,   122,    58,   121,   103,    39,
     124,   125,   126,   127,   128,    50,   130,    56,   132,   133,
      42,    57,    61,    58,    46,   134,    56,   141,    39,   143,
     144,    39,    47,    68,   129,   130,   150,    59,   101,    61,
     449,    15,   252,    58,    47,    56,    58,    46,    56,   112,
      24,    25,    26,    57,    58,    58,    68,   171,   172,   173,
     174,   175,    56,   177,    46,    59,    38,   181,   185,   183,
     184,    56,    56,    46,    59,    59,    61,    61,    58,   193,
     194,    59,     4,    63,    62,     7,   181,     4,    46,    10,
       7,   186,    13,    58,    39,    60,    45,    46,    39,    48,
      49,    50,   197,    52,    53,    54,    39,   202,    62,    57,
      58,    60,   521,    56,    63,   210,   525,    57,    58,    68,
      69,    70,    71,    72,    73,    74,    75,    62,   191,    57,
      58,    57,    58,   247,   248,   249,   346,   200,   482,   483,
      59,    21,   256,   257,   353,   262,   260,   210,    62,   263,
     213,    59,   266,   267,    58,    46,    46,    57,   272,    46,
      39,    57,    46,    57,    39,    62,    39,    62,    39,    62,
      62,   285,    57,    62,    80,    61,    58,    39,    46,    62,
      39,    55,   296,   297,    60,    63,    63,   301,    46,    42,
      39,    63,    62,    62,   432,    46,   102,    61,   315,   105,
      46,    46,    57,    64,    69,    57,   323,   113,    45,   272,
     116,    45,    69,    63,    62,   121,   425,    10,    12,   125,
      46,   127,    58,   502,    46,    58,    46,   133,    57,   343,
     344,    46,    60,    63,    45,    45,    63,   351,    10,   353,
     354,   355,    46,    46,   150,   359,    46,    46,    57,    46,
      58,    58,    57,   492,    46,   369,    62,   418,   353,    49,
     469,   375,    52,    53,    54,   171,   172,   381,   174,   175,
      60,   334,    16,   186,   337,    65,   390,    67,   184,   181,
      70,    71,    72,    73,    74,    75,   124,   193,   194,    17,
     195,    18,    40,   202,    19,   430,   197,   403,   432,   394,
     438,   488,   416,   169,   333,   493,   395,   421,   410,    28,
      48,   425,   426,   427,   428,     7,    50,    -1,    -1,    -1,
      -1,    -1,    -1,   418,    -1,    -1,   440,   441,    -1,    -1,
     425,   394,    -1,    -1,    -1,    -1,    -1,   454,   455,    -1,
      -1,    -1,   248,   249,   407,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   260,   469,   470,   263,    -1,    45,
     266,    -1,    -1,    49,    -1,    -1,    52,    53,    54,    -1,
      -1,   434,    -1,    -1,   469,    76,    -1,    -1,   492,    65,
      -1,    67,    -1,    -1,    70,    71,    72,    73,    74,    75,
     296,   297,    -1,    -1,    -1,   301,    -1,    -1,    -1,    -1,
     101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     527,   112,   526,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,   486,    -1,    -1,    -1,   541,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,
     141,   142,    -1,    -1,    -1,   351,    -1,    -1,   354,    -1,
      -1,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    -1,    56,   369,    58,    -1,    60,    61,   169,    -1,
      -1,    -1,    -1,    -1,    68,   381,    70,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      -1,    -1,    -1,    -1,    -1,   206,    -1,   208,    -1,   210,
     416,   212,   213,   214,    -1,   421,    -1,    45,    -1,    -1,
     426,    49,   428,    -1,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   440,   441,    -1,    65,    -1,    67,
      -1,    -1,    70,    71,    72,    73,    74,    75,    -1,    -1,
     251,    47,    -1,    49,    -1,    -1,    52,    53,    54,    -1,
      56,    -1,    -1,    -1,   470,    61,   267,    -1,   269,    -1,
      -1,   272,   273,    -1,    70,    71,    72,    73,    74,    75,
     281,   282,   283,   284,    -1,   286,   287,   288,   289,   290,
     291,   292,   293,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,   304,    56,    -1,    58,    -1,    -1,    61,
      -1,    -1,    -1,   314,    -1,    -1,    68,   318,    70,    71,
      72,    73,    74,    75,    49,    -1,    -1,    52,    53,    54,
      76,    -1,   333,   334,    -1,   541,   337,    -1,   339,   340,
      65,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      15,    16,    -1,   119,    19,    -1,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,   394,    39,   141,   142,    -1,    -1,    -1,
      -1,    -1,   403,    -1,   405,    -1,   407,    -1,    -1,   410,
      55,    56,    -1,    58,    59,    -1,    61,   418,    -1,    -1,
      65,    66,    67,   169,    -1,    -1,    -1,    -1,    -1,   430,
      -1,   432,    -1,   434,    -1,   436,    -1,   438,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,   449,    -1,
      -1,    -1,    -1,    -1,   200,   456,   457,    -1,    -1,    -1,
     206,    -1,   208,    -1,   210,    -1,   212,   213,   214,    -1,
      46,    -1,    48,    49,    -1,    -1,    52,    53,    54,    55,
      -1,   482,   483,    -1,    -1,   486,    62,    -1,    -1,    65,
      -1,    67,    -1,    -1,    70,    71,    72,    73,    74,    75,
      -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   512,    -1,   514,    -1,    -1,    -1,    -1,    -1,    -1,
     521,   267,    -1,   269,   525,    -1,   272,   273,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   281,   282,   283,   284,    -1,
     286,   287,   288,   289,   290,   291,   292,   293,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    48,    49,   304,    -1,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,   314,    -1,
      62,    -1,   318,    65,    -1,    67,    -1,    -1,    70,    71,
      72,    73,    74,    75,    -1,    76,    -1,   333,   334,    -1,
      -1,   337,    -1,   339,   340,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    15,    16,    -1,   119,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,   394,    39,
     141,   142,    -1,    -1,    -1,    -1,    -1,   403,    -1,   405,
      -1,   407,    -1,    -1,   410,    55,    56,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,   169,    -1,
      -1,    -1,    -1,    -1,   430,    -1,   432,    -1,   434,    -1,
     436,    -1,   438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     191,    -1,    -1,   449,    -1,    -1,    -1,    -1,    -1,   200,
     456,   457,    -1,    -1,    -1,   206,    -1,   208,    -1,   210,
      -1,   212,   213,   214,    -1,    46,    -1,    48,    49,    -1,
      -1,    52,    53,    54,    55,    -1,   482,   483,    -1,    -1,
     486,    62,    -1,    -1,    65,    -1,    67,    -1,    -1,    70,
      71,    72,    73,    74,    75,    -1,   502,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   512,    -1,   514,    -1,
      -1,    -1,    -1,    -1,    -1,   521,   267,    -1,   269,   525,
      -1,   272,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     281,   282,   283,   284,    -1,   286,   287,   288,   289,   290,
     291,   292,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,   304,    -1,    52,    53,    54,    -1,    56,
      -1,    58,    -1,   314,    61,    -1,    63,   318,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      76,    -1,   333,   334,    -1,    -1,   337,    -1,   339,   340,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      15,    16,    -1,   119,    19,    -1,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,   394,    39,   141,   142,    -1,    -1,    -1,
      -1,    -1,   403,    -1,   405,    -1,   407,    -1,    -1,   410,
      55,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,   169,    -1,    -1,    -1,    -1,    -1,   430,
      -1,   432,    -1,   434,    -1,   436,    -1,   438,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,   449,    -1,
      -1,    -1,    -1,    -1,   200,   456,   457,    -1,    -1,    -1,
     206,    -1,   208,    -1,   210,    -1,   212,   213,   214,    -1,
      49,    -1,    -1,    52,    53,    54,    -1,    -1,    57,    -1,
      -1,   482,   483,    -1,    -1,   486,    65,    -1,    67,    -1,
      -1,    70,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   512,    -1,   514,    -1,    -1,    -1,    -1,    -1,    -1,
     521,   267,    -1,   269,   525,    -1,   272,   273,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   281,   282,   283,   284,    -1,
     286,   287,   288,   289,   290,   291,   292,   293,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,   304,    -1,
      52,    53,    54,    -1,    -1,    57,    -1,    -1,   314,    -1,
      -1,    -1,   318,    65,    -1,    67,    -1,    -1,    70,    71,
      72,    73,    74,    75,    -1,    76,    -1,   333,   334,    -1,
      -1,   337,    -1,   339,   340,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    15,    16,    -1,   119,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,   394,    39,
     141,   142,    -1,    -1,    -1,    -1,    -1,   403,    -1,   405,
      -1,   407,    -1,    -1,   410,    55,    56,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,   169,    -1,
      -1,    -1,    -1,    -1,   430,    -1,   432,    -1,   434,    -1,
     436,    -1,   438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     191,    -1,    -1,   449,    -1,    -1,    -1,    -1,    -1,   200,
     456,   457,    -1,    -1,    -1,   206,    -1,   208,    -1,   210,
      -1,   212,   213,   214,    -1,    -1,    -1,    49,    -1,    -1,
      52,    53,    54,    -1,    -1,    -1,   482,   483,    60,    -1,
     486,    -1,    -1,    65,    -1,    67,    -1,    -1,    70,    71,
      72,    73,    74,    75,    -1,    -1,   502,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   512,    -1,   514,    -1,
      -1,    -1,    -1,    -1,    -1,   521,   267,    -1,   269,   525,
      -1,   272,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     281,   282,   283,   284,    -1,   286,   287,   288,   289,   290,
     291,   292,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,   304,    -1,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,   314,    -1,    62,    -1,   318,    65,    -1,
      67,    -1,    -1,    70,    71,    72,    73,    74,    75,    -1,
      76,    -1,   333,   334,    -1,    -1,   337,    -1,   339,   340,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      15,    16,    -1,   119,    19,    -1,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,   394,    39,   141,   142,    -1,    -1,    -1,
      -1,    -1,   403,    -1,   405,    -1,   407,    -1,    -1,   410,
      55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,   169,    -1,    -1,    -1,    -1,    -1,   430,
      -1,   432,    -1,   434,    -1,   436,    -1,   438,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,   449,    -1,
      -1,    -1,    -1,    -1,   200,   456,   457,    -1,    -1,    -1,
     206,    -1,   208,    -1,   210,    -1,   212,   213,   214,    -1,
      -1,    -1,    49,    -1,    -1,    52,    53,    54,    -1,    -1,
      -1,   482,   483,    60,    -1,   486,    -1,    -1,    65,    -1,
      67,    -1,    -1,    70,    71,    72,    73,    74,    75,    -1,
      -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   512,    -1,   514,    -1,    -1,    -1,    -1,    -1,    -1,
     521,   267,    -1,   269,   525,    -1,   272,   273,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   281,   282,   283,   284,    -1,
     286,   287,   288,   289,   290,   291,   292,   293,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,   304,    -1,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,   314,    -1,
      -1,    -1,   318,    65,    -1,    67,    -1,    -1,    70,    71,
      72,    73,    74,    75,    -1,    76,    -1,   333,   334,    15,
      16,   337,    -1,   339,   340,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,   103,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    55,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    -1,    -1,    -1,    -1,    -1,   394,    -1,
     141,   142,    -1,    -1,    -1,    -1,    -1,   403,    -1,   405,
      -1,   407,    -1,    -1,   410,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   430,    -1,   432,    -1,   434,    -1,
     436,    -1,   438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   449,    -1,    -1,    -1,    -1,    -1,    -1,
     456,   457,    -1,    -1,    -1,   206,    -1,   208,    -1,   210,
      -1,   212,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   482,   483,    -1,    -1,
     486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   512,    -1,   514,    -1,
      -1,    -1,    -1,    -1,    -1,   521,   267,    -1,   269,   525,
      -1,    -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     281,   282,   283,   284,    -1,   286,   287,   288,   289,   290,
     291,   292,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   314,    -1,    -1,    -1,   318,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   333,    -1,    -1,    -1,    -1,    -1,   339,   340,
      -1,    -1,    -1,     3,    -1,     5,     6,    -1,     8,     9,
      -1,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   394,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    62,    63,   405,    65,    66,    67,    -1,   410,
      70,    71,    72,    -1,    -1,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,   430,
      -1,   432,    21,    22,    23,   436,    -1,   438,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,   449,    -1,
      39,    -1,    -1,    -1,    -1,   456,   457,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,   482,   483,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   512,    -1,   514,    -1,    -1,    -1,    -1,    -1,    -1,
     521,    -1,    -1,     3,   525,     5,     6,    -1,     8,     9,
      -1,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    -1,    -1,
      70,    71,    72,    -1,    -1,    75,    76,     3,    -1,     5,
       6,    -1,     8,     9,    -1,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    -1,    -1,    70,    71,    72,    -1,    12,    75,
      76,    15,    16,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    -1,    -1,    70,    71,    72,    -1,
      12,    75,    76,    15,    16,    -1,    -1,    -1,    -1,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    -1,    -1,    70,    71,
      72,    15,    16,    75,    76,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    -1,    -1,    70,    71,    72,    15,
      16,    75,    76,    -1,    -1,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    62,    63,    -1,    65,
      66,    67,    -1,    -1,    70,    71,    72,    15,    16,    75,
      76,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    62,    63,    -1,    65,    66,    67,
      -1,    -1,    70,    71,    72,    15,    16,    75,    76,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,
      70,    71,    72,    15,    16,    75,    76,    -1,    -1,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    -1,    -1,    70,    71,
      72,    15,    16,    75,    76,    -1,    -1,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    -1,    -1,    70,    71,    72,    15,
      16,    75,    76,    -1,    -1,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    -1,    -1,    70,    71,    72,    15,    16,    75,
      76,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      -1,    -1,    70,    71,    72,    15,    16,    75,    76,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,
      70,    71,    72,    15,    16,    75,    76,    -1,    -1,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    -1,    -1,    70,    71,
      72,    15,    16,    75,    76,    -1,    -1,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,    15,
      16,    65,    66,    67,    68,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    -1,    15,    16,    65,
      66,    67,    68,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    -1,    15,    16,    65,    66,    67,
      68,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    15,    16,
      -1,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    15,    16,    -1,    -1,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    -1,    -1,    15,    16,
      -1,    65,    66,    67,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    58,    59,    -1,    -1,    15,    16,    -1,    65,    66,
      67,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    15,    16,
      -1,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    -1,    -1,    15,    16,    -1,    65,    66,
      67,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      60,    -1,    15,    16,    -1,    65,    66,    67,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    15,
      16,    -1,    65,    66,    67,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    59,    -1,    -1,    15,    16,    -1,    65,
      66,    67,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    -1,    -1,    15,    16,    -1,    65,    66,    67,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,
      15,    16,    -1,    65,    66,    67,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    -1,    15,    16,    -1,
      65,    66,    67,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    15,    16,    -1,    65,    66,    67,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,
      -1,    15,    16,    -1,    65,    66,    67,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    -1,    -1,    15,    16,
      -1,    65,    66,    67,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    -1,    -1,    15,    16,    -1,    65,    66,
      67,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    59,
      -1,    -1,    15,    16,    -1,    65,    66,    67,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    15,
      16,    -1,    65,    66,    67,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    15,    16,    -1,    65,
      66,    67,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    -1,    -1,    15,    16,    -1,    65,    66,    67,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,
      15,    16,    -1,    65,    66,    67,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    45,    46,    -1,    48,    49,    50,    -1,
      52,    53,    54,    -1,    56,    -1,    -1,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,   195,   198,    39,     0,    46,    38,   196,   199,
      39,    42,    56,    61,   200,   202,    15,    24,    25,    26,
     100,   101,   102,   107,   115,   119,   120,   197,    46,   202,
     200,   201,   202,    39,    56,    93,    39,    56,   103,   105,
      39,    56,   108,   110,   111,    56,   105,   116,    46,   196,
      46,    57,    59,    92,    93,   112,    15,    16,    19,    21,
      22,    23,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    39,    55,    56,    57,    59,    65,    66,    67,
      78,    79,    82,    83,    84,    85,    86,    90,    91,    94,
      95,    96,    97,    98,    99,   105,    39,   103,   104,    39,
      58,    68,    78,    59,    68,    78,   112,   108,   109,    57,
     116,   117,    68,    78,   197,   201,   105,   113,   114,    62,
     162,    78,    92,    92,    62,    78,    55,    78,    59,    62,
      56,    61,    21,    78,    15,    39,    40,    41,    42,    43,
      55,    56,    59,    60,    65,    70,    71,    72,    75,    76,
      78,    79,    83,    84,    85,    86,    98,   121,   122,   123,
     124,   125,   131,   132,   133,   141,   142,   143,   144,   145,
     146,    78,    78,    66,    78,    78,    97,    59,    81,    57,
      58,    58,    46,    19,    78,    92,    46,    57,    39,   106,
     143,    68,    39,    78,    78,    46,    57,    46,    57,   106,
      68,    97,    58,    60,     3,     5,     6,     8,     9,    11,
      13,    14,    17,    18,    20,    39,    63,   100,   105,   106,
     118,   143,   147,   148,   149,   150,   151,   152,   153,   154,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   172,   178,   184,   194,   162,    96,    21,    78,    78,
      39,    65,    79,    87,    88,    89,   105,    57,    94,    39,
      78,    57,    92,    78,   143,    19,    78,    56,    81,    62,
     126,    81,    56,    59,    61,   134,   135,   136,   138,   139,
      61,    49,    52,    53,    54,    60,    65,    67,    70,    71,
      72,    73,    74,    75,   144,    97,    78,    78,    80,    57,
      95,    78,   162,   104,    58,   106,   109,   117,   106,    60,
     114,    39,    62,   149,   167,   143,   149,    39,    12,   105,
     106,   143,   149,   185,   186,   187,   188,   189,   193,    39,
     143,   106,   143,    45,    47,    50,    68,   155,    48,    46,
      55,    63,    63,    78,    60,    39,    79,    81,    63,    46,
      42,    78,    46,    56,    78,    57,    58,   162,    57,    60,
     143,    39,    63,   126,   127,   128,   129,   130,   143,    78,
     106,   140,   137,   143,    39,    56,    39,   143,   143,   143,
     143,    78,   143,   143,   143,   143,   143,   143,   143,   143,
      58,    60,   143,     4,     7,   179,   180,   181,    46,    39,
     143,   168,   173,   174,   162,    46,   143,    47,    68,   162,
      46,   147,   106,   106,   163,   143,    78,    81,    64,    42,
      57,    78,    94,    46,    46,    56,    78,    57,    78,    57,
      58,    63,    69,    19,    58,    19,    58,    57,    45,    60,
      78,    78,   105,   106,   143,   182,   183,   180,    63,    45,
      47,    62,    62,   133,    10,   143,    12,    12,   143,   186,
     190,    87,    46,    57,    58,    57,    94,    46,    46,    56,
      78,    63,   127,   126,   130,   143,    58,   106,    58,   137,
     143,    57,    47,    68,   163,     4,     7,    63,   169,   170,
     171,     4,     7,   175,   176,   177,    61,   162,   164,   162,
     143,   143,    46,    46,    57,    46,    57,    58,    57,    94,
      46,    19,    58,    60,    45,   143,   183,   183,   106,   170,
      63,    45,    80,   176,    63,    45,    56,    10,   149,   191,
     192,    46,    46,    57,    46,    57,    58,    58,   143,   163,
     163,    78,   162,   164,    46,    46,    57,    60,    57,    46
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 94:

/* Line 1464 of yacc.c  */
#line 188 ".\\go_yacc.y"
    {printf("zxc ");}
    break;

  case 95:

/* Line 1464 of yacc.c  */
#line 189 ".\\go_yacc.y"
    {printf("wer ");}
    break;

  case 96:

/* Line 1464 of yacc.c  */
#line 192 ".\\go_yacc.y"
    {printf("zxcv ");}
    break;

  case 97:

/* Line 1464 of yacc.c  */
#line 193 ".\\go_yacc.y"
    {printf("zxcb ");}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 350 ".\\go_yacc.y"
    {printf("1 ");}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 351 ".\\go_yacc.y"
    {printf("2 ");}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 352 ".\\go_yacc.y"
    {printf("3 ");}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 353 ".\\go_yacc.y"
    {printf("4 ");}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 354 ".\\go_yacc.y"
    {printf("5 ");}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 355 ".\\go_yacc.y"
    {printf("6 ");}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 356 ".\\go_yacc.y"
    {printf("7 ");}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 357 ".\\go_yacc.y"
    {printf("8 ");}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 358 ".\\go_yacc.y"
    {printf("9 ");}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 359 ".\\go_yacc.y"
    {printf("10 ");}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 360 ".\\go_yacc.y"
    {printf("11 ");}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 361 ".\\go_yacc.y"
    {printf("12 ");}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 362 ".\\go_yacc.y"
    {printf("13 ");}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 366 ".\\go_yacc.y"
    {printf("14 ");}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 367 ".\\go_yacc.y"
    {printf("15 ");}
    break;

  case 291:

/* Line 1464 of yacc.c  */
#line 516 ".\\go_yacc.y"
    {printf("qwe");}
    break;

  case 292:

/* Line 1464 of yacc.c  */
#line 517 ".\\go_yacc.y"
    {printf("asd");}
    break;

  case 295:

/* Line 1464 of yacc.c  */
#line 524 ".\\go_yacc.y"
    {printf("a ");}
    break;

  case 296:

/* Line 1464 of yacc.c  */
#line 527 ".\\go_yacc.y"
    {printf("b ");}
    break;

  case 297:

/* Line 1464 of yacc.c  */
#line 528 ".\\go_yacc.y"
    {printf("c ");}
    break;

  case 298:

/* Line 1464 of yacc.c  */
#line 529 ".\\go_yacc.y"
    {printf("d ");}
    break;

  case 299:

/* Line 1464 of yacc.c  */
#line 530 ".\\go_yacc.y"
    {printf("ttt ");}
    break;

  case 300:

/* Line 1464 of yacc.c  */
#line 533 ".\\go_yacc.y"
    {printf("ad ");}
    break;

  case 301:

/* Line 1464 of yacc.c  */
#line 536 ".\\go_yacc.y"
    {printf("bc ");}
    break;



/* Line 1464 of yacc.c  */
#line 2988 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 597 ".\\go_yacc.y"


void yyerror(char *s) {
    printf("\nline %d: %s \n", lineno, s);
}

int main() {
    yyparse();
}
