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
#define YYLAST   2900

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  300
/* YYNRULES -- Number of states.  */
#define YYNSTATES  525

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
     339,   342,   346,   350,   352,   355,   360,   365,   369,   371,
     375,   376,   380,   382,   386,   388,   391,   396,   398,   400,
     404,   405,   409,   412,   416,   420,   425,   429,   431,   434,
     438,   444,   449,   454,   458,   464,   469,   471,   475,   479,
     483,   487,   491,   495,   499,   503,   507,   511,   515,   519,
     521,   524,   526,   529,   532,   535,   538,   541,   544,   548,
     554,   559,   564,   568,   576,   583,   588,   592,   595,   599,
     602,   605,   607,   611,   614,   617,   619,   625,   630,   635,
     639,   641,   643,   647,   649,   651,   653,   655,   657,   659,
     661,   663,   665,   667,   669,   671,   673,   675,   677,   679,
     681,   683,   685,   687,   689,   691,   693,   695,   697,   699,
     701,   703,   705,   709,   710,   712,   714,   716,   718,   720,
     722,   726,   728,   731,   735,   737,   739,   742,   745,   747,
     750,   752,   755,   757,   760,   762,   766,   769,   773,   776,
     784,   792,   798,   804,   810,   814,   816,   818,   825,   831,
     837,   842,   845,   847,   848,   852,   855,   857,   860,   862,
     869,   875,   882,   885,   886,   890,   893,   894,   897,   899,
     904,   908,   911,   912,   913,   916,   918,   922,   926,   928,
     930,   934,   936,   938,   940,   941,   943,   949,   951,   952,
     954,   955,   957,   959,   964,   969,   972,   975,   980,   984,
     985,   989,   990,   993,   996,  1001,  1004,  1007,  1009,  1013,
    1014
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     182,     0,    -1,    79,    -1,    79,    81,    -1,    56,    78,
      57,    -1,    82,    -1,    39,    -1,    83,    -1,    80,    58,
      78,    -1,    78,    -1,    59,    80,    60,    -1,    84,    -1,
      86,    -1,    90,    -1,    91,    -1,    96,    -1,    85,    -1,
      98,    -1,    99,    -1,    27,    -1,    34,    -1,    28,    -1,
      29,    -1,    30,    -1,    32,    -1,    33,    -1,    31,    -1,
      36,    -1,    35,    -1,    39,    61,    39,    -1,    59,   121,
      60,    78,    -1,    59,    60,    78,    -1,    23,    62,    87,
      63,    -1,    88,    46,    64,    87,    -1,    88,    46,    -1,
     108,    78,    -1,   108,    78,    42,    -1,    89,    -1,    89,
      42,    -1,    79,    -1,    65,    79,    -1,    79,    81,    -1,
      65,    79,    81,    -1,    65,    78,    -1,    15,    92,    -1,
      93,    -1,    93,    78,    -1,    56,    57,    -1,    56,    94,
      57,    -1,    56,    94,    58,    57,    -1,    95,    -1,    95,
      58,    95,    -1,    78,    -1,   108,    78,    -1,    19,    78,
      -1,   108,    19,    78,    -1,    16,    62,    96,    63,    -1,
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
      55,    21,    78,    -1,   105,    -1,   110,    -1,   102,    -1,
     100,    -1,   119,    -1,   120,    -1,    26,   103,    -1,    26,
      56,   104,    57,    -1,   108,    78,    68,   109,    -1,   108,
      78,    -1,   108,    68,   109,    -1,   103,    46,   104,    -1,
     103,    -1,    24,   106,    -1,    24,    56,   107,    57,    -1,
     108,    78,    68,   109,    -1,   108,    68,   109,    -1,   108,
      -1,   106,    46,   107,    -1,    -1,   108,    58,    39,    -1,
      39,    -1,   109,    58,   121,    -1,   121,    -1,    25,   111,
      -1,    25,    56,   112,    57,    -1,   113,    -1,   114,    -1,
     111,    46,   112,    -1,    -1,    39,    68,    78,    -1,    39,
      78,    -1,    39,   115,    78,    -1,    59,   116,    60,    -1,
      59,   116,    58,    60,    -1,   116,    58,   117,    -1,   117,
      -1,   108,    97,    -1,   108,    47,   109,    -1,    15,    39,
     115,    92,   150,    -1,    15,    39,    92,   150,    -1,    15,
      39,   115,    92,    -1,    15,    39,    92,    -1,    15,    93,
      39,    92,   150,    -1,    15,    93,    39,    92,    -1,   122,
      -1,   121,    52,   121,    -1,   121,    53,   121,    -1,   121,
      54,   121,    -1,   121,    70,   121,    -1,   121,    71,   121,
      -1,   121,    67,   121,    -1,   121,    72,   121,    -1,   121,
      65,   121,    -1,   121,    73,   121,    -1,   121,    74,   121,
      -1,   121,    49,   121,    -1,   121,    75,   121,    -1,   123,
      -1,   134,   122,    -1,   130,    -1,   123,   124,    -1,   123,
     125,    -1,   123,   126,    -1,   123,   127,    -1,   123,   128,
      -1,    61,    39,    -1,    59,   121,    60,    -1,    59,   121,
      45,   121,    60,    -1,    59,   121,    45,    60,    -1,    59,
      45,   121,    60,    -1,    59,    45,    60,    -1,    59,   121,
      45,   121,    45,   121,    60,    -1,    59,    45,   121,    45,
     121,    60,    -1,    61,    56,    78,    57,    -1,    56,   129,
      57,    -1,    56,    57,    -1,   109,    19,    58,    -1,   109,
      19,    -1,   109,    58,    -1,   109,    -1,    78,    19,    58,
      -1,    78,    19,    -1,    78,    58,    -1,    78,    -1,    78,
      58,   109,    19,    58,    -1,    78,    58,   109,    19,    -1,
      78,    58,   109,    58,    -1,    78,    58,   109,    -1,   132,
      -1,   131,    -1,    56,   121,    57,    -1,    39,    -1,   133,
      -1,    40,    -1,    44,    -1,    41,    -1,    43,    -1,    42,
      -1,    70,    -1,    71,    -1,    76,    -1,    72,    -1,    65,
      -1,    75,    -1,    55,    -1,   100,    -1,   136,    -1,   137,
      -1,   144,    -1,   145,    -1,   146,    -1,   147,    -1,   148,
      -1,   149,    -1,   150,    -1,   152,    -1,   153,    -1,   166,
      -1,   172,    -1,   181,    -1,    39,    45,   135,    -1,    -1,
     138,    -1,   139,    -1,   141,    -1,   142,    -1,   118,    -1,
     121,    -1,   140,    55,   121,    -1,   121,    -1,   121,    48,
      -1,   109,   143,   109,    -1,    50,    -1,    68,    -1,    20,
     121,    -1,    18,   109,    -1,    18,    -1,     3,    39,    -1,
       3,    -1,    14,    39,    -1,    14,    -1,    11,    39,    -1,
       8,    -1,    62,   151,    63,    -1,    62,    63,    -1,   135,
      46,   151,    -1,   135,    46,    -1,     9,   137,    46,   121,
     150,    10,   152,    -1,     9,   137,    46,   121,   150,    10,
     150,    -1,     9,   137,    46,   121,   150,    -1,     9,   121,
     150,    10,   152,    -1,     9,   121,   150,    10,   150,    -1,
       9,   121,   150,    -1,   154,    -1,   160,    -1,     6,   155,
     156,    62,   158,    63,    -1,     6,   155,   156,    62,    63,
      -1,     6,   156,    62,   158,    63,    -1,     6,   156,    62,
      63,    -1,   137,    46,    -1,   121,    -1,    -1,   159,    45,
     151,    -1,   157,   158,    -1,   157,    -1,     7,   109,    -1,
       4,    -1,     6,   155,   161,    62,   164,    63,    -1,     6,
     161,    62,   164,    63,    -1,   162,   123,    61,    56,    25,
      57,    -1,    39,    47,    -1,    -1,   165,    45,   151,    -1,
     163,   164,    -1,    -1,     7,    80,    -1,     4,    -1,     5,
      62,   168,    63,    -1,   169,    45,   151,    -1,   167,   168,
      -1,    -1,    -1,     7,   170,    -1,     4,    -1,   109,    68,
     171,    -1,   108,    47,   171,    -1,   171,    -1,   121,    -1,
      13,   173,   150,    -1,   174,    -1,   175,    -1,   180,    -1,
      -1,   121,    -1,   176,    46,   177,    46,   179,    -1,   137,
      -1,    -1,   174,    -1,    -1,   137,    -1,   178,    -1,   109,
      68,    12,   121,    -1,   108,    47,    12,   121,    -1,    12,
     121,    -1,    17,   121,    -1,   185,    46,   183,   184,    -1,
     186,    46,   183,    -1,    -1,   101,    46,   184,    -1,    -1,
      37,    39,    -1,    38,   187,    -1,    38,    56,   188,    57,
      -1,    61,   189,    -1,    39,   189,    -1,   189,    -1,   187,
      46,   188,    -1,    -1,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    40,    41,    42,    44,    44,    47,    48,
      51,    53,    53,    53,    53,    53,    54,    54,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    68,
      71,    74,    77,    79,    80,    83,    84,    85,    86,    89,
      90,    91,    92,    97,    99,   102,   103,   107,   108,   109,
     116,   117,   119,   120,   121,   122,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   149,   150,   151,   152,   156,   159,   160,
     161,   166,   166,   166,   168,   168,   168,   171,   172,   175,
     176,   177,   180,   181,   186,   187,   191,   192,   193,   197,
     198,   202,   203,   206,   207,   212,   213,   217,   217,   220,
     221,   224,   227,   228,   231,   232,   235,   236,   237,   242,
     245,   246,   247,   248,   252,   253,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   304,
     305,   309,   312,   313,   314,   315,   316,   322,   323,   325,
     326,   327,   328,   329,   330,   332,   333,   334,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     352,   353,   354,   357,   361,   367,   368,   369,   370,   371,
     378,   378,   378,   378,   378,   378,   378,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   397,   398,   399,   400,   401,   402,   403,   406,
     407,   409,   410,   411,   413,   414,   418,   420,   421,   424,
     425,   428,   429,   432,   434,   436,   437,   439,   440,   444,
     445,   446,   447,   448,   449,   452,   453,   456,   457,   458,
     459,   462,   466,   467,   470,   472,   473,   476,   477,   480,
     481,   484,   487,   488,   491,   494,   495,   498,   499,   507,
     510,   513,   514,   516,   517,   518,   521,   522,   523,   526,
     529,   532,   533,   534,   535,   538,   541,   544,   545,   548,
     549,   552,   555,   558,   560,   561,   564,   568,   572,   573,
     577,   578,   582,   586,   587,   590,   591,   592,   595,   596,
     598
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
  "ChannelType", "Declaration", "TopLevelDecl", "VarDecl", "VarSpec",
  "VarSpecList", "ConstDecl", "ConstSpec", "ConstSpecLoop",
  "IdentifierList", "ExpressionList", "TypeDecl", "TypeSpec",
  "TypeSpecLoop", "AliasDecl", "TypeDef", "TypeParameters",
  "TypeParamList", "TypeParamDecl", "ShortVarDecl", "FunctionDecl",
  "MethodDecl", "Expression", "UnaryExpr", "PrimaryExpr", "Selector",
  "Index", "Slice", "TypeAssertion", "Arguments", "ArgumentsLoop",
  "Operand", "OperandName", "Literal", "BasicLit", "unary_op", "Statement",
  "LabeledStmt", "SimpleStmt", "ExpressionStmt", "SendStmt", "Channel",
  "IncDecStmt", "Assignment", "assign_op", "GoStmt", "ReturnStmt",
  "BreakStmt", "ContinueStmt", "GotoStmt", "FallthroughStmt", "Block",
  "StatementList", "IfStmt", "SwitchStmt", "ExprSwitchStmt",
  "SimpleStmtBrakets", "ExpressionBrakets", "ExprCaseClause",
  "ExprCaseClauseLoop", "ExprSwitchCase", "TypeSwitchStmt",
  "TypeSwitchGuard", "IdetifierGodefBrakets", "TypeCaseClause",
  "TypeCaseClauseLoop", "TypeSwitchCase", "SelectStmt", "CommClause",
  "CommClauseLoop", "CommCase", "RecvStmt", "RecvExpr", "ForStmt",
  "ForClauseBracket", "Condition", "ForClause", "InitStmtBracket",
  "ConditionBracket", "PostStmt", "PostStmtBracket", "RangeClause",
  "DeferStmt", "SourceFile", "ImportLoop", "TopLevelLoop", "PackageClause",
  "ImportDecl", "ImportSpec", "ImportSpecLoop", "ImportPath", 0
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
     103,   103,   104,   104,   105,   105,   106,   106,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   114,   114,   115,   115,   116,   116,   117,   118,
     119,   119,   119,   119,   120,   120,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     122,   123,   123,   123,   123,   123,   123,   124,   125,   126,
     126,   126,   126,   126,   126,   127,   128,   128,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   130,   131,   132,   133,   133,   133,   133,   133,
     134,   134,   134,   134,   134,   134,   134,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   136,   137,   137,   137,   137,   137,   137,   138,
     139,   140,   141,   142,   143,   143,   144,   145,   145,   146,
     146,   147,   147,   148,   149,   150,   150,   151,   151,   152,
     152,   152,   152,   152,   152,   153,   153,   154,   154,   154,
     154,   155,   156,   156,   157,   158,   158,   159,   159,   160,
     160,   161,   162,   162,   163,   164,   164,   165,   165,   166,
     167,   168,   168,   169,   169,   169,   170,   170,   170,   171,
     172,   173,   173,   173,   173,   174,   175,   176,   176,   177,
     177,   178,   179,   180,   180,   180,   181,   182,   183,   183,
     184,   184,   185,   186,   186,   187,   187,   187,   188,   188,
     189
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
       2,     3,     3,     1,     2,     4,     4,     3,     1,     3,
       0,     3,     1,     3,     1,     2,     4,     1,     1,     3,
       0,     3,     2,     3,     3,     4,     3,     1,     2,     3,
       5,     4,     4,     3,     5,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     1,     2,     2,     2,     2,     2,     2,     3,     5,
       4,     4,     3,     7,     6,     4,     3,     2,     3,     2,
       2,     1,     3,     2,     2,     1,     5,     4,     4,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     1,     1,     2,     2,     1,     2,
       1,     2,     1,     2,     1,     3,     2,     3,     2,     7,
       7,     5,     5,     5,     3,     1,     1,     6,     5,     5,
       4,     2,     1,     0,     3,     2,     1,     2,     1,     6,
       5,     6,     2,     0,     3,     2,     0,     2,     1,     4,
       3,     2,     0,     0,     2,     1,     3,     3,     1,     1,
       3,     1,     1,     1,     0,     1,     5,     1,     0,     1,
       0,     1,     1,     4,     4,     2,     2,     4,     3,     0,
       3,     0,     2,     2,     4,     2,     2,     1,     3,     0,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,   292,     1,   289,     0,   291,     0,
       0,   300,   299,     0,   293,   297,     0,     0,     0,     0,
      84,     0,    83,    81,    82,    85,    86,   287,   289,   296,
       0,     0,   295,     0,     0,     0,   102,   100,    94,    98,
       0,   110,   105,   107,   108,     0,    87,     0,   291,   288,
     299,   294,     0,   123,    45,     0,     0,     0,     0,     0,
       0,     0,    19,    21,    22,    23,    26,    24,    25,    20,
      28,    27,     6,     0,     0,    47,     0,     0,     0,     0,
      52,     2,     5,     7,    11,    16,    12,    13,    14,     0,
      50,    15,     0,    17,    18,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,   112,     0,     0,     0,    93,
       0,     0,    90,   290,   298,     0,     0,   117,   203,   121,
      46,   122,    44,     0,    54,     0,    78,     0,     0,     0,
       0,     0,     0,   173,   175,   177,   179,   178,   176,   186,
       0,     0,   184,   180,   181,   183,   185,   182,     0,   126,
     139,   141,   171,   170,   174,     0,    43,     0,     0,    75,
       0,    73,     0,     3,    48,     0,     0,    72,     0,    53,
     125,   100,    95,   101,    97,   104,     0,   102,   111,   113,
     110,   106,     0,    88,    91,     0,   118,     0,   114,   220,
       0,   203,   224,   203,     0,   203,   222,     0,   218,     0,
     173,   226,   187,     0,     0,   208,   104,     0,   188,   189,
     204,   205,     0,   206,   207,   190,   191,   192,   193,   194,
     195,   196,     0,   197,   198,   235,   236,   199,   200,   201,
     120,    15,     0,    79,     0,   102,     0,    39,     0,     0,
      37,     0,     0,     0,    29,    80,     4,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   142,   143,   144,   145,   146,
     140,    74,    76,     9,     0,    49,    51,    55,   124,    99,
       0,    96,   109,    92,    89,   115,   116,   219,   262,   173,
     104,     0,   243,     0,     0,     0,   104,     0,   223,     0,
       0,     0,   104,   277,     0,   271,   272,     0,   273,   221,
     286,   217,   216,   203,     0,   214,   215,     0,   212,   228,
       0,   225,    56,    78,     0,     6,    40,    41,    32,    34,
      38,    35,    57,     0,     0,     0,     0,   172,   137,   127,
     128,   129,    30,   134,   132,   130,   131,   133,   135,   136,
     138,     6,   186,     0,   157,   184,   165,   161,     0,     0,
       0,   147,     0,     0,    10,   103,   265,     0,   262,     0,
       0,   252,   241,   173,   242,     0,     0,     0,   256,     0,
     234,     0,   285,     0,   215,   270,   280,   202,   119,   213,
     227,   210,    77,    42,     0,    36,     0,    52,     0,    69,
      58,     0,     0,     0,   163,   164,   159,   160,   156,   152,
       0,     0,   148,     0,     8,     0,     0,   104,   264,   268,
     261,   259,   203,     0,   256,   248,     0,   240,   246,     0,
       0,   258,     0,   256,     0,     0,     0,     0,     0,     0,
       0,   275,   279,     0,    33,    60,     0,     0,     0,     0,
      70,    59,     0,     0,   162,   169,   158,     0,   151,   150,
       0,   155,     0,     0,   260,   238,     0,     0,   247,   245,
     239,   203,   257,   255,   250,   203,     0,   233,   232,   231,
     284,   283,   203,    63,     0,    61,     0,     0,     0,     0,
      71,   167,   168,     0,     0,   149,   269,   267,   266,   237,
     249,   244,   254,     0,     0,   281,   282,   276,    66,    64,
       0,    62,     0,     0,   166,   154,     0,   251,   230,   229,
      67,    65,     0,   153,    68
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   160,    81,   274,   163,    82,    83,    84,    85,    86,
     238,   239,   240,    87,    88,    53,    54,    89,    90,    91,
      92,    93,    94,   202,    21,    22,   109,   110,    23,    97,
      98,   203,   204,    24,   107,   108,    43,    44,    55,   116,
     117,   205,    25,    26,   175,   149,   150,   265,   266,   267,
     268,   269,   358,   151,   152,   153,   154,   155,   207,   208,
     209,   210,   211,   212,   213,   214,   317,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   292,   293,
     428,   429,   430,   226,   294,   295,   433,   434,   435,   227,
     368,   369,   370,   418,   419,   228,   304,   305,   306,   307,
     443,   506,   507,   308,   229,     2,     8,    27,     3,     9,
      30,    31,    15
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -433
static const yytype_int16 yypact[] =
{
       6,     8,   105,     5,  -433,  -433,    28,     0,   106,    72,
      94,  -433,    16,    94,  -433,  -433,   -16,    26,    39,    45,
    -433,   115,  -433,  -433,  -433,  -433,  -433,  -433,    28,  -433,
     117,    83,  -433,    30,  1131,   129,  -433,   134,  -433,   885,
     981,   150,  -433,  -433,  -433,   134,  -433,   933,   106,  -433,
      16,  -433,   134,   141,  2113,   160,   160,   162,  2113,  2160,
     133,   163,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,    -4,   197,  2113,  -433,   135,  2113,  2113,  2207,
    2113,   167,  -433,  -433,  -433,  -433,  -433,  -433,  -433,   113,
     169,  -433,   182,  -433,  -433,  1184,   160,   184,   180,    -2,
     199,  2392,  1029,  2262,  2113,  2113,  2113,   193,   183,   195,
     185,  2392,  1077,  -433,  -433,  1496,    66,  -433,   537,  -433,
    2113,   141,  -433,  2113,  2113,  2254,  2113,  2113,    -1,  1237,
     205,  2113,  1543,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    2392,  2113,  -433,  -433,  -433,  -433,  -433,  -433,  2710,  -433,
      82,  -433,  -433,  -433,  -433,  2392,  2113,  2113,  2113,  2113,
    2113,   182,  2113,  -433,  -433,   188,  1596,  -433,  2113,  2113,
     141,   134,  -433,  -433,   191,  2818,  2392,  2470,  2113,  2113,
     150,  -433,   134,  -433,   191,  2392,   182,    21,  -433,   207,
     190,  2300,  -433,  2400,   211,   192,   214,  2392,  2392,  2392,
      64,  -433,  -433,    33,    29,  -433,  2593,   209,  -433,  -433,
    -433,  -433,   201,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,   196,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,   198,  2160,  2113,  1643,   -11,   219,   167,   202,   224,
     218,  1496,  1690,   130,  -433,  2113,  -433,   240,  2113,  2392,
    2392,  2392,  2392,  2113,  2392,  2392,  2392,  2392,  2392,  2392,
    2392,  2392,   769,  2308,    51,  -433,  -433,  -433,  -433,  -433,
    -433,   182,  2113,  2113,    86,  -433,  -433,  2113,  -433,  -433,
    2392,   191,  -433,  -433,   191,  -433,  -433,  -433,    25,    57,
    2623,   225,  2438,   210,   226,   142,  2653,   249,  -433,  2392,
      65,    35,  2683,  -433,   141,  -433,  -433,   250,  -433,  -433,
    2818,   191,  2818,   711,  2392,  -433,  -433,  2392,  -433,   615,
    2392,  -433,  -433,  2113,  2113,   237,   167,  -433,  -433,   222,
    -433,  1737,  -433,  1290,  1784,  1831,   244,  -433,  2818,  2818,
    2818,  2818,  2113,  2818,  2818,  2818,  2818,  2818,  2818,  2818,
    2818,  2825,   197,   827,  -433,  2113,  1343,     9,   246,  2346,
     629,  -433,  2113,  2113,  -433,  2818,  -433,  2400,    25,   243,
     263,  -433,  -433,   262,  2818,   255,   259,    13,   153,    93,
     314,  2392,  2818,   449,   313,  -433,  2392,  -433,   191,   191,
    -433,  2818,  2113,  -433,    -1,  -433,   280,  1543,   136,  -433,
    -433,  1396,  1878,  1925,   269,  2392,   270,  2392,  -433,  -433,
    2501,  2354,  -433,  1972,  2113,    87,    52,  2563,  -433,  -433,
    -433,  -433,   711,    20,   153,  -433,  2392,  -433,   158,   268,
     287,  -433,  2113,   153,   271,   288,    60,     7,  2737,  2392,
    2392,  2818,  -433,   290,  -433,  -433,   292,   282,   294,   139,
    -433,  -433,  1449,  2019,  -433,    17,  -433,  2392,  -433,  -433,
    2532,  -433,  2392,  2392,  -433,  -433,   279,   283,   191,  -433,
    -433,   711,   289,  -433,  -433,   711,  2066,  -433,  -433,   335,
    2818,  2818,  2400,  -433,   302,  -433,   303,   293,   305,   144,
    -433,   295,  2392,  2764,  2392,  -433,  2818,  -433,  -433,  -433,
    -433,  -433,  -433,   297,     7,  -433,  -433,  -433,  -433,  -433,
     309,  -433,   310,   301,  -433,  -433,  2791,  -433,  -433,  -433,
    -433,  -433,   315,  -433,  -433
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -433,   -33,  -117,   -73,  -224,  -433,  -433,  -433,  -433,  -433,
     -34,  -433,  -433,  -433,  -433,   -22,   346,  -111,   200,   241,
     296,  -433,  -433,     1,  -433,  -433,   344,   187,  -433,   348,
     203,   -15,   -48,  -433,   349,   208,  -433,  -433,   331,  -433,
     186,  -433,  -433,  -433,    24,   217,    80,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,    67,  -433,
    -183,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,   -53,  -316,  -432,  -433,  -433,  -433,    89,
    -433,  -270,  -433,  -433,    90,  -433,  -433,  -285,  -433,  -433,
    -433,    19,  -433,  -433,  -250,  -433,  -433,     3,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,   362,   345,  -433,  -433,
     385,   347,   156
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -276
static const yytype_int16 yytable[] =
{
     119,    80,    39,   390,    47,   478,   102,   105,   291,    20,
     297,   237,   303,   327,   112,  -102,   193,   425,   243,    95,
     426,   120,    39,    33,   425,   124,   126,   426,   406,   366,
      47,    -6,   367,   121,   122,    -6,   491,   115,   235,    10,
      34,   132,    11,     1,   156,   157,   159,     4,    -6,    20,
     130,     6,   129,   174,   129,    10,    12,   130,    11,   130,
      36,    13,   169,   184,   236,    36,     7,   407,   230,   118,
    -263,   178,   519,   179,   170,   492,   427,    13,    40,   315,
     314,   285,    37,   465,    36,   315,    34,   280,   115,    52,
     361,   100,   233,   280,   234,    41,    80,   316,   245,   361,
     148,    45,   393,   384,   371,     5,   464,   362,   248,   313,
     280,  -102,   383,   241,    95,  -102,   476,   278,    28,   326,
     463,    16,  -102,   100,   187,   272,   188,   148,   281,   273,
      17,    18,    19,    80,   462,   277,    11,   284,   262,   467,
      51,   263,   206,   264,   363,   100,   364,   301,   473,   262,
     311,    95,   263,   466,   436,   501,    39,   431,   469,   502,
     432,    48,   425,    50,   247,   426,    29,    47,    96,    32,
     164,   165,   115,    36,   133,   134,   135,   136,   137,   138,
     300,   133,   134,   135,   136,   137,   138,   335,   336,    40,
     139,   140,   127,   446,   447,   141,   486,   487,   140,   323,
     142,   512,   513,   118,   299,   143,   144,   145,   331,   334,
     146,   147,   497,   498,   357,   290,    34,   296,   131,   302,
     342,   310,   398,   312,   123,   128,   162,   166,   167,   356,
     171,   177,   134,   135,   136,   137,   138,   172,   173,   180,
     181,   182,   183,   380,   244,   275,   287,   139,   140,   280,
     298,   385,   288,   309,  -274,   319,   320,   142,   325,   321,
     330,   322,   143,   144,   145,   328,   388,   146,   147,   389,
     329,   372,   377,   338,   339,   340,   341,   237,   343,   344,
     345,   346,   347,   348,   349,   350,   394,   360,   378,   249,
     449,   392,   250,   251,   252,   381,   386,   337,   130,   505,
     397,   403,   402,   408,   365,   254,   421,   255,   422,   371,
     256,   257,   258,   259,   260,   261,   374,   423,    95,   416,
     132,   424,   156,   382,   437,   440,   445,   454,   456,   413,
     414,   470,   471,   475,   474,   388,   482,   206,   483,   484,
     485,   489,   499,   206,   391,   504,   500,   363,   508,   509,
     510,   511,   415,   514,   517,   520,   521,   455,   522,   472,
     444,   524,    35,    46,   231,    38,   276,    42,   397,   283,
     453,   106,   270,   286,   279,   379,   161,   247,   468,   241,
     387,   375,   376,   410,   477,   479,    95,   420,   282,   442,
      49,   417,    14,   113,     0,     0,     0,   114,   161,   273,
       0,   161,     0,     0,     0,   438,     0,     0,   161,     0,
     441,   186,     0,     0,     0,     0,   161,     0,     0,   397,
     161,     0,   161,     0,     0,     0,     0,     0,   161,     0,
       0,   365,     0,     0,     0,   460,     0,    95,     0,     0,
       0,     0,     0,   413,     0,     0,   206,     0,     0,     0,
       0,   518,   161,   271,     0,   161,   161,     0,     0,     0,
       0,   439,     0,   480,   481,   161,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   161,     0,     0,     0,     0,
       0,   493,     0,     0,     0,     0,   496,   496,   133,   134,
     135,   136,   137,   138,     0,   206,     0,     0,     0,   206,
       0,     0,     0,     0,   139,   140,   206,     0,     0,     0,
       0,     0,     0,     0,   142,     0,   365,     0,   516,   143,
     144,   145,     0,     0,   146,   147,     0,     0,     0,   161,
     161,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   161,   190,   191,   161,   192,   193,     0,   194,     0,
     195,   196,     0,     0,   197,   198,     0,   199,     0,     0,
       0,    17,    18,    19,     0,     0,     0,     0,   271,   161,
       0,     0,     0,   161,     0,     0,   200,   134,   135,   136,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,   118,
     201,     0,   142,     0,     0,     0,     0,   143,   144,   145,
       0,     0,   146,   147,     0,     0,     0,     0,   189,   161,
     190,   191,     0,   192,   193,     0,   194,   161,   195,   196,
     161,     0,   197,   198,     0,   199,     0,     0,   161,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,     0,   200,   134,   135,   136,   137,   138,
       0,  -203,     0,     0,     0,     0,     0,     0,     0,     0,
     139,   140,     0,     0,   411,     0,     0,   118,   249,     0,
     142,   250,   251,   252,     0,   143,   144,   145,   161,   412,
     146,   147,     0,   161,   254,     0,   255,     0,   161,   256,
     257,   258,   259,   260,   261,     0,     0,     0,     0,   161,
     161,     0,     0,     0,   189,     0,   190,   191,     0,   192,
     193,     0,   194,     0,   195,   196,     0,     0,   197,   198,
       0,   199,     0,     0,     0,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   161,
     200,   134,   135,   136,   137,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,   118,     0,     0,   142,     0,     0,     0,
       0,   143,   144,   145,    56,    57,   146,   147,     0,     0,
      59,    60,    61,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,   351,   134,
     135,   136,   137,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   353,   354,     0,    76,     0,
       0,     0,     0,     0,   355,    78,    79,     0,     0,   143,
     144,   145,    56,    57,   146,   147,     0,     0,    59,    60,
      61,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,   351,   134,   135,   136,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,   353,     0,     0,    76,     0,     0,     0,
       0,     0,   355,    78,    79,     0,     0,   143,   144,   145,
      56,    57,   146,   147,     0,     0,    59,    60,    61,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,     0,   100,    76,     0,     0,     0,    56,    57,
      77,    78,    79,   101,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,   100,    76,     0,     0,     0,    56,    57,    77,    78,
      79,   111,    59,    60,    61,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
     103,     0,     0,     0,    56,    57,    77,    78,    79,   104,
      59,    60,    61,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    76,     0,
       0,     0,    56,    57,    77,    78,    79,   176,    59,    60,
      61,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,    76,     0,     0,     0,
       0,     0,    77,    78,    79,   185,    56,    57,     0,     0,
      58,     0,    59,    60,    61,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,     0,
      76,     0,     0,     0,     0,     0,    77,    78,    79,    56,
      57,     0,     0,   168,     0,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,   100,    76,     0,     0,     0,     0,     0,    77,
      78,    79,    56,    57,     0,     0,    58,     0,    59,    60,
      61,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,   242,     0,    76,     0,     0,     0,
       0,     0,    77,    78,    79,    56,    57,     0,     0,    58,
       0,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,   396,     0,    76,
       0,     0,     0,     0,     0,    77,    78,    79,    56,    57,
       0,     0,   404,     0,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,   405,    76,     0,     0,     0,     0,     0,    77,    78,
      79,    56,    57,     0,     0,    58,     0,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,   448,     0,    76,     0,     0,     0,     0,
       0,    77,    78,    79,    56,    57,     0,     0,    58,     0,
      59,    60,    61,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,   488,     0,    76,     0,
       0,    56,    57,     0,    77,    78,    79,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,   100,    76,     0,     0,    56,    57,
       0,    77,    78,    79,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
     246,     0,    76,     0,     0,     0,     0,     0,    77,    78,
      79,    56,    57,     0,     0,    58,     0,    59,    60,    61,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    76,     0,     0,    56,    57,
       0,    77,    78,    79,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    76,   324,     0,    56,    57,     0,    77,    78,
      79,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    99,
       0,     0,     0,     0,     0,     0,   332,     0,     0,     0,
       0,     0,     0,     0,     0,    73,   333,     0,     0,    76,
       0,     0,    56,    57,     0,    77,    78,    79,    59,    60,
      61,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    99,     0,     0,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,    76,     0,     0,    56,
      57,     0,    77,    78,    79,    59,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    99,     0,     0,     0,     0,     0,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,     0,     0,    76,     0,     0,    56,    57,     0,    77,
      78,    79,    59,    60,    61,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,     0,
      99,     0,     0,     0,     0,     0,     0,   400,     0,     0,
       0,     0,     0,     0,     0,     0,    73,   401,     0,     0,
      76,     0,     0,    56,    57,     0,    77,    78,    79,    59,
      60,    61,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,    99,     0,     0,
       0,     0,     0,     0,   450,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,     0,     0,    76,     0,     0,
      56,    57,     0,    77,    78,    79,    59,    60,    61,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,    99,     0,     0,     0,     0,     0,
       0,   451,     0,     0,     0,     0,     0,     0,     0,     0,
      73,   452,     0,     0,    76,     0,     0,    56,    57,     0,
      77,    78,    79,    59,    60,    61,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,   461,
       0,    76,     0,     0,    56,    57,     0,    77,    78,    79,
      59,    60,    61,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,    99,     0,
       0,     0,     0,     0,     0,   490,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,    76,     0,
       0,    56,    57,     0,    77,    78,    79,    59,    60,    61,
       0,   503,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,     0,    76,     0,     0,    56,    57,
       0,    77,    78,    79,    59,    60,    61,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    76,     0,     0,    56,    57,     0,    77,    78,
      79,    59,    60,    61,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,    74,     0,     0,    76,
       0,     0,    56,    57,     0,    77,    78,    79,    59,    60,
      61,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,     0,    76,     0,     0,    56,
      57,     0,    77,   158,    79,   232,    60,    61,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,   177,   134,   135,   136,   137,   138,     0,     0,    73,
      74,     0,     0,    76,     0,     0,     0,   139,   140,    77,
      78,    79,   141,     0,     0,     0,     0,   142,     0,     0,
       0,     0,   143,   144,   145,     0,     0,   146,   147,   289,
     134,   135,   136,   137,   138,     0,     0,   133,   134,   135,
     136,   137,   138,   359,     0,   139,   140,     0,     0,     0,
       0,     0,  -243,   139,   140,   142,     0,     0,     0,     0,
     143,   144,   145,   142,     0,   146,   147,     0,   143,   144,
     145,     0,     0,   146,   147,   133,   134,   135,   136,   137,
     138,     0,     0,   133,   134,   135,   136,   137,   138,     0,
       0,   139,   140,     0,     0,     0,   409,     0,     0,   139,
     140,   142,     0,     0,   459,     0,   143,   144,   145,   142,
       0,   146,   147,     0,   143,   144,   145,     0,     0,   146,
     147,   133,   134,   135,   136,   137,   138,     0,     0,   177,
     134,   135,   136,   137,   138,     0,     0,   139,   140,     0,
       0,     0,     0,     0,     0,   139,   140,   142,     0,     0,
       0,     0,   143,   144,   145,   142,     0,   146,   147,     0,
     143,   144,   145,     0,     0,   146,   147,   373,   134,   135,
     136,   137,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   139,   140,     0,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,     0,   143,   144,
     145,     0,     0,   146,   147,  -173,  -173,     0,  -173,  -173,
    -173,     0,  -173,  -173,  -173,     0,     0,     0,     0,     0,
    -173,  -173,  -173,     0,     0,     0,     0,     0,  -173,     0,
    -173,  -173,  -173,  -173,  -173,  -173,   457,     0,     0,     0,
     249,     0,     0,   250,   251,   252,     0,     0,     0,     0,
       0,   458,     0,     0,     0,     0,   254,     0,   255,     0,
       0,   256,   257,   258,   259,   260,   261,   494,     0,     0,
       0,   249,     0,     0,   250,   251,   252,     0,     0,     0,
       0,     0,   495,     0,     0,     0,     0,   254,     0,   255,
       0,     0,   256,   257,   258,   259,   260,   261,  -269,     0,
       0,     0,   249,     0,     0,   250,   251,   252,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   254,     0,
     255,     0,     0,   256,   257,   258,   259,   260,   261,  -209,
       0,   318,   249,     0,     0,   250,   251,   252,  -211,     0,
       0,     0,     0,     0,     0,  -209,     0,     0,   254,     0,
     255,     0,     0,   256,   257,   258,   259,   260,   261,  -209,
       0,   318,   249,     0,     0,   250,   251,   252,  -211,     0,
       0,     0,     0,     0,     0,  -242,     0,     0,   254,     0,
     255,     0,     0,   256,   257,   258,   259,   260,   261,  -209,
       0,   318,   249,     0,     0,   250,   251,   252,  -211,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   254,     0,
     255,     0,     0,   256,   257,   258,   259,   260,   261,  -209,
       0,   318,   249,     0,     0,   250,   251,   252,  -211,     0,
       0,     0,     0,     0,     0,  -275,     0,     0,   254,     0,
     255,     0,     0,   256,   257,   258,   259,   260,   261,   249,
       0,     0,   250,   251,   252,     0,     0,     0,     0,     0,
     253,     0,     0,     0,     0,   254,     0,   255,     0,     0,
     256,   257,   258,   259,   260,   261,   249,     0,     0,   250,
     251,   252,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   254,     0,   255,     0,     0,   256,   257,   258,
     259,   260,   261,   249,     0,     0,   250,   251,   252,     0,
       0,     0,     0,     0,   515,     0,     0,     0,     0,   254,
       0,   255,     0,     0,   256,   257,   258,   259,   260,   261,
     249,     0,     0,   250,   251,   252,     0,     0,     0,     0,
       0,   523,     0,     0,     0,     0,   254,     0,   255,     0,
       0,   256,   257,   258,   259,   260,   261,   249,     0,     0,
     250,   251,   252,     0,  -173,     0,     0,  -173,  -173,  -173,
       0,   129,     0,   254,     0,   255,   130,     0,   256,   257,
     258,   259,   260,   261,     0,  -173,  -173,  -173,  -173,  -173,
    -173
};

static const yytype_int16 yycheck[] =
{
      53,    34,    17,   319,    19,   437,    39,    40,   191,     8,
     193,   128,   195,   237,    47,    19,     9,     4,   129,    34,
       7,    54,    37,    39,     4,    58,    59,     7,    19,     4,
      45,    42,     7,    55,    56,    46,    19,    52,    39,    39,
      56,    74,    42,    37,    77,    78,    79,    39,    59,    48,
      61,    46,    56,   101,    56,    39,    56,    61,    42,    61,
      39,    61,    95,   111,    65,    39,    38,    58,   121,    62,
      45,   104,   504,   106,    96,    58,    63,    61,    39,    50,
      47,    60,    56,    63,    39,    50,    56,    58,   103,    59,
      39,    58,   125,    58,   127,    56,   129,    68,   131,    39,
      76,    56,   326,    68,    47,     0,   422,    56,   141,    45,
      58,    47,    47,   128,   129,    58,    56,   170,    46,   236,
      68,    15,    58,    58,    58,   158,    60,   103,   176,   162,
      24,    25,    26,   166,    47,   168,    42,   185,    56,   424,
      57,    59,   118,    61,    58,    58,    60,   195,   433,    56,
     198,   166,    59,   423,    61,   471,   171,     4,   428,   475,
       7,    46,     4,    46,   140,     7,    10,   182,    39,    13,
      57,    58,   187,    39,    39,    40,    41,    42,    43,    44,
     195,    39,    40,    41,    42,    43,    44,    57,    58,    39,
      55,    56,    59,    57,    58,    60,    57,    58,    56,   232,
      65,    57,    58,    62,    12,    70,    71,    72,   241,   242,
      75,    76,   462,   463,   262,   191,    56,   193,    21,   195,
     253,   197,   333,   199,    62,    62,    59,    58,    46,   262,
      46,    39,    40,    41,    42,    43,    44,    57,    39,    46,
      57,    46,    57,   296,    39,    57,    39,    55,    56,    58,
      39,   304,    62,    39,    62,    46,    55,    65,    39,    63,
      42,    63,    70,    71,    72,    63,   314,    75,    76,   317,
      46,    46,    62,   249,   250,   251,   252,   394,   254,   255,
     256,   257,   258,   259,   260,   261,    64,   263,    62,    49,
     401,   324,    52,    53,    54,    46,    46,    57,    61,   482,
     333,    57,   335,    57,   280,    65,    63,    67,    45,    47,
      70,    71,    72,    73,    74,    75,   292,    62,   333,   367,
     353,    62,   355,   299,    10,    12,    46,    58,    58,   362,
     363,    63,    45,    45,    63,   383,    46,   313,    46,    57,
      46,   452,    63,   319,   320,    10,    63,    58,    46,    46,
      57,    46,   367,    58,    57,    46,    46,   405,    57,   432,
     394,    46,    16,    19,   123,    17,   166,    18,   401,   182,
     403,    40,   155,   187,   171,   295,    80,   353,   426,   394,
     313,   292,   292,   359,   437,   438,   401,   368,   180,   386,
      28,   367,     7,    48,    -1,    -1,    -1,    50,   102,   432,
      -1,   105,    -1,    -1,    -1,   381,    -1,    -1,   112,    -1,
     386,   115,    -1,    -1,    -1,    -1,   120,    -1,    -1,   452,
     124,    -1,   126,    -1,    -1,    -1,    -1,    -1,   132,    -1,
      -1,   407,    -1,    -1,    -1,   411,    -1,   452,    -1,    -1,
      -1,    -1,    -1,   476,    -1,    -1,   422,    -1,    -1,    -1,
      -1,   504,   156,   157,    -1,   159,   160,    -1,    -1,    -1,
      -1,    12,    -1,   439,   440,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   178,   179,    -1,    -1,    -1,    -1,
      -1,   457,    -1,    -1,    -1,    -1,   462,   463,    39,    40,
      41,    42,    43,    44,    -1,   471,    -1,    -1,    -1,   475,
      -1,    -1,    -1,    -1,    55,    56,   482,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,   492,    -1,   494,    70,
      71,    72,    -1,    -1,    75,    76,    -1,    -1,    -1,   233,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,   245,     5,     6,   248,     8,     9,    -1,    11,    -1,
      13,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    -1,   272,   273,
      -1,    -1,    -1,   277,    -1,    -1,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    65,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,     3,   323,
       5,     6,    -1,     8,     9,    -1,    11,   331,    13,    14,
     334,    -1,    17,    18,    -1,    20,    -1,    -1,   342,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   356,    -1,    39,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    45,    -1,    -1,    62,    49,    -1,
      65,    52,    53,    54,    -1,    70,    71,    72,   392,    60,
      75,    76,    -1,   397,    65,    -1,    67,    -1,   402,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,   413,
     414,    -1,    -1,    -1,     3,    -1,     5,     6,    -1,     8,
       9,    -1,    11,    -1,    13,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   453,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    15,    16,    75,    76,    -1,    -1,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,    70,
      71,    72,    15,    16,    75,    76,    -1,    -1,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    -1,    -1,    70,    71,    72,
      15,    16,    75,    76,    -1,    -1,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    59,    -1,    -1,    -1,    15,    16,
      65,    66,    67,    68,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    58,    59,    -1,    -1,    -1,    15,    16,    65,    66,
      67,    68,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    -1,    -1,    -1,    15,    16,    65,    66,    67,    68,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,
      -1,    -1,    15,    16,    65,    66,    67,    68,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    15,    16,    -1,    -1,
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
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    15,    16,    -1,    -1,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    15,    16,    -1,    -1,    19,    -1,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    -1,    59,    -1,
      -1,    15,    16,    -1,    65,    66,    67,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    59,    -1,    -1,    15,    16,
      -1,    65,    66,    67,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    15,    16,    -1,    -1,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    -1,    59,    -1,    -1,    15,    16,
      -1,    65,    66,    67,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    -1,    15,    16,    -1,    65,    66,
      67,    21,    22,    23,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,
      -1,    -1,    15,    16,    -1,    65,    66,    67,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    -1,    15,    16,    -1,
      65,    66,    67,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    59,    -1,    -1,    15,    16,    -1,    65,    66,    67,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,
      -1,    15,    16,    -1,    65,    66,    67,    21,    22,    23,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
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
      -1,    39,    40,    41,    42,    43,    44,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    -1,    55,    56,    65,
      66,    67,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    75,    76,    39,
      40,    41,    42,    43,    44,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    -1,    55,    56,    -1,    -1,    -1,
      -1,    -1,    62,    55,    56,    65,    -1,    -1,    -1,    -1,
      70,    71,    72,    65,    -1,    75,    76,    -1,    70,    71,
      72,    -1,    -1,    75,    76,    39,    40,    41,    42,    43,
      44,    -1,    -1,    39,    40,    41,    42,    43,    44,    -1,
      -1,    55,    56,    -1,    -1,    -1,    60,    -1,    -1,    55,
      56,    65,    -1,    -1,    60,    -1,    70,    71,    72,    65,
      -1,    75,    76,    -1,    70,    71,    72,    -1,    -1,    75,
      76,    39,    40,    41,    42,    43,    44,    -1,    -1,    39,
      40,    41,    42,    43,    44,    -1,    -1,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    65,    -1,    75,    76,    -1,
      70,    71,    72,    -1,    -1,    75,    76,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    75,    76,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,
      -1,    70,    71,    72,    73,    74,    75,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    65,    -1,    67,
      -1,    -1,    70,    71,    72,    73,    74,    75,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      67,    -1,    -1,    70,    71,    72,    73,    74,    75,    46,
      -1,    48,    49,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,
      67,    -1,    -1,    70,    71,    72,    73,    74,    75,    46,
      -1,    48,    49,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,
      67,    -1,    -1,    70,    71,    72,    73,    74,    75,    46,
      -1,    48,    49,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,
      67,    -1,    -1,    70,    71,    72,    73,    74,    75,    46,
      -1,    48,    49,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,
      67,    -1,    -1,    70,    71,    72,    73,    74,    75,    49,
      -1,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,    -1,
      70,    71,    72,    73,    74,    75,    49,    -1,    -1,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    -1,    67,    -1,    -1,    70,    71,    72,
      73,    74,    75,    49,    -1,    -1,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,
      -1,    67,    -1,    -1,    70,    71,    72,    73,    74,    75,
      49,    -1,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,
      -1,    70,    71,    72,    73,    74,    75,    49,    -1,    -1,
      52,    53,    54,    -1,    49,    -1,    -1,    52,    53,    54,
      -1,    56,    -1,    65,    -1,    67,    61,    -1,    70,    71,
      72,    73,    74,    75,    -1,    70,    71,    72,    73,    74,
      75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,   182,   185,    39,     0,    46,    38,   183,   186,
      39,    42,    56,    61,   187,   189,    15,    24,    25,    26,
     100,   101,   102,   105,   110,   119,   120,   184,    46,   189,
     187,   188,   189,    39,    56,    93,    39,    56,   106,   108,
      39,    56,   111,   113,   114,    56,   103,   108,    46,   183,
      46,    57,    59,    92,    93,   115,    15,    16,    19,    21,
      22,    23,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    39,    55,    56,    57,    59,    65,    66,    67,
      78,    79,    82,    83,    84,    85,    86,    90,    91,    94,
      95,    96,    97,    98,    99,   108,    39,   106,   107,    39,
      58,    68,    78,    59,    68,    78,   115,   111,   112,   103,
     104,    68,    78,   184,   188,   108,   116,   117,    62,   150,
      78,    92,    92,    62,    78,    55,    78,    59,    62,    56,
      61,    21,    78,    39,    40,    41,    42,    43,    44,    55,
      56,    60,    65,    70,    71,    72,    75,    76,   121,   122,
     123,   130,   131,   132,   133,   134,    78,    78,    66,    78,
      78,    97,    59,    81,    57,    58,    58,    46,    19,    78,
      92,    46,    57,    39,   109,   121,    68,    39,    78,    78,
      46,    57,    46,    57,   109,    68,    97,    58,    60,     3,
       5,     6,     8,     9,    11,    13,    14,    17,    18,    20,
      39,    63,   100,   108,   109,   118,   121,   135,   136,   137,
     138,   139,   140,   141,   142,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   160,   166,   172,   181,
     150,    96,    21,    78,    78,    39,    65,    79,    87,    88,
      89,   108,    57,    94,    39,    78,    57,   121,    78,    49,
      52,    53,    54,    60,    65,    67,    70,    71,    72,    73,
      74,    75,    56,    59,    61,   124,   125,   126,   127,   128,
     122,    97,    78,    78,    80,    57,    95,    78,   150,   107,
      58,   109,   112,   104,   109,    60,   117,    39,    62,    39,
     121,   137,   155,   156,   161,   162,   121,   137,    39,    12,
     108,   109,   121,   137,   173,   174,   175,   176,   180,    39,
     121,   109,   121,    45,    47,    50,    68,   143,    48,    46,
      55,    63,    63,    78,    60,    39,    79,    81,    63,    46,
      42,    78,    46,    56,    78,    57,    58,    57,   121,   121,
     121,   121,    78,   121,   121,   121,   121,   121,   121,   121,
     121,    39,    55,    56,    57,    65,    78,   109,   129,    45,
     121,    39,    56,    58,    60,   121,     4,     7,   167,   168,
     169,    47,    46,    39,   121,   156,   161,    62,    62,   123,
     150,    46,   121,    47,    68,   150,    46,   135,   109,   109,
     151,   121,    78,    81,    64,    42,    57,    78,    94,    46,
      46,    56,    78,    57,    19,    58,    19,    58,    57,    60,
     121,    45,    60,    78,    78,   108,   109,   121,   170,   171,
     168,    63,    45,    62,    62,     4,     7,    63,   157,   158,
     159,     4,     7,   163,   164,   165,    61,    10,   121,    12,
      12,   121,   174,   177,    87,    46,    57,    58,    57,    94,
      46,    46,    56,    78,    58,   109,    58,    45,    60,    60,
     121,    57,    47,    68,   151,    63,   158,   164,   109,   158,
      63,    45,    80,   164,    63,    45,    56,   150,   152,   150,
     121,   121,    46,    46,    57,    46,    57,    58,    57,    94,
      46,    19,    58,   121,    45,    60,   121,   171,   171,    63,
      63,   151,   151,    25,    10,   137,   178,   179,    46,    46,
      57,    46,    57,    58,    58,    60,   121,    57,   150,   152,
      46,    46,    57,    60,    46
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
        case 141:

/* Line 1464 of yacc.c  */
#line 309 "go_yacc.y"
    {printf("Accept");;}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 312 "go_yacc.y"
    {printf("Accept");;}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 313 "go_yacc.y"
    {printf("Accept");;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 314 "go_yacc.y"
    {printf("Accept");;}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 315 "go_yacc.y"
    {printf("Accept");;}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 316 "go_yacc.y"
    {printf("Accept");;}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 399 "go_yacc.y"
    {printf("SimpleStmt1 ");;}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 400 "go_yacc.y"
    {printf("SimpleStmt2 ");;}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 401 "go_yacc.y"
    {printf("SimpleStmt3 ");;}
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 402 "go_yacc.y"
    {printf("SimpleStmt4 ");;}
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 403 "go_yacc.y"
    {printf("SimpleStmt5 ");;}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 436 "go_yacc.y"
    {printf("block1 ");;}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 437 "go_yacc.y"
    {printf("block2 ");;}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 447 "go_yacc.y"
    {printf("[if1] ");;}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 448 "go_yacc.y"
    {printf("[if2] ");;}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 449 "go_yacc.y"
    {printf("[if3] ");;}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 452 "go_yacc.y"
    {printf("[switch1] ");;}
    break;

  case 236:

/* Line 1464 of yacc.c  */
#line 453 "go_yacc.y"
    {printf("[switch2] ");;}
    break;

  case 241:

/* Line 1464 of yacc.c  */
#line 462 "go_yacc.y"
    {printf("[SimpleStmtBrakets] ");;}
    break;

  case 244:

/* Line 1464 of yacc.c  */
#line 470 "go_yacc.y"
    {printf("[ExprCaseClause] ");;}
    break;

  case 247:

/* Line 1464 of yacc.c  */
#line 476 "go_yacc.y"
    {printf("101010 ");;}
    break;

  case 248:

/* Line 1464 of yacc.c  */
#line 477 "go_yacc.y"
    {printf("[DEFAULT1] ");;}
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 487 "go_yacc.y"
    {printf("[!]");;}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 498 "go_yacc.y"
    {printf("[case] ");;}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 499 "go_yacc.y"
    {printf("[DEFAULT2] ");;}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 510 "go_yacc.y"
    {printf("[CommClause] ");;}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 518 "go_yacc.y"
    {printf("[DEFAULT3] ");;}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 521 "go_yacc.y"
    {printf("qwe ");;}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 522 "go_yacc.y"
    {printf("asd ");;}
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 529 "go_yacc.y"
    {printf("a ");;}
    break;

  case 271:

/* Line 1464 of yacc.c  */
#line 532 "go_yacc.y"
    {printf("b ");;}
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 533 "go_yacc.y"
    {printf("c ");;}
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 534 "go_yacc.y"
    {printf("d ");;}
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 535 "go_yacc.y"
    {printf("ttt ");;}
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 538 "go_yacc.y"
    {printf("ad ");;}
    break;

  case 276:

/* Line 1464 of yacc.c  */
#line 541 "go_yacc.y"
    {printf("bc ");;}
    break;



/* Line 1464 of yacc.c  */
#line 2643 "go_yacc.tab.c"
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
#line 600 "go_yacc.y"


void yyerror(char *s) {
    printf("\nline %d: %s \n", lineno, s);
}

int main() {
    yyparse();
}
