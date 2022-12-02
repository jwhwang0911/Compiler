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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   876

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNRULES -- Number of states.  */
#define YYNSTATES  187

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
       2,     2,     2,    71,     2,     2,     2,    58,    59,     2,
      65,    66,    56,    60,    67,    61,    64,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      72,    68,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,    62,    74,    75,     2,     2,     2,
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
       0,     0,     3,     7,     9,    13,    15,    17,    21,    25,
      29,    33,    37,    41,    45,    49,    53,    57,    61,    65,
      67,    70,    73,    75,    77,    80,    83,    86,    89,    92,
      96,    99,   103,   109,   114,   119,   123,   131,   138,   143,
     147,   150,   154,   157,   160,   162,   166,   169,   172,   174,
     180,   185,   190,   194,   196,   198,   202,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   222,   224,   226,   228,
     230,   232,   234,   236,   238,   240,   242,   244,   246,   248,
     250,   252,   254,   256,   259,   261,   264,   267,   270,   274,
     276,   280,   282,   285,   288,   292,   298,   301,   305,   309,
     314,   318,   322,   325,   328,   332,   335,   340,   344,   348,
     354,   357,   359,   362,   366,   369
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      94,     0,    -1,    77,    67,    39,    -1,    39,    -1,    78,
      67,    79,    -1,    79,    -1,    80,    -1,    79,    52,    79,
      -1,    79,    53,    79,    -1,    79,    54,    79,    -1,    79,
      60,    79,    -1,    79,    61,    79,    -1,    79,    62,    79,
      -1,    79,    63,    79,    -1,    79,    56,    79,    -1,    79,
      57,    79,    -1,    79,    58,    79,    -1,    79,    49,    79,
      -1,    79,    59,    79,    -1,    81,    -1,    93,    80,    -1,
      56,    80,    -1,    89,    -1,    82,    -1,    81,    83,    -1,
      81,    84,    -1,    81,    85,    -1,    81,    86,    -1,    81,
      87,    -1,    94,    64,    39,    -1,    64,    39,    -1,    69,
      79,    70,    -1,    69,    79,    45,    79,    70,    -1,    69,
      79,    45,    70,    -1,    69,    45,    79,    70,    -1,    69,
      45,    70,    -1,    69,    79,    45,    79,    45,    79,    70,
      -1,    69,    45,    79,    45,    79,    70,    -1,    64,    65,
      94,    66,    -1,    65,    88,    66,    -1,    65,    66,    -1,
      78,    19,    67,    -1,    78,    19,    -1,    78,    67,    -1,
      78,    -1,    94,    19,    67,    -1,    94,    19,    -1,    94,
      67,    -1,    94,    -1,    94,    67,    78,    19,    67,    -1,
      94,    67,    78,    19,    -1,    94,    67,    78,    67,    -1,
      94,    67,    78,    -1,    91,    -1,    90,    -1,    65,    79,
      66,    -1,    39,    -1,    92,    -1,    40,    -1,    44,    -1,
      41,    -1,    43,    -1,    42,    -1,    60,    -1,    61,    -1,
      71,    -1,    63,    -1,    59,    -1,    55,    -1,    31,    -1,
      34,    -1,    28,    -1,    32,    -1,    36,    -1,    35,    -1,
      95,    -1,   100,    -1,   101,    -1,   102,    -1,   105,    -1,
     106,    -1,   107,    -1,   108,    -1,    15,    96,    -1,    97,
      -1,    97,    94,    -1,    97,    97,    -1,    65,    66,    -1,
      65,    98,    66,    -1,    99,    -1,    99,    67,    99,    -1,
      94,    -1,    77,    94,    -1,    19,    94,    -1,    77,    19,
      94,    -1,    22,    69,    94,    70,    94,    -1,    21,    94,
      -1,    21,    55,    94,    -1,    72,    55,    94,    -1,    23,
      73,   103,    74,    -1,    23,    73,    74,    -1,   104,    46,
     103,    -1,   104,    46,    -1,    77,    94,    -1,    77,    94,
      42,    -1,    56,    94,    -1,    69,    79,    70,    94,    -1,
      69,    70,    94,    -1,    16,    73,    74,    -1,    16,    73,
     109,    46,    74,    -1,    39,    96,    -1,   110,    -1,    94,
     110,    -1,    75,    94,   110,    -1,    62,    94,    -1,    62,
      75,    94,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    88,    89,    93,    94,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   173,
     174,   175,   179,   181,   182,   183,   184,   185,   186,   190,
     195,   196,   198,   199,   200,   201,   202,   203,   205,   206,
     207,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   225,   226,   227,   230,   234,   240,   241,
     242,   243,   244,   251,   251,   251,   251,   251,   251,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   282,   285,   286,   287,   291,   292,   296,
     297,   299,   300,   301,   302,   304,   306,   306,   306,   308,
     309,   312,   313,   316,   317,   321,   323,   325,   327,   328,
     330,   330,   333,   334,   335,   336
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
  "COMPARE", "CHANNELOP", "'*'", "'/'", "'%'", "'&'", "'+'", "'-'", "'|'",
  "'^'", "'.'", "'('", "')'", "','", "'='", "'['", "']'", "'!'", "'<'",
  "'{'", "'}'", "'~'", "$accept", "IdentifierList", "ExpressionList",
  "Expression", "UnaryExpr", "PrimaryExpr", "MethodExpr", "Selector",
  "Index", "Slice", "TypeAssertion", "Arguments", "ArgumentsLoop",
  "Operand", "OperandName", "Literal", "BasicLit", "unary_op", "Type",
  "FunctionType", "Signature", "Parameters", "ParameterList",
  "ParameterDecl", "MapType", "ChannelType", "StructType",
  "StructTypeLoop", "FieldDecl", "PointerType", "ArrayType", "SliceType",
  "InterfaceType", "InterfaceElem", "TypeElem", 0
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
     305,   306,   307,   308,   309,   310,    42,    47,    37,    38,
      43,    45,   124,    94,    46,    40,    41,    44,    61,    91,
      93,    33,    60,   123,   125,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    77,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    80,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    82,
      83,    84,    85,    85,    85,    85,    85,    85,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    89,    90,    91,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    95,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,   100,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   106,   107,   108,   108,
     109,   109,   110,   110,   110,   110
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     1,     1,     2,     2,     2,     2,     2,     3,
       2,     3,     5,     4,     4,     3,     7,     6,     4,     3,
       2,     3,     2,     2,     1,     3,     2,     2,     1,     5,
       4,     4,     3,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     2,     2,     3,     1,
       3,     1,     2,     2,     3,     5,     2,     3,     3,     4,
       3,     3,     2,     2,     3,     2,     4,     3,     3,     5,
       2,     1,     2,     3,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    71,    69,    72,    70,
      74,    73,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,     0,    83,    84,     0,     0,    96,
       0,     0,   105,    56,    58,    60,    62,    61,    59,    68,
       0,    67,    63,    64,    66,     0,     0,    65,     0,     6,
      19,    23,    22,    54,    53,    57,     0,     0,     0,     1,
       0,     3,    87,     0,    91,     0,    89,    85,    86,     0,
       0,   108,     0,     0,     0,   111,    97,     0,   100,     0,
       0,     0,    21,   105,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,    26,    27,    28,    20,     0,    98,
      93,     0,     0,    92,    88,     0,   110,     0,   114,     0,
     112,     0,     0,   103,    99,   102,    55,    17,     7,     8,
       9,    14,    15,    16,    18,    10,    11,    12,    13,   106,
      30,     0,    40,    44,     5,     0,    48,     0,     0,    29,
      94,     2,    90,   115,   113,   109,    95,   104,   101,     0,
      42,    43,    39,    46,    47,    35,     0,     0,    31,    38,
      41,     4,    45,    52,     0,    34,    33,     0,    50,    51,
       0,     0,    32,    49,    37,     0,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    63,   143,   144,    49,    50,    51,   102,   103,   104,
     105,   106,   145,    52,    53,    54,    55,    56,    57,    16,
      25,    26,    65,    66,    17,    18,    19,    80,    81,    20,
      21,    22,    23,    74,    75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -99
static const yytype_int16 yypact[] =
{
     694,   -59,   -55,   616,   -48,   -44,   -99,   -99,   -99,   -99,
     -99,   -99,   694,   217,   -24,    37,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   535,   -99,   642,   -12,   694,   -99,
     694,   -34,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     477,   -99,   -99,   -99,   -99,   477,   694,   -99,   753,   -99,
     -39,   -99,   -99,   -99,   -99,   -99,   477,   -26,   694,   -99,
     694,   -99,   -99,   561,   -99,   -27,   -25,   -99,   -99,   -59,
     194,   -99,   694,   107,    -5,   -99,   -99,   -23,   -99,   668,
     -31,    -1,   -99,   -26,   798,   -99,   477,   477,   477,   477,
     477,   477,   477,   477,   477,   477,   477,   477,   694,   -32,
     269,   321,   -99,   -99,   -99,   -99,   -99,   -99,     7,   -99,
     -99,   694,    10,   -99,   -99,   587,   -99,   694,   -99,   107,
     -99,   -22,   694,     9,   -99,    15,   -99,    39,     2,   -99,
     -38,    39,    39,    39,    39,   -18,   -18,   -18,   -18,   -99,
     -99,   694,   -99,    -6,   813,    -8,   -11,   373,   699,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,    -7,
      -3,   477,   -99,     0,   477,   -99,   719,   425,   -99,   -99,
     -99,   813,   -99,    -2,   477,   -99,   -99,   738,     1,   477,
     768,   477,   -99,   -99,   -99,   783,   -99
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -99,   -30,   -98,   -13,   -28,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,    86,   -99,
       3,    43,   -99,   -45,   -99,   -99,   -99,   -54,   -99,   -99,
     -99,   -99,   -99,   -99,   -71
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      48,    79,   120,     1,     2,    61,    24,   140,   163,     3,
       4,     5,    82,   160,    87,    88,     6,   178,    27,     7,
       8,    30,     9,    10,    11,    99,   100,    69,   107,    31,
     101,    58,    84,   141,    87,    88,    89,    59,   108,   114,
      78,   121,   115,   124,    12,   125,   149,   122,   154,   151,
      70,   157,   155,   108,    61,    88,   164,    13,   162,   169,
      14,   161,    71,    72,   170,   179,   173,   172,   183,    68,
     152,   158,   116,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,     0,    15,     0,   148,    29,
       0,    87,    88,    89,     0,    79,     0,     0,    32,    94,
      95,    96,    97,     0,     0,     0,     0,     0,     0,     0,
      64,     0,    67,    73,    76,     0,    77,     0,     0,     0,
       0,     0,     1,     2,     0,     0,    83,     0,     3,     4,
       5,     0,    85,     0,   166,     6,     0,     0,     7,     8,
       0,     9,    10,    11,   109,     0,   110,     0,   171,   113,
       0,     0,     0,     0,   177,     0,   118,     0,   119,    73,
       0,   180,     0,    12,     0,   123,   171,     0,   185,    70,
       0,     0,     0,     0,     0,     0,    13,     0,     0,    14,
       0,     0,    72,     0,   139,     0,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,     0,     0,
       0,    64,     0,   153,     0,    73,     0,     0,   156,     1,
       2,     0,     0,     0,     0,     3,     4,     5,     0,     0,
       0,     0,     6,     0,     0,     7,     8,   159,     9,    10,
      11,     0,     1,     2,     0,     0,     0,     0,     3,     4,
       5,     0,     0,     0,     0,     6,     0,     0,     7,     8,
      12,     9,    10,    11,     0,     0,    33,    34,    35,    36,
      37,    38,     0,    13,     0,     0,    14,     0,     0,   117,
       0,     0,    39,    40,     0,     0,    41,    42,    43,     0,
      44,     0,    45,     0,     1,     2,    13,    46,    47,    14,
       3,     4,     5,     0,     0,     0,     0,     6,     0,     0,
       7,     8,     0,     9,    10,    11,     0,     0,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,     0,     0,    41,    42,
      43,     0,    44,     0,    45,   142,     1,     2,    13,     0,
      47,    14,     3,     4,     5,     0,     0,     0,     0,     6,
       0,     0,     7,     8,     0,     9,    10,    11,     0,     0,
      33,    34,    35,    36,    37,    38,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,     0,     0,
      41,    42,    43,     0,    44,     0,    45,     0,     1,     2,
      13,     0,    47,    14,     3,     4,     5,     0,     0,     0,
       0,     6,     0,     0,     7,     8,     0,     9,    10,    11,
       0,     0,    33,    34,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
       0,     0,    41,    42,    43,     0,    44,     0,    45,     0,
       1,     2,    13,   165,    47,    14,     3,     4,     5,     0,
       0,     0,     0,     6,     0,     0,     7,     8,     0,     9,
      10,    11,     0,     0,    33,    34,    35,    36,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,    41,    42,    43,     0,    44,     0,
      45,     0,     1,     2,    13,   176,    47,    14,     3,     4,
       5,     0,     0,     0,     0,     6,     0,     0,     7,     8,
       0,     9,    10,    11,     0,     0,    33,    34,    35,    36,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,    41,    42,    43,     0,
      44,     0,    45,     0,     0,     0,    13,     0,    47,    14,
       1,     2,     0,     0,    60,     0,     3,     4,     5,     0,
       0,     0,     0,     6,     0,     0,     7,     8,     0,     9,
      10,    11,     0,     0,    61,     0,     1,     2,     0,     0,
     111,     0,     3,     4,     5,     0,     0,     0,     0,     6,
       0,    12,     7,     8,     0,     9,    10,    11,     0,     0,
       0,    62,     1,     2,    13,     0,    60,    14,     3,     4,
       5,     0,     0,     0,     0,     6,     0,    12,     7,     8,
       0,     9,    10,    11,     0,     0,    61,     0,   112,     0,
      13,     1,     2,    14,     0,     0,     0,     3,     4,     5,
       0,     0,     0,    12,     6,     0,     0,     7,     8,     0,
       9,    10,    11,     0,     0,     0,    13,     1,     2,    14,
       0,     0,     0,     3,     4,     5,     0,     0,     0,     0,
       6,    28,    12,     7,     8,     0,     9,    10,    11,     0,
       0,     0,     0,     1,     2,    13,     0,     0,    14,     3,
       4,     5,     0,     0,     0,     0,     6,     0,    12,     7,
       8,     0,     9,    10,    11,     0,     0,    24,     0,     1,
       2,    13,     0,     0,    14,     3,     4,     5,     0,     0,
       0,     0,     6,     0,    12,     7,     8,     0,     9,    10,
      11,     0,     0,     0,     0,   112,     0,    13,     0,     0,
      14,     0,     0,     0,   167,     0,     0,     0,    86,     0,
      12,    87,    88,    89,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    13,   174,     0,    14,     0,    86,   168,
       0,    87,    88,    89,     0,    90,    91,    92,    93,    94,
      95,    96,    97,   181,     0,     0,     0,    86,     0,   175,
      87,    88,    89,     0,    90,    91,    92,    93,    94,    95,
      96,    97,    86,     0,     0,    87,    88,    89,   182,    90,
      91,    92,    93,    94,    95,    96,    97,    86,     0,     0,
      87,    88,    89,    98,    90,    91,    92,    93,    94,    95,
      96,    97,    86,     0,     0,    87,    88,    89,   184,    90,
      91,    92,    93,    94,    95,    96,    97,    86,     0,     0,
      87,    88,    89,   186,    90,    91,    92,    93,    94,    95,
      96,    97,    86,     0,   126,    87,    88,    89,     0,    90,
      91,    92,    93,    94,    95,    96,    97
};

static const yytype_int16 yycheck[] =
{
      13,    31,    73,    15,    16,    39,    65,    39,    19,    21,
      22,    23,    40,    19,    52,    53,    28,    19,    73,    31,
      32,    69,    34,    35,    36,    64,    65,    39,    56,    73,
      69,    55,    45,    65,    52,    53,    54,     0,    64,    66,
      74,    46,    67,    74,    56,    46,    39,    70,   119,    39,
      62,    42,    74,    64,    39,    53,    67,    69,    66,    66,
      72,    67,    74,    75,    67,    67,   164,    67,    67,    26,
     115,   125,    69,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,     0,    -1,   101,     3,
      -1,    52,    53,    54,    -1,   125,    -1,    -1,    12,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    26,    27,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    40,    -1,    21,    22,
      23,    -1,    46,    -1,   147,    28,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    58,    -1,    60,    -1,   161,    63,
      -1,    -1,    -1,    -1,   167,    -1,    70,    -1,    72,    73,
      -1,   174,    -1,    56,    -1,    79,   179,    -1,   181,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      -1,    -1,    75,    -1,    98,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
      -1,   115,    -1,   117,    -1,   119,    -1,    -1,   122,    15,
      16,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    32,   141,    34,    35,
      36,    -1,    15,    16,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,
      56,    34,    35,    36,    -1,    -1,    39,    40,    41,    42,
      43,    44,    -1,    69,    -1,    -1,    72,    -1,    -1,    75,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    61,    -1,
      63,    -1,    65,    -1,    15,    16,    69,    70,    71,    72,
      21,    22,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    32,    -1,    34,    35,    36,    -1,    -1,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    60,
      61,    -1,    63,    -1,    65,    66,    15,    16,    69,    -1,
      71,    72,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    32,    -1,    34,    35,    36,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,
      59,    60,    61,    -1,    63,    -1,    65,    -1,    15,    16,
      69,    -1,    71,    72,    21,    22,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    32,    -1,    34,    35,    36,
      -1,    -1,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    59,    60,    61,    -1,    63,    -1,    65,    -1,
      15,    16,    69,    70,    71,    72,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    31,    32,    -1,    34,
      35,    36,    -1,    -1,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    60,    61,    -1,    63,    -1,
      65,    -1,    15,    16,    69,    70,    71,    72,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    -1,    -1,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    -1,    59,    60,    61,    -1,
      63,    -1,    65,    -1,    -1,    -1,    69,    -1,    71,    72,
      15,    16,    -1,    -1,    19,    -1,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    31,    32,    -1,    34,
      35,    36,    -1,    -1,    39,    -1,    15,    16,    -1,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
      -1,    56,    31,    32,    -1,    34,    35,    36,    -1,    -1,
      -1,    66,    15,    16,    69,    -1,    19,    72,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    -1,    56,    31,    32,
      -1,    34,    35,    36,    -1,    -1,    39,    -1,    67,    -1,
      69,    15,    16,    72,    -1,    -1,    -1,    21,    22,    23,
      -1,    -1,    -1,    56,    28,    -1,    -1,    31,    32,    -1,
      34,    35,    36,    -1,    -1,    -1,    69,    15,    16,    72,
      -1,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      28,    55,    56,    31,    32,    -1,    34,    35,    36,    -1,
      -1,    -1,    -1,    15,    16,    69,    -1,    -1,    72,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    -1,    56,    31,
      32,    -1,    34,    35,    36,    -1,    -1,    65,    -1,    15,
      16,    69,    -1,    -1,    72,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    -1,    56,    31,    32,    -1,    34,    35,
      36,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,
      72,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,
      56,    52,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    69,    45,    -1,    72,    -1,    49,    70,
      -1,    52,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    45,    -1,    -1,    -1,    49,    -1,    70,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    49,    -1,    -1,    52,    53,    54,    70,    56,
      57,    58,    59,    60,    61,    62,    63,    49,    -1,    -1,
      52,    53,    54,    70,    56,    57,    58,    59,    60,    61,
      62,    63,    49,    -1,    -1,    52,    53,    54,    70,    56,
      57,    58,    59,    60,    61,    62,    63,    49,    -1,    -1,
      52,    53,    54,    70,    56,    57,    58,    59,    60,    61,
      62,    63,    49,    -1,    66,    52,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    21,    22,    23,    28,    31,    32,    34,
      35,    36,    56,    69,    72,    94,    95,   100,   101,   102,
     105,   106,   107,   108,    65,    96,    97,    73,    55,    94,
      69,    73,    94,    39,    40,    41,    42,    43,    44,    55,
      56,    59,    60,    61,    63,    65,    70,    71,    79,    80,
      81,    82,    89,    90,    91,    92,    93,    94,    55,     0,
      19,    39,    66,    77,    94,    98,    99,    94,    97,    39,
      62,    74,    75,    94,   109,   110,    94,    94,    74,    77,
     103,   104,    80,    94,    79,    94,    49,    52,    53,    54,
      56,    57,    58,    59,    60,    61,    62,    63,    70,    64,
      65,    69,    83,    84,    85,    86,    87,    80,    64,    94,
      94,    19,    67,    94,    66,    67,    96,    75,    94,    94,
     110,    46,    70,    94,    74,    46,    66,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    94,
      39,    65,    66,    78,    79,    88,    94,    45,    79,    39,
      94,    39,    99,    94,   110,    74,    94,    42,   103,    94,
      19,    67,    66,    19,    67,    70,    79,    45,    70,    66,
      67,    79,    67,    78,    45,    70,    70,    79,    19,    67,
      79,    45,    70,    67,    70,    79,    70
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
        case 22:

/* Line 1464 of yacc.c  */
#line 179 ".\\go_yacc.y"
    {printf("Accept");}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 182 ".\\go_yacc.y"
    {printf("Accept");}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 183 ".\\go_yacc.y"
    {printf("Accept");}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 184 ".\\go_yacc.y"
    {printf("Accept");}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 185 ".\\go_yacc.y"
    {printf("Accept");}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 186 ".\\go_yacc.y"
    {printf("Accept");}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 254 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 255 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 71:

/* Line 1464 of yacc.c  */
#line 256 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 257 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 258 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 259 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 260 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 261 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 262 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 263 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 264 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 265 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 266 ".\\go_yacc.y"
    {printf("Accepted");}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 267 ".\\go_yacc.y"
    {printf("Accepted");}
    break;



/* Line 1464 of yacc.c  */
#line 1904 "y.tab.c"
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
#line 534 ".\\go_yacc.y"


void yyerror(char *s) {
    printf("\nline %d: %s \n", lineno, s);
}

int main() {
    yyparse();
}
