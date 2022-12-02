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
#line 1 "go_yacc.y"

#include<stdio.h>

extern int lineno;
extern int tokenno;
int yylex();
void yyerror(char *s);


/* Line 189 of yacc.c  */
#line 82 "go_yacc.tab.c"

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



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 179 "go_yacc.tab.c"

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
#define YYLAST   4212

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  329
/* YYNRULES -- Number of states.  */
#define YYNSTATES  542

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
     661,   665,   667,   669,   673,   675,   678,   680,   682,   684,
     686,   688,   690,   692,   694,   696,   698,   700,   702,   704,
     706,   708,   710,   712,   714,   716,   718,   720,   722,   727,
     729,   731,   733,   735,   737,   739,   741,   743,   745,   747,
     749,   751,   753,   755,   757,   761,   763,   765,   767,   769,
     771,   773,   774,   776,   780,   782,   785,   789,   791,   793,
     796,   799,   801,   804,   806,   809,   811,   814,   816,   820,
     824,   825,   833,   841,   847,   853,   857,   859,   861,   868,
     871,   872,   874,   875,   879,   882,   883,   886,   888,   895,
     902,   905,   906,   910,   913,   914,   917,   919,   924,   928,
     931,   932,   933,   936,   938,   942,   946,   948,   950,   954,
     956,   958,   960,   961,   963,   969,   971,   973,   974,   976,
     977,   979,   981,   986,   991,   994,   997,  1002,  1006,  1007,
    1011,  1012,  1015,  1018,  1023,  1026,  1029,  1031,  1035,  1036
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     200,     0,    -1,    79,    -1,    79,    81,    -1,    56,    78,
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
      47,   106,    -1,    15,    39,   112,    92,   167,    -1,    15,
      39,    92,   167,    -1,    15,    39,   112,    92,    -1,    15,
      39,    92,    -1,    15,    93,    39,    92,   167,    -1,    15,
      93,    39,    92,    -1,   122,    -1,   132,    81,    -1,   132,
      -1,    56,   143,    57,    -1,   123,    -1,   124,    -1,   131,
      -1,    40,    -1,    41,    -1,    43,    -1,    42,    -1,   125,
     126,    -1,    86,    -1,    84,    -1,    59,    19,    60,    78,
      -1,    85,    -1,    98,    -1,    79,    -1,    79,    81,    -1,
      62,   128,    58,    63,    -1,    62,   128,    63,    -1,    62,
      63,    -1,   129,    69,   130,    -1,   130,    -1,   128,    58,
     127,    -1,   127,    -1,    39,    -1,   143,    -1,   126,    -1,
     143,    -1,   126,    -1,    15,    92,   167,    -1,    39,    -1,
      83,    -1,   121,    -1,   150,    -1,   141,    -1,   133,   134,
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
     145,   143,    -1,   133,    -1,   149,   144,    -1,    52,    -1,
      53,    -1,   146,    -1,   147,    -1,   148,    -1,    54,    -1,
      70,    -1,    71,    -1,    67,    -1,    72,    -1,    65,    -1,
      73,    -1,    74,    -1,    49,    -1,    75,    -1,    70,    -1,
      71,    -1,    76,    -1,    72,    -1,    65,    -1,    75,    -1,
      55,    -1,    78,    56,   143,    57,    -1,   100,    -1,   152,
      -1,   153,    -1,   161,    -1,   162,    -1,   163,    -1,   164,
      -1,   165,    -1,   166,    -1,   167,    -1,   169,    -1,   170,
      -1,   183,    -1,   189,    -1,   199,    -1,    39,    45,   151,
      -1,   154,    -1,   155,    -1,   156,    -1,   158,    -1,   159,
      -1,   118,    -1,    -1,   143,    -1,   157,    55,   143,    -1,
     143,    -1,   143,    48,    -1,   106,   160,   106,    -1,    50,
      -1,    68,    -1,    20,   143,    -1,    18,   106,    -1,    18,
      -1,     3,    39,    -1,     3,    -1,    14,    39,    -1,    14,
      -1,    11,    39,    -1,     8,    -1,    62,   168,    63,    -1,
     151,    46,   168,    -1,    -1,     9,   153,    46,   143,   167,
      10,   169,    -1,     9,   153,    46,   143,   167,    10,   167,
      -1,     9,   143,   167,    10,   169,    -1,     9,   143,   167,
      10,   167,    -1,     9,   143,   167,    -1,   171,    -1,   177,
      -1,     6,   172,   173,    62,   175,    63,    -1,   153,    46,
      -1,    -1,   143,    -1,    -1,   176,    45,   168,    -1,   174,
     175,    -1,    -1,     7,   106,    -1,     4,    -1,     6,   172,
     178,    62,   181,    63,    -1,   179,   133,    61,    56,    78,
      57,    -1,    39,    47,    -1,    -1,   182,    45,   168,    -1,
     180,   181,    -1,    -1,     7,    80,    -1,     4,    -1,     5,
      62,   185,    63,    -1,   186,    45,   168,    -1,   184,   185,
      -1,    -1,    -1,     7,   187,    -1,     4,    -1,   106,    68,
     188,    -1,   105,    47,   188,    -1,   188,    -1,   143,    -1,
      13,   190,   167,    -1,   191,    -1,   192,    -1,   198,    -1,
      -1,   143,    -1,   194,    46,   195,    46,   197,    -1,   153,
      -1,   193,    -1,    -1,   191,    -1,    -1,   153,    -1,   196,
      -1,   106,    68,    12,   143,    -1,   105,    47,    12,   143,
      -1,    12,   143,    -1,    17,   143,    -1,   203,    46,   201,
     202,    -1,   204,    46,   201,    -1,    -1,   101,    46,   202,
      -1,    -1,    37,    39,    -1,    38,   205,    -1,    38,    56,
     206,    57,    -1,    61,   207,    -1,    39,   207,    -1,   207,
      -1,   205,    46,   206,    -1,    -1,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    40,    41,    42,    44,    44,    47,    48,
      51,    53,    53,    53,    53,    53,    54,    54,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    68,
      71,    74,    77,    79,    80,    83,    84,    85,    86,    89,
      90,    91,    92,    97,    99,   102,   103,   107,   108,   109,
     115,   116,   118,   119,   120,   121,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   148,   149,   150,   151,   155,   158,   159,
     160,   165,   165,   165,   167,   167,   167,   171,   172,   176,
     177,   178,   182,   183,   187,   188,   191,   192,   197,   198,
     202,   202,   205,   206,   209,   212,   213,   216,   217,   220,
     221,   222,   227,   228,   229,   232,   233,   234,   237,   238,
     241,   244,   245,   246,   247,   251,   252,   259,   260,   261,
     262,   266,   267,   268,   272,   273,   274,   275,   278,   279,
     279,   279,   280,   280,   280,   280,   282,   283,   284,   288,
     289,   292,   293,   297,   297,   297,   299,   299,   301,   303,
     303,   307,   308,   309,   310,   311,   312,   313,   314,   316,
     317,   319,   320,   323,   324,   326,   327,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     344,   345,   349,   350,   354,   355,   357,   357,   357,   357,
     357,   358,   359,   359,   359,   359,   360,   360,   360,   360,
     360,   361,   361,   361,   361,   361,   361,   361,   364,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   384,   386,   387,   388,   389,   390,
     391,   394,   395,   396,   398,   399,   400,   402,   403,   406,
     408,   409,   412,   413,   416,   417,   419,   420,   421,   423,
     424,   427,   428,   429,   430,   431,   434,   435,   438,   441,
     442,   445,   446,   449,   451,   452,   455,   456,   459,   462,
     465,   466,   469,   472,   473,   476,   477,   485,   488,   491,
     492,   494,   495,   496,   499,   500,   501,   504,   507,   510,
     511,   512,   513,   516,   519,   522,   525,   526,   529,   530,
     533,   536,   539,   540,   541,   544,   548,   552,   553,   557,
     558,   562,   566,   567,   570,   571,   572,   575,   576,   578
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
  "MethodExpr", "ParametersType", "Expression", "UnaryExpr", "binary_op",
  "rel_op", "add_op", "mul_op", "unary_op", "Conversion", "Statement",
  "LabeledStmt", "SimpleStmt", "EmptyStmt", "ExpressionStmt", "SendStmt",
  "Channel", "IncDecStmt", "Assignment", "assign_op", "GoStmt",
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
     141,   142,   143,   143,   144,   144,   145,   145,   145,   145,
     145,   146,   147,   147,   147,   147,   148,   148,   148,   148,
     148,   149,   149,   149,   149,   149,   149,   149,   150,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   152,   153,   153,   153,   153,   153,
     153,   154,   155,   156,   157,   158,   159,   160,   160,   161,
     162,   162,   163,   163,   164,   164,   165,   166,   167,   168,
     168,   169,   169,   169,   169,   169,   170,   170,   171,   172,
     172,   173,   173,   174,   175,   175,   176,   176,   177,   178,
     179,   179,   180,   181,   181,   182,   182,   183,   184,   185,
     185,   186,   186,   186,   187,   187,   187,   188,   189,   190,
     190,   190,   190,   191,   192,   193,   194,   194,   195,   195,
     196,   197,   198,   198,   198,   199,   200,   201,   201,   202,
     202,   203,   204,   204,   205,   205,   205,   206,   206,   207
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
       3,     1,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     0,     1,     3,     1,     2,     3,     1,     1,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     3,     3,
       0,     7,     7,     5,     5,     3,     1,     1,     6,     2,
       0,     1,     0,     3,     2,     0,     2,     1,     6,     6,
       2,     0,     3,     2,     0,     2,     1,     4,     3,     2,
       0,     0,     2,     1,     3,     3,     1,     1,     3,     1,
       1,     1,     0,     1,     5,     1,     1,     0,     1,     0,
       1,     1,     4,     4,     2,     2,     4,     3,     0,     3,
       0,     2,     2,     4,     2,     2,     1,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   321,     1,   318,     0,   320,     0,
       0,   329,   328,     0,   322,   326,     0,     0,     0,     0,
      84,     0,    81,    82,    83,    85,    86,   316,   318,   325,
       0,     0,   324,     0,     0,     0,    95,    93,    87,    91,
       0,   103,    98,   100,   101,     0,     0,   112,   320,   317,
     328,   323,     0,   124,    45,     0,     0,     0,     0,     0,
       0,     0,    19,    21,    22,    23,    26,    24,    25,    20,
      28,    27,     6,     0,     0,    47,     0,     0,     0,     0,
      52,     2,     5,     7,    11,    16,    12,    13,    14,     0,
      50,    15,     0,    17,    18,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,   105,     0,     0,     0,   113,
       0,     0,     0,   116,   319,   327,     0,     0,   110,   241,
     122,    46,   123,    44,     0,    54,     0,    78,     0,     0,
       0,     0,     0,     0,     0,     6,   134,   135,   137,   136,
     217,     0,     0,     0,   215,   211,   212,   214,   216,   213,
     191,     2,     7,    11,    16,    12,    17,   161,   127,   131,
     132,     0,   133,   129,   194,   163,     0,     0,   192,     0,
     162,    43,     0,     0,    75,     0,    73,     0,     3,    48,
       0,     0,    72,     0,    53,   126,    93,    88,    94,    90,
      97,     0,     6,   104,   106,   103,    99,   119,   114,   117,
       0,   111,     0,   107,   253,     0,   241,   257,   241,     0,
     241,   255,     0,   251,     0,     6,   219,     0,     0,   240,
      97,     0,   220,   221,   235,   236,   237,     0,   238,   239,
     222,   223,   224,   225,   226,   227,   228,     0,   229,   230,
     266,   267,   231,   232,   233,   121,    15,     0,    79,     0,
      95,     0,    39,     0,     0,    37,     0,     0,     0,    29,
      80,     4,    44,   191,     0,     0,    31,     0,     3,     0,
     138,   128,   189,   174,     0,   164,   165,   166,   167,   168,
       0,   209,   196,   197,   201,     0,   206,   204,   202,   203,
     205,   207,   208,   210,     0,   198,   199,   200,   195,    74,
      76,     9,     0,    49,    51,    55,   125,    92,     0,    89,
     102,   118,   115,   108,   109,   252,   290,     0,   272,    97,
       0,   256,     0,     0,     0,    97,   305,     0,   299,   300,
     306,     0,   301,   254,   315,   250,   249,   241,     0,   247,
     248,     0,   245,   260,     0,   258,    56,    78,     0,     6,
      40,    41,    32,    34,    38,    35,    57,     0,     0,     0,
       0,   158,   130,     0,     0,     6,   148,   157,   152,     0,
       0,   150,   156,   184,   180,     0,     0,   173,   169,     0,
     190,    30,   193,     0,    10,    96,   293,     0,   290,     0,
       0,   269,     6,   271,     0,     0,     0,   265,     0,   314,
       0,   248,   298,   309,   234,   120,   246,   259,   243,    77,
      42,     0,    36,     0,    52,     0,    69,    58,     0,     0,
       0,   141,   218,     0,   147,     0,   182,   183,   178,   179,
     176,   174,   170,     0,     8,     0,     0,    97,   292,   296,
     289,   287,   260,   280,   275,   284,     0,     0,     0,     0,
       0,   303,   308,     0,    33,    60,     0,     0,     0,     0,
      70,    59,     0,     0,   146,   151,   157,   149,   156,   181,
     188,   177,     0,   173,   175,     0,     0,   288,   277,     0,
     275,     0,     0,   286,     0,   284,     0,     0,     0,   264,
     263,     0,   313,   312,   241,    63,     0,    61,     0,     0,
       0,     0,    71,   186,   187,   171,     0,   297,   295,   294,
     276,   274,   268,   260,   285,   283,   278,   260,     0,     0,
     310,   311,   304,    66,    64,     0,    62,     0,     0,   185,
       0,   273,   282,     0,   262,   261,    67,    65,     0,   172,
     175,    68
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   150,    81,   302,   178,    82,    83,    84,    85,    86,
     253,   254,   255,    87,    88,    53,    54,    89,    90,    91,
      92,    93,    94,   216,    21,    22,    97,    98,   217,   218,
      23,   107,   108,    43,    44,    55,   117,   118,    24,   110,
     111,   219,    25,    26,   157,   158,   159,   160,   161,   367,
     368,   369,   370,   371,   162,   163,   164,   275,   276,   277,
     376,   278,   279,   375,   165,   166,   190,   168,   294,   295,
     296,   297,   169,   170,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   341,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   318,   394,   480,   481,   482,
     241,   395,   396,   485,   486,   487,   242,   388,   389,   390,
     438,   439,   243,   327,   328,   329,   330,   331,   453,   521,
     522,   332,   244,     2,     8,    27,     3,     9,    30,    31,
      15
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -440
static const yytype_int16 yypact[] =
{
     107,   118,    41,   100,  -440,  -440,   125,    -8,   102,   124,
     131,  -440,    -4,   131,  -440,  -440,     8,    13,    19,    27,
    -440,   129,  -440,  -440,  -440,  -440,  -440,  -440,   125,  -440,
     137,   121,  -440,   -17,  3051,   147,  -440,   152,  -440,  2758,
    2854,   154,  -440,  -440,  -440,    20,  2806,  -440,   102,  -440,
      -4,  -440,   152,   123,  3886,   140,   140,   143,  3886,  3933,
     153,   155,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,    -6,   189,  3886,  -440,  2352,  3886,  3886,  3980,
    3886,   160,  -440,  -440,  -440,  -440,  -440,  -440,  -440,   111,
     162,  -440,   165,  -440,  -440,  3104,   140,   172,   164,    68,
     185,  2584,  2902,  2410,  3886,  3886,  3886,   181,   171,  -440,
     188,   174,  2584,  2950,  -440,  -440,   580,    42,  -440,  1910,
    -440,  3886,   123,  -440,  3886,  3886,  4027,  3886,  3886,   -11,
    3157,   196,  3886,   977,   140,   417,  -440,  -440,  -440,  -440,
     189,  2584,  2178,  3886,  3886,  -440,  -440,  -440,  -440,  -440,
    4074,    83,  4097,   175,   178,   179,   180,  -440,  -440,  -440,
    -440,   182,  -440,   160,    95,  -440,   184,   875,  -440,  2584,
    -440,  3886,  3886,  3886,  3886,  3886,   165,  3886,  -440,  -440,
     186,  3369,  -440,  3886,  3886,   123,   152,  -440,  -440,   190,
    4137,  2584,   630,  3886,  3886,   154,  -440,   152,  -440,   190,
    2584,   165,    35,  -440,   207,   187,  2468,  -440,  2642,   208,
    1822,   211,  2584,  2584,  2584,  1027,  -440,    39,    53,  -440,
     794,   206,  -440,  -440,  -440,  -440,  -440,   198,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,   191,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,   192,  3933,  3886,  1374,
     -10,   217,   160,   194,   212,   218,   580,  3416,   132,  -440,
    3886,  -440,   123,  3463,   822,   199,  3886,  2584,   200,  2236,
    -440,  -440,  2584,  2584,    45,  -440,  -440,  -440,  -440,  -440,
     224,  -440,  -440,  -440,  -440,  3886,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  2584,  -440,  -440,  -440,  -440,   165,
    3886,  3886,    76,  -440,  -440,  3886,  -440,  -440,  2584,   190,
    -440,  -440,   190,  -440,  -440,  -440,    11,   222,  2700,  1191,
     223,  -440,  2584,    61,    54,  1588,  -440,   123,  -440,  -440,
    -440,   227,  -440,  -440,  4137,   190,  4137,  2058,  2584,  -440,
    -440,  2584,  -440,  1984,  2584,  -440,  -440,  3886,  3886,   209,
     160,  -440,  -440,   210,  -440,  3510,  -440,  3210,  3557,  3604,
     219,  -440,  -440,  3886,  1219,  4124,  -440,   214,  -440,    67,
     216,  -440,  1272,  1758,     2,   220,   233,  1417,  -440,  3886,
    -440,  3886,  4137,  3886,  -440,  4137,  -440,  2642,    11,   225,
     234,  -440,  1636,  4137,   231,   238,  2998,   271,  2584,  4137,
    2120,   275,  -440,  2584,  -440,   190,   190,  -440,  4137,  3886,
    -440,   -11,  -440,   243,   977,   146,  -440,  -440,  3263,  3651,
    3698,  3886,  -440,  2294,  -440,  2526,   246,  2584,   248,  2584,
    -440,  2584,  -440,  3745,  3886,    73,    65,   127,  -440,  -440,
    -440,  -440,  1984,  -440,    74,   128,   106,     1,   245,  2584,
    2584,  4137,  -440,   250,  -440,  -440,   255,   251,   257,   149,
    -440,  -440,  3316,  3792,  -440,  -440,  -440,  -440,  4137,  -440,
       4,  -440,   262,   482,  -440,  2584,  2584,  -440,  -440,  2584,
      74,   263,   266,  -440,  3886,   128,   264,   283,    50,  -440,
    -440,   322,  4137,  4137,  2642,  -440,   290,  -440,   291,   281,
     294,   151,  -440,   286,  2584,  -440,  2584,  4137,  -440,  -440,
     190,  -440,  -440,  1984,   288,  -440,  -440,  1984,  3886,     1,
    -440,  -440,  -440,  -440,  -440,   295,  -440,   302,   293,  -440,
    1679,  -440,  -440,  3839,  -440,  -440,  -440,  -440,   308,  -440,
     296,  -440
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -440,   -34,   312,  -129,  -134,  -440,   457,   709,   854,  1106,
     -55,  -440,  -440,  -440,  -440,   -29,   341,  -127,   193,   235,
     159,  1251,  -440,    25,  -440,  -440,   343,   176,   -15,   -36,
    -440,   345,   166,  -440,  -440,   325,  -440,   167,  -440,   347,
     170,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -160,
     -53,  -440,  -440,   -57,  -440,  -440,   -25,  -440,  -440,  -440,
     -58,  -440,  -440,  -440,  -440,  -440,  1397,   213,  -440,  -440,
    -440,  -440,  -440,  -440,    40,  -440,  -199,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,  -440,
     -37,  -329,  -439,  -440,  -440,  -440,  -440,  -440,  -104,  -440,
    -440,  -440,  -440,  -440,  -107,  -440,  -440,  -440,    -9,  -440,
    -440,  -323,  -440,  -440,   -22,  -440,  -440,  -440,  -440,  -440,
    -440,  -440,  -440,  -440,   355,   342,  -440,  -440,   382,   344,
     148
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -304
static const yytype_int16 yytable[] =
{
      80,   270,    39,   258,    46,   102,   105,   317,   490,   320,
     208,   326,   113,   -95,   407,   386,   120,   268,   387,    95,
     121,   428,    39,   503,   125,   127,   122,   123,   250,   271,
      46,    10,    -6,    20,    11,    10,    -6,   116,    11,    34,
     133,     5,    52,   171,   172,   174,   175,    33,    12,    -6,
     130,   131,    36,    13,   251,   131,  -291,    13,    40,    36,
     429,   184,   504,   119,    34,   189,    36,   185,   175,    37,
     193,   175,   194,    20,    36,    41,   199,   109,   478,   175,
     535,   479,   175,    45,   378,   245,   338,   175,   116,   378,
     175,   175,   248,   175,   249,   313,    80,   100,   260,   175,
     202,   379,   203,   339,   339,   262,   518,   263,   400,   266,
     171,   308,   308,   477,   256,    95,   175,    16,   351,   100,
     475,   340,   401,   308,   130,   423,    17,    18,    19,   131,
     424,   100,   483,   476,   383,   484,   384,   175,   175,   300,
     175,   175,   177,   301,     1,  -144,     6,    80,   306,   305,
     175,   272,   508,   509,   273,   309,   274,     4,    29,   175,
     175,    32,   272,     7,   312,   273,    95,   488,   179,   180,
      28,    39,  -297,    11,   324,    48,   281,   335,    51,   282,
     283,   284,    46,    50,   531,   119,    96,   116,   532,   359,
     360,    36,   286,    40,   287,   323,    34,   288,   289,   290,
     291,   292,   293,   456,   457,   124,   498,   499,   527,   528,
     132,   182,   128,   347,   175,   175,   410,   129,   186,   177,
     181,   187,   355,   358,   188,   361,   175,   195,   196,   175,
     415,   198,   175,   263,   197,   259,   374,  -140,   373,   176,
    -142,  -139,  -143,   303,   269,   280,   315,   321,   308,   316,
     333,   381,   343,   344,   345,   346,   349,   352,   353,   363,
     354,   176,  -145,   380,   176,   466,   175,   175,   391,   398,
     131,   175,   176,   403,   411,   201,   420,   430,   431,   442,
     176,   447,   397,  -155,   176,   425,   176,   450,   441,   455,
     402,   459,   176,   444,   281,   520,   494,   282,   283,   284,
     445,   495,   405,   497,   469,   406,   471,   119,   496,   176,
     286,   513,   287,   175,   409,   288,   289,   290,   291,   292,
     293,   175,   505,   414,   175,   419,   512,   516,   517,   421,
     176,   299,   519,   176,   176,   501,   523,   524,   525,   175,
     526,   536,    95,   176,   529,   433,   383,   175,   537,   434,
     538,   436,   176,   176,   541,   514,   454,    35,  -279,   246,
      38,   310,   307,    42,   405,   106,    47,   311,   467,   314,
     465,   446,   435,   472,   304,   175,   511,   404,   515,   440,
     175,   452,   298,    49,   414,   175,   463,   175,   151,    14,
     114,   470,     0,     0,   115,     0,   256,     0,     0,   175,
     175,     0,     0,    95,     0,     0,     0,   176,   176,     0,
     489,   491,     0,   151,     0,   151,     0,     0,     0,   176,
       0,     0,   176,     0,   151,   176,     0,     0,   414,   175,
       0,   151,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,   510,     0,     0,     0,    95,     0,     0,
     301,     0,     0,   151,   151,     0,     0,     0,     0,   299,
     176,     0,  -159,  -159,   176,  -159,  -159,  -159,     0,  -159,
    -159,  -159,     0,   130,     0,     0,     0,  -159,   131,     0,
    -159,   151,   534,     0,   533,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,   151,     0,     0,   176,     0,     0,     0,
       0,     0,   151,     0,   176,     0,     0,   176,   151,     0,
     151,     0,   151,     0,   151,   151,   151,   506,     0,     0,
       0,   281,   176,   152,   282,   283,   284,     0,     0,     0,
     176,     0,     0,     0,     0,     0,     0,   286,     0,   287,
       0,     0,   288,   289,   290,   291,   292,   293,   152,     0,
     152,     0,     0,   350,     0,     0,     0,     0,   176,   152,
       0,     0,     0,   176,     0,     0,   152,     0,   176,   151,
     176,   151,     0,     0,   151,   151,     0,     0,     0,     0,
       0,     0,   176,   176,     0,    56,    57,     0,   152,   152,
       0,    59,    60,    61,     0,     0,   151,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    99,
     151,     0,   176,     0,     0,     0,   152,     0,     0,     0,
     151,     0,     0,     0,   151,    73,    74,     0,   100,    76,
       0,     0,     0,     0,     0,    77,    78,    79,   152,   151,
     151,     0,     0,   151,     0,   151,   151,   152,     0,     0,
       0,     0,     0,   152,     0,   152,     0,   152,     0,   152,
     152,   152,     0,     0,     0,  -159,  -159,   -95,  -159,  -159,
    -159,     0,  -159,  -159,  -159,     0,   130,     0,   -95,     0,
    -159,   131,   176,     0,     0,     0,     0,     0,  -159,   151,
    -159,  -159,  -159,  -159,  -159,  -159,     0,     0,   151,     0,
     151,     0,   151,     0,     0,   151,     0,     0,     0,     0,
       0,     0,     0,   252,   152,     0,   152,     0,     0,   152,
     152,     0,     0,     0,     0,   151,     0,   151,     0,   151,
       0,   151,     0,   151,     0,     0,     0,     0,     0,     0,
       0,   152,     0,     0,   151,     0,     0,     0,     0,     0,
       0,   151,   151,     0,     0,   152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,     0,     0,     0,   152,
       0,     0,     0,     0,     0,   153,     0,   151,   151,     0,
       0,   151,     0,     0,   152,   152,     0,     0,   152,     0,
     152,   152,     0,     0,     0,     0,   151,     0,     0,     0,
     153,     0,   153,     0,     0,     0,   151,     0,   151,     0,
       0,   153,     0,     0,     0,   151,     0,     0,   153,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -242,     0,   342,   281,   152,     0,   282,   283,   284,  -244,
     153,   153,     0,   152,     0,   152,  -242,   152,     0,   286,
     152,   287,     0,     0,   288,   289,   290,   291,   292,   293,
       0,   281,     0,     0,   282,   283,   284,     0,   153,   362,
     152,     0,   152,     0,   152,     0,   152,   286,   152,   287,
       0,     0,   288,   289,   290,   291,   292,   293,     0,   152,
     153,     0,     0,     0,     0,     0,   152,   152,     0,   153,
       0,     0,     0,     0,     0,   153,     0,   153,     0,   153,
       0,   153,   153,   153,   281,     0,     0,   282,   283,   284,
     154,     0,   152,   152,     0,   285,   152,     0,     0,     0,
     286,     0,   287,     0,     0,   288,   289,   290,   291,   292,
     293,   152,     0,     0,     0,   154,     0,   154,     0,     0,
       0,   152,     0,   152,     0,     0,   154,     0,     0,     0,
     152,     0,     0,   154,   152,     0,   153,     0,   153,     0,
       0,   153,   153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,     0,   154,   154,     0,    59,    60,
      61,     0,     0,   153,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    99,   153,     0,     0,
       0,     0,     0,   154,     0,     0,     0,   153,     0,     0,
       0,   153,    73,    74,   261,     0,    76,     0,     0,     0,
       0,     0,    77,    78,    79,   154,   153,   153,     0,     0,
     153,     0,   153,   153,   154,     0,     0,     0,     0,     0,
     154,     0,   154,     0,   154,     0,   154,   154,   154,     0,
       0,     0,   337,  -159,   -95,  -159,  -159,  -159,     0,  -159,
    -159,  -159,     0,   130,     0,   -95,     0,     0,   131,     0,
       0,     0,     0,     0,     0,  -159,   153,  -159,  -159,  -159,
    -159,  -159,  -159,     0,     0,   153,     0,   153,     0,   153,
       0,     0,   153,     0,     0,     0,     0,     0,     0,     0,
       0,   154,     0,   154,     0,     0,   154,   154,     0,     0,
       0,     0,   153,     0,   153,     0,   153,     0,   153,     0,
     153,     0,     0,     0,     0,     0,     0,     0,   154,     0,
       0,   153,     0,     0,     0,     0,     0,     0,   153,   153,
       0,     0,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   154,     0,     0,     0,   154,     0,     0,     0,
       0,     0,   155,     0,   153,   153,     0,     0,   153,     0,
       0,   154,   154,     0,     0,   154,     0,   154,   154,     0,
       0,     0,     0,   153,     0,     0,     0,   155,     0,   155,
       0,     0,     0,   153,     0,   153,     0,     0,   155,     0,
       0,     0,   153,     0,     0,   155,   153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -242,     0,   342,
     281,   154,     0,   282,   283,   284,  -244,   155,   155,     0,
     154,     0,   154,   119,   154,     0,   286,   154,   287,     0,
       0,   288,   289,   290,   291,   292,   293,     0,   281,     0,
       0,   282,   283,   284,     0,   155,   422,   154,     0,   154,
       0,   154,     0,   154,   286,   154,   287,     0,     0,   288,
     289,   290,   291,   292,   293,     0,   154,   155,     0,     0,
       0,     0,     0,   154,   154,     0,   155,     0,     0,     0,
       0,     0,   155,     0,   155,     0,   155,     0,   155,   155,
     155,   281,     0,     0,   282,   283,   284,   156,     0,   154,
     154,     0,     0,   154,     0,     0,     0,   286,     0,   287,
       0,  -154,   288,   289,   290,   291,   292,   293,   154,     0,
       0,     0,   156,     0,   156,     0,     0,     0,   154,     0,
     154,     0,     0,   156,     0,     0,     0,   154,     0,     0,
     156,   154,     0,   155,     0,   155,     0,     0,   155,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,     0,   156,   156,     0,    59,    60,    61,     0,     0,
     155,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    99,   155,     0,     0,     0,     0,     0,
     156,     0,     0,     0,   155,     0,     0,     0,   155,    73,
      74,     0,     0,    76,   348,     0,     0,     0,     0,    77,
      78,    79,   156,   155,   155,     0,     0,   155,     0,   155,
     155,   156,     0,     0,     0,     0,     0,   156,     0,   156,
       0,   156,     0,   156,   156,   156,   281,     0,     0,   282,
     283,   284,     0,   167,     0,     0,     0,   432,     0,     0,
       0,     0,   286,     0,   287,     0,     0,   288,   289,   290,
     291,   292,   293,   155,     0,     0,     0,     0,     0,     0,
     167,     0,   155,     0,   155,     0,   155,     0,     0,   155,
       0,     0,     0,     0,     0,     0,   220,     0,   156,     0,
     156,     0,     0,   156,   156,     0,     0,     0,     0,   155,
       0,   155,     0,   155,     0,   155,     0,   155,   264,   167,
       0,     0,     0,     0,     0,   156,     0,     0,   155,     0,
       0,     0,     0,     0,     0,   155,   155,     0,     0,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
       0,     0,     0,   156,     0,     0,     0,     0,     0,     0,
       0,   155,   155,     0,     0,   155,     0,     0,   156,   156,
       0,     0,   156,     0,   156,   156,     0,     0,     0,     0,
     155,     0,     0,   220,     0,   319,     0,   325,     0,   334,
     155,   336,   155,     0,     0,     0,     0,     0,     0,   155,
       0,     0,     0,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -242,     0,   342,   281,   156,     0,
     282,   283,   284,  -244,     0,     0,     0,   156,     0,   156,
    -303,   156,     0,   286,   156,   287,     0,     0,   288,   289,
     290,   291,   292,   293,   364,     0,   372,     0,     0,     0,
     377,     0,     0,     0,   156,     0,   156,     0,   156,     0,
     156,     0,   156,   443,     0,  -159,     0,     0,  -159,  -159,
    -159,   382,   130,   156,     0,     0,     0,   131,     0,     0,
     156,   156,     0,     0,     0,   385,  -159,  -159,  -159,  -159,
    -159,  -159,     0,     0,     0,   393,     0,     0,     0,   399,
       0,     0,     0,     0,     0,     0,   156,   156,   281,     0,
     156,   282,   283,   284,   220,     0,     0,     0,     0,   539,
     220,   408,     0,     0,   286,   156,   287,     0,     0,   288,
     289,   290,   291,   292,   293,   156,     0,   156,     0,     0,
       0,     0,     0,     0,   156,     0,     0,     0,   156,     0,
       0,     0,     0,    56,    57,     0,     0,   426,     0,    59,
      60,    61,     0,     0,   437,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,   448,     0,    99,     0,     0,
     451,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,   267,     0,   427,    76,     0,  -191,
     372,     0,   468,    77,    78,    79,   385,     0,   473,     0,
       0,     0,     0,     0,   322,     0,     0,   134,    57,   220,
       0,     0,     0,    59,    60,    61,   492,   493,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,   192,   136,   137,   138,   139,     0,     0,     0,     0,
       0,     0,   507,   507,     0,     0,     0,   140,   141,     0,
       0,   142,     0,     0,  -302,     0,     0,   144,    78,    79,
       0,   220,   145,   146,   147,     0,     0,   148,   149,     0,
       0,   385,     0,   530,     0,     0,     0,     0,     0,     0,
     220,     0,     0,   204,   220,   205,   206,     0,   207,   208,
       0,   209,     0,   210,   211,   134,    57,   212,   213,     0,
     214,    59,    60,    61,    17,    18,    19,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,   215,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,   141,     0,     0,   142,
       0,     0,   119,  -260,     0,   144,    78,    79,     0,     0,
     145,   146,   147,     0,     0,   148,   149,   204,     0,   205,
     206,     0,   207,   208,     0,   209,     0,   210,   211,   134,
      57,   212,   213,     0,   214,    59,    60,    61,    17,    18,
      19,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,   215,   136,   137,   138,   139,     0,     0,
    -241,     0,     0,     0,     0,     0,     0,     0,     0,   140,
     141,     0,     0,   142,     0,     0,   119,     0,     0,   144,
      78,    79,     0,     0,   145,   146,   147,     0,     0,   148,
     149,   204,     0,   205,   206,     0,   207,   208,     0,   209,
       0,   210,   211,   134,    57,   212,   213,     0,   214,    59,
      60,    61,    17,    18,    19,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,   215,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   140,   141,     0,     0,   142,     0,     0,
     119,     0,     0,   144,    78,    79,     0,     0,   145,   146,
     147,     0,   449,   148,   149,   134,    57,     0,     0,     0,
       0,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,   135,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,   141,     0,     0,   142,
       0,     0,     0,     0,     0,   144,    78,    79,     0,     0,
     145,   146,   147,   134,    57,   148,   149,   265,     0,    59,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,   135,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   140,   141,     0,     0,   142,   143,     0,
       0,     0,     0,   144,    78,    79,     0,     0,   145,   146,
     147,   134,    57,   148,   149,     0,     0,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,   365,   136,   137,   138,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   141,     0,     0,   142,     0,     0,   269,   366,
       0,   144,    78,    79,     0,     0,   145,   146,   147,   134,
      57,   148,   149,     0,     0,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,   365,   136,   137,   138,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   140,
     141,     0,     0,   142,     0,     0,   269,   464,     0,   144,
      78,    79,     0,     0,   145,   146,   147,   134,    57,   148,
     149,     0,     0,    59,    60,    61,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,   135,   136,   137,   138,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   140,   141,     0,
       0,   142,   143,     0,     0,     0,     0,   144,    78,    79,
       0,     0,   145,   146,   147,   134,    57,   148,   149,     0,
       0,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,   192,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,   141,     0,     0,   142,
     143,     0,     0,     0,     0,   144,    78,    79,     0,     0,
     145,   146,   147,   134,    57,   148,   149,     0,     0,    59,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,   192,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   140,   141,     0,     0,   142,     0,     0,
    -270,     0,     0,   144,    78,    79,     0,     0,   145,   146,
     147,   134,    57,   148,   149,     0,     0,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,   135,   136,   137,   138,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   141,     0,     0,   142,     0,     0,   269,     0,
       0,   144,    78,    79,     0,     0,   145,   146,   147,   134,
      57,   148,   149,     0,     0,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,   135,   136,   137,   138,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   140,
     141,     0,     0,   142,     0,     0,     0,     0,     0,   144,
      78,    79,     0,     0,   145,   146,   147,   134,    57,   148,
     149,     0,     0,    59,    60,    61,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,   192,   136,   137,   138,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   140,   141,     0,
       0,   142,     0,     0,     0,     0,     0,   144,    78,    79,
       0,     0,   145,   146,   147,   134,    57,   148,   149,     0,
       0,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,   392,
     136,   137,   138,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,   141,     0,     0,   142,
       0,     0,     0,     0,     0,   144,    78,    79,     0,     0,
     145,   146,   147,    56,    57,   148,   149,     0,     0,    59,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,   100,    76,     0,     0,
       0,    56,    57,    77,    78,    79,   101,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,   100,    76,     0,     0,     0,    56,
      57,    77,    78,    79,   112,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,     0,   103,     0,     0,     0,    56,    57,    77,
      78,    79,   104,    59,    60,    61,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    76,     0,     0,     0,    56,    57,    77,    78,    79,
     191,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    76,
       0,     0,     0,   134,    57,    77,    78,    79,   200,    59,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,   135,   136,   137,
     138,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,   141,     0,     0,   142,     0,     0,
       0,     0,     0,    77,    78,    79,    56,    57,     0,     0,
      58,     0,    59,    60,    61,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,     0,
      76,     0,     0,     0,     0,     0,    77,    78,    79,    56,
      57,     0,     0,   183,     0,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,   100,    76,     0,     0,     0,     0,     0,    77,
      78,    79,    56,    57,     0,     0,    58,     0,    59,    60,
      61,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,   257,     0,    76,     0,     0,     0,
       0,     0,    77,    78,    79,    56,    57,     0,     0,    58,
       0,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,   413,     0,    76,
       0,     0,     0,     0,     0,    77,    78,    79,    56,    57,
       0,     0,    58,     0,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
     458,     0,    76,     0,     0,     0,     0,     0,    77,    78,
      79,    56,    57,     0,     0,    58,     0,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,   500,     0,    76,     0,     0,     0,     0,
       0,    77,    78,    79,    56,    57,     0,     0,    58,     0,
      59,    60,    61,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    76,     0,
       0,    56,    57,     0,    77,    78,    79,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    99,     0,     0,     0,     0,
       0,     0,   356,     0,     0,     0,     0,     0,     0,     0,
       0,    73,   357,     0,     0,    76,     0,     0,    56,    57,
       0,    77,    78,    79,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,   267,
     261,     0,    76,     0,     0,    56,    57,     0,    77,    78,
      79,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    99,
       0,     0,   412,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    76,
       0,     0,    56,    57,     0,    77,    78,    79,    59,    60,
      61,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    99,     0,     0,     0,
       0,     0,     0,   416,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,    76,     0,     0,    56,
      57,     0,    77,    78,    79,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    99,     0,     0,     0,     0,     0,     0,
     417,     0,     0,     0,     0,     0,     0,     0,     0,    73,
     418,     0,     0,    76,     0,     0,    56,    57,     0,    77,
      78,    79,    59,    60,    61,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,     0,
      99,     0,     0,     0,     0,     0,     0,   460,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
      76,     0,     0,    56,    57,     0,    77,    78,    79,    59,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,    99,     0,     0,
       0,     0,     0,     0,   461,     0,     0,     0,     0,     0,
       0,     0,     0,    73,   462,     0,     0,    76,     0,     0,
      56,    57,     0,    77,    78,    79,    59,    60,    61,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,   474,     0,    76,     0,     0,    56,    57,     0,
      77,    78,    79,    59,    60,    61,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,    99,     0,     0,     0,     0,     0,     0,   502,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,    76,     0,     0,    56,    57,     0,    77,    78,    79,
      59,    60,    61,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,   540,     0,    76,     0,
       0,    56,    57,     0,    77,    78,    79,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    76,     0,     0,    56,    57,
       0,    77,    78,    79,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,    74,
       0,     0,    76,     0,     0,    56,    57,     0,    77,    78,
      79,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,     0,     0,    76,
       0,     0,    56,    57,     0,    77,   173,    79,   247,    60,
      61,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,    76,     0,     0,    56,
      57,     0,    77,    78,    79,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
     267,     0,     0,    76,     0,     0,     0,     0,     0,    77,
      78,    79,  -160,  -160,     0,  -160,  -160,  -160,     0,  -160,
    -160,  -160,     0,     0,     0,     0,     0,  -160,     0,     0,
    -160,     0,     0,     0,     0,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -159,     0,     0,  -159,  -159,  -159,     0,
     130,     0,  -159,     0,     0,   131,   281,  -159,     0,   282,
     283,   284,     0,  -153,  -159,  -159,  -159,  -159,  -159,  -159,
       0,     0,   286,     0,   287,     0,     0,   288,   289,   290,
     291,   292,   293
};

static const yytype_int16 yycheck[] =
{
      34,   161,    17,   130,    19,    39,    40,   206,   447,   208,
       9,   210,    46,    19,   343,     4,    53,   151,     7,    34,
      54,    19,    37,    19,    58,    59,    55,    56,    39,   163,
      45,    39,    42,     8,    42,    39,    46,    52,    42,    56,
      74,     0,    59,    77,    78,    79,    80,    39,    56,    59,
      56,    61,    39,    61,    65,    61,    45,    61,    39,    39,
      58,    95,    58,    62,    56,   101,    39,    96,   102,    56,
     104,   105,   106,    48,    39,    56,   112,    57,     4,   113,
     519,     7,   116,    56,    39,   122,    47,   121,   103,    39,
     124,   125,   126,   127,   128,    60,   130,    58,   132,   133,
      58,    56,    60,    50,    50,   134,    56,   141,    47,   143,
     144,    58,    58,   442,   129,   130,   150,    15,   252,    58,
      47,    68,    68,    58,    56,    58,    24,    25,    26,    61,
      63,    58,     4,    68,    58,     7,    60,   171,   172,   173,
     174,   175,    59,   177,    37,    62,    46,   181,   185,   183,
     184,    56,   475,   476,    59,   191,    61,    39,    10,   193,
     194,    13,    56,    38,   200,    59,   181,    61,    57,    58,
      46,   186,    45,    42,   210,    46,    49,   213,    57,    52,
      53,    54,   197,    46,   513,    62,    39,   202,   517,    57,
      58,    39,    65,    39,    67,   210,    56,    70,    71,    72,
      73,    74,    75,    57,    58,    62,    57,    58,    57,    58,
      21,    46,    59,   247,   248,   249,   350,    62,    46,    59,
      58,    57,   256,   257,    39,   262,   260,    46,    57,   263,
     357,    57,   266,   267,    46,    39,   272,    62,   272,    80,
      62,    62,    62,    57,    62,    61,    39,    39,    58,    62,
      39,   285,    46,    55,    63,    63,    39,    63,    46,    60,
      42,   102,    62,    39,   105,   425,   300,   301,    46,    46,
      61,   305,   113,    46,    64,   116,    57,    57,    45,    45,
     121,    10,   319,    69,   125,    69,   127,    12,    63,    46,
     327,   418,   133,    62,    49,   494,    46,    52,    53,    54,
      62,    46,   338,    46,    58,   341,    58,    62,    57,   150,
      65,    45,    67,   347,   348,    70,    71,    72,    73,    74,
      75,   355,    60,   357,   358,   359,    63,    63,    45,   363,
     171,   172,    10,   174,   175,   462,    46,    46,    57,   373,
      46,    46,   357,   184,    58,   379,    58,   381,    46,   383,
      57,   387,   193,   194,    46,   484,   411,    16,    62,   124,
      17,   195,   186,    18,   400,    40,    19,   197,   425,   202,
     423,   396,   387,   431,   181,   409,   480,   337,   485,   388,
     414,   403,   169,    28,   418,   419,   420,   421,    76,     7,
      48,   427,    -1,    -1,    50,    -1,   411,    -1,    -1,   433,
     434,    -1,    -1,   418,    -1,    -1,    -1,   248,   249,    -1,
     447,   448,    -1,   101,    -1,   103,    -1,    -1,    -1,   260,
      -1,    -1,   263,    -1,   112,   266,    -1,    -1,   462,   463,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,    -1,   479,    -1,    -1,    -1,   462,    -1,    -1,
     484,    -1,    -1,   141,   142,    -1,    -1,    -1,    -1,   300,
     301,    -1,    45,    46,   305,    48,    49,    50,    -1,    52,
      53,    54,    -1,    56,    -1,    -1,    -1,    60,    61,    -1,
      63,   169,   519,    -1,   518,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,   533,
      -1,    -1,    -1,   191,    -1,    -1,   347,    -1,    -1,    -1,
      -1,    -1,   200,    -1,   355,    -1,    -1,   358,   206,    -1,
     208,    -1,   210,    -1,   212,   213,   214,    45,    -1,    -1,
      -1,    49,   373,    76,    52,    53,    54,    -1,    -1,    -1,
     381,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      -1,    -1,    70,    71,    72,    73,    74,    75,   101,    -1,
     103,    -1,    -1,   251,    -1,    -1,    -1,    -1,   409,   112,
      -1,    -1,    -1,   414,    -1,    -1,   119,    -1,   419,   267,
     421,   269,    -1,    -1,   272,   273,    -1,    -1,    -1,    -1,
      -1,    -1,   433,   434,    -1,    15,    16,    -1,   141,   142,
      -1,    21,    22,    23,    -1,    -1,   294,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
     308,    -1,   463,    -1,    -1,    -1,   169,    -1,    -1,    -1,
     318,    -1,    -1,    -1,   322,    55,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,   191,   337,
     338,    -1,    -1,   341,    -1,   343,   344,   200,    -1,    -1,
      -1,    -1,    -1,   206,    -1,   208,    -1,   210,    -1,   212,
     213,   214,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    -1,    56,    -1,    58,    -1,
      60,    61,   533,    -1,    -1,    -1,    -1,    -1,    68,   387,
      70,    71,    72,    73,    74,    75,    -1,    -1,   396,    -1,
     398,    -1,   400,    -1,    -1,   403,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   411,   267,    -1,   269,    -1,    -1,   272,
     273,    -1,    -1,    -1,    -1,   423,    -1,   425,    -1,   427,
      -1,   429,    -1,   431,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   294,    -1,    -1,   442,    -1,    -1,    -1,    -1,    -1,
      -1,   449,   450,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   318,    -1,    -1,    -1,   322,
      -1,    -1,    -1,    -1,    -1,    76,    -1,   475,   476,    -1,
      -1,   479,    -1,    -1,   337,   338,    -1,    -1,   341,    -1,
     343,   344,    -1,    -1,    -1,    -1,   494,    -1,    -1,    -1,
     101,    -1,   103,    -1,    -1,    -1,   504,    -1,   506,    -1,
      -1,   112,    -1,    -1,    -1,   513,    -1,    -1,   119,   517,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    48,    49,   387,    -1,    52,    53,    54,    55,
     141,   142,    -1,   396,    -1,   398,    62,   400,    -1,    65,
     403,    67,    -1,    -1,    70,    71,    72,    73,    74,    75,
      -1,    49,    -1,    -1,    52,    53,    54,    -1,   169,    57,
     423,    -1,   425,    -1,   427,    -1,   429,    65,   431,    67,
      -1,    -1,    70,    71,    72,    73,    74,    75,    -1,   442,
     191,    -1,    -1,    -1,    -1,    -1,   449,   450,    -1,   200,
      -1,    -1,    -1,    -1,    -1,   206,    -1,   208,    -1,   210,
      -1,   212,   213,   214,    49,    -1,    -1,    52,    53,    54,
      76,    -1,   475,   476,    -1,    60,   479,    -1,    -1,    -1,
      65,    -1,    67,    -1,    -1,    70,    71,    72,    73,    74,
      75,   494,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,
      -1,   504,    -1,   506,    -1,    -1,   112,    -1,    -1,    -1,
     513,    -1,    -1,   119,   517,    -1,   267,    -1,   269,    -1,
      -1,   272,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    -1,   141,   142,    -1,    21,    22,
      23,    -1,    -1,   294,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,   308,    -1,    -1,
      -1,    -1,    -1,   169,    -1,    -1,    -1,   318,    -1,    -1,
      -1,   322,    55,    56,    57,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,   191,   337,   338,    -1,    -1,
     341,    -1,   343,   344,   200,    -1,    -1,    -1,    -1,    -1,
     206,    -1,   208,    -1,   210,    -1,   212,   213,   214,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,    -1,    56,    -1,    58,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,   387,    70,    71,    72,
      73,    74,    75,    -1,    -1,   396,    -1,   398,    -1,   400,
      -1,    -1,   403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   267,    -1,   269,    -1,    -1,   272,   273,    -1,    -1,
      -1,    -1,   423,    -1,   425,    -1,   427,    -1,   429,    -1,
     431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,    -1,
      -1,   442,    -1,    -1,    -1,    -1,    -1,    -1,   449,   450,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   318,    -1,    -1,    -1,   322,    -1,    -1,    -1,
      -1,    -1,    76,    -1,   475,   476,    -1,    -1,   479,    -1,
      -1,   337,   338,    -1,    -1,   341,    -1,   343,   344,    -1,
      -1,    -1,    -1,   494,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,   504,    -1,   506,    -1,    -1,   112,    -1,
      -1,    -1,   513,    -1,    -1,   119,   517,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    48,
      49,   387,    -1,    52,    53,    54,    55,   141,   142,    -1,
     396,    -1,   398,    62,   400,    -1,    65,   403,    67,    -1,
      -1,    70,    71,    72,    73,    74,    75,    -1,    49,    -1,
      -1,    52,    53,    54,    -1,   169,    57,   423,    -1,   425,
      -1,   427,    -1,   429,    65,   431,    67,    -1,    -1,    70,
      71,    72,    73,    74,    75,    -1,   442,   191,    -1,    -1,
      -1,    -1,    -1,   449,   450,    -1,   200,    -1,    -1,    -1,
      -1,    -1,   206,    -1,   208,    -1,   210,    -1,   212,   213,
     214,    49,    -1,    -1,    52,    53,    54,    76,    -1,   475,
     476,    -1,    -1,   479,    -1,    -1,    -1,    65,    -1,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,   494,    -1,
      -1,    -1,   101,    -1,   103,    -1,    -1,    -1,   504,    -1,
     506,    -1,    -1,   112,    -1,    -1,    -1,   513,    -1,    -1,
     119,   517,    -1,   267,    -1,   269,    -1,    -1,   272,   273,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,   141,   142,    -1,    21,    22,    23,    -1,    -1,
     294,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,   308,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,    -1,   318,    -1,    -1,    -1,   322,    55,
      56,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,   191,   337,   338,    -1,    -1,   341,    -1,   343,
     344,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,   208,
      -1,   210,    -1,   212,   213,   214,    49,    -1,    -1,    52,
      53,    54,    -1,    76,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    65,    -1,    67,    -1,    -1,    70,    71,    72,
      73,    74,    75,   387,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,   396,    -1,   398,    -1,   400,    -1,    -1,   403,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   267,    -1,
     269,    -1,    -1,   272,   273,    -1,    -1,    -1,    -1,   423,
      -1,   425,    -1,   427,    -1,   429,    -1,   431,   141,   142,
      -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,   442,    -1,
      -1,    -1,    -1,    -1,    -1,   449,   450,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   318,
      -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   475,   476,    -1,    -1,   479,    -1,    -1,   337,   338,
      -1,    -1,   341,    -1,   343,   344,    -1,    -1,    -1,    -1,
     494,    -1,    -1,   206,    -1,   208,    -1,   210,    -1,   212,
     504,   214,   506,    -1,    -1,    -1,    -1,    -1,    -1,   513,
      -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    48,    49,   387,    -1,
      52,    53,    54,    55,    -1,    -1,    -1,   396,    -1,   398,
      62,   400,    -1,    65,   403,    67,    -1,    -1,    70,    71,
      72,    73,    74,    75,   267,    -1,   269,    -1,    -1,    -1,
     273,    -1,    -1,    -1,   423,    -1,   425,    -1,   427,    -1,
     429,    -1,   431,    47,    -1,    49,    -1,    -1,    52,    53,
      54,   294,    56,   442,    -1,    -1,    -1,    61,    -1,    -1,
     449,   450,    -1,    -1,    -1,   308,    70,    71,    72,    73,
      74,    75,    -1,    -1,    -1,   318,    -1,    -1,    -1,   322,
      -1,    -1,    -1,    -1,    -1,    -1,   475,   476,    49,    -1,
     479,    52,    53,    54,   337,    -1,    -1,    -1,    -1,    60,
     343,   344,    -1,    -1,    65,   494,    67,    -1,    -1,    70,
      71,    72,    73,    74,    75,   504,    -1,   506,    -1,    -1,
      -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,   517,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    19,    -1,    21,
      22,    23,    -1,    -1,   387,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,   398,    -1,    39,    -1,    -1,
     403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    58,    59,    -1,    61,
     423,    -1,   425,    65,    66,    67,   429,    -1,   431,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,   442,
      -1,    -1,    -1,    21,    22,    23,   449,   450,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,   475,   476,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      -1,   494,    70,    71,    72,    -1,    -1,    75,    76,    -1,
      -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,
     513,    -1,    -1,     3,   517,     5,     6,    -1,     8,     9,
      -1,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    62,    63,    -1,    65,    66,    67,    -1,    -1,
      70,    71,    72,    -1,    -1,    75,    76,     3,    -1,     5,
       6,    -1,     8,     9,    -1,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    -1,    -1,    70,    71,    72,    -1,    -1,    75,
      76,     3,    -1,     5,     6,    -1,     8,     9,    -1,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    -1,    -1,    70,    71,
      72,    -1,    12,    75,    76,    15,    16,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,
      70,    71,    72,    15,    16,    75,    76,    19,    -1,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    -1,    -1,    70,    71,
      72,    15,    16,    75,    76,    -1,    -1,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    -1,    -1,    62,    63,
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
      -1,    59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,
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
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    -1,    -1,    70,    71,
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
      56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,
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
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    58,    59,    -1,    -1,
      -1,    15,    16,    65,    66,    67,    68,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    59,    -1,    -1,    -1,    15,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    -1,    15,    16,    65,    66,    67,    68,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    15,    16,    -1,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    15,
      16,    -1,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    15,    16,    -1,    -1,    19,    -1,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    15,    16,    -1,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    59,
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
      -1,    55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    15,    16,    -1,    -1,    19,    -1,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,
      -1,    15,    16,    -1,    65,    66,    67,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    -1,    -1,    15,    16,
      -1,    65,    66,    67,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    59,    -1,    -1,    15,    16,    -1,    65,    66,
      67,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    15,    16,    -1,    65,    66,    67,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    15,
      16,    -1,    65,    66,    67,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    15,    16,    -1,    65,
      66,    67,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    -1,    -1,    15,    16,    -1,    65,    66,    67,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,
      15,    16,    -1,    65,    66,    67,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    59,    -1,    -1,    15,    16,    -1,
      65,    66,    67,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    59,    -1,    -1,    15,    16,    -1,    65,    66,    67,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    -1,    59,    -1,
      -1,    15,    16,    -1,    65,    66,    67,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    -1,    -1,    15,    16,
      -1,    65,    66,    67,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    -1,    -1,    15,    16,    -1,    65,    66,
      67,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    15,    16,    -1,    65,    66,    67,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    15,
      16,    -1,    65,    66,    67,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    49,    -1,    -1,    52,    53,    54,    -1,
      56,    -1,    58,    -1,    -1,    61,    49,    63,    -1,    52,
      53,    54,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    65,    -1,    67,    -1,    -1,    70,    71,    72,
      73,    74,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,   200,   203,    39,     0,    46,    38,   201,   204,
      39,    42,    56,    61,   205,   207,    15,    24,    25,    26,
     100,   101,   102,   107,   115,   119,   120,   202,    46,   207,
     205,   206,   207,    39,    56,    93,    39,    56,   103,   105,
      39,    56,   108,   110,   111,    56,   105,   116,    46,   201,
      46,    57,    59,    92,    93,   112,    15,    16,    19,    21,
      22,    23,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    39,    55,    56,    57,    59,    65,    66,    67,
      78,    79,    82,    83,    84,    85,    86,    90,    91,    94,
      95,    96,    97,    98,    99,   105,    39,   103,   104,    39,
      58,    68,    78,    59,    68,    78,   112,   108,   109,    57,
     116,   117,    68,    78,   202,   206,   105,   113,   114,    62,
     167,    78,    92,    92,    62,    78,    55,    78,    59,    62,
      56,    61,    21,    78,    15,    39,    40,    41,    42,    43,
      55,    56,    59,    60,    65,    70,    71,    72,    75,    76,
      78,    79,    83,    84,    85,    86,    98,   121,   122,   123,
     124,   125,   131,   132,   133,   141,   142,   143,   144,   149,
     150,    78,    78,    66,    78,    78,    97,    59,    81,    57,
      58,    58,    46,    19,    78,    92,    46,    57,    39,   106,
     143,    68,    39,    78,    78,    46,    57,    46,    57,   106,
      68,    97,    58,    60,     3,     5,     6,     8,     9,    11,
      13,    14,    17,    18,    20,    39,   100,   105,   106,   118,
     143,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   177,   183,   189,   199,   167,    96,    21,    78,    78,
      39,    65,    79,    87,    88,    89,   105,    57,    94,    39,
      78,    57,    92,    78,   143,    19,    78,    56,    81,    62,
     126,    81,    56,    59,    61,   134,   135,   136,   138,   139,
      61,    49,    52,    53,    54,    60,    65,    67,    70,    71,
      72,    73,    74,    75,   145,   146,   147,   148,   144,    97,
      78,    78,    80,    57,    95,    78,   167,   104,    58,   106,
     109,   117,   106,    60,   114,    39,    62,   153,   172,   143,
     153,    39,    12,   105,   106,   143,   153,   190,   191,   192,
     193,   194,   198,    39,   143,   106,   143,    45,    47,    50,
      68,   160,    48,    46,    55,    63,    63,    78,    60,    39,
      79,    81,    63,    46,    42,    78,    46,    56,    78,    57,
      58,   167,    57,    60,   143,    39,    63,   126,   127,   128,
     129,   130,   143,    78,   106,   140,   137,   143,    39,    56,
      39,    78,   143,    58,    60,   143,     4,     7,   184,   185,
     186,    46,    39,   143,   173,   178,   179,   167,    46,   143,
      47,    68,   167,    46,   151,   106,   106,   168,   143,    78,
      81,    64,    42,    57,    78,    94,    46,    46,    56,    78,
      57,    78,    57,    58,    63,    69,    19,    58,    19,    58,
      57,    45,    60,    78,    78,   105,   106,   143,   187,   188,
     185,    63,    45,    47,    62,    62,   133,    10,   143,    12,
      12,   143,   191,   195,    87,    46,    57,    58,    57,    94,
      46,    46,    56,    78,    63,   127,   126,   130,   143,    58,
     106,    58,   137,   143,    57,    47,    68,   168,     4,     7,
     174,   175,   176,     4,     7,   180,   181,   182,    61,   167,
     169,   167,   143,   143,    46,    46,    57,    46,    57,    58,
      57,    94,    46,    19,    58,    60,    45,   143,   188,   188,
     106,   175,    63,    45,    80,   181,    63,    45,    56,    10,
     153,   196,   197,    46,    46,    57,    46,    57,    58,    58,
     143,   168,   168,    78,   167,   169,    46,    46,    57,    60,
      57,    46
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
      

/* Line 1464 of yacc.c  */
#line 2677 "go_yacc.tab.c"
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
#line 580 "go_yacc.y"


void yyerror(char *s) {
    printf("\nline %d: %s \n", lineno, s);
}

int main() {
    yyparse();
}
