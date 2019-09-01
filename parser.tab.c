/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include<bits/stdc++.h>
#include "ast.h"
using namespace std;
void yyerror(const char *);
FILE *fileout;  
extern node *root;                                                     
extern FILE *yyin;
int yylex();
extern char * yytext; 

#line 78 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    HTML = 258,
    HTMLE = 259,
    HEAD = 260,
    HEADE = 261,
    A = 262,
    BODY = 263,
    BODYE = 264,
    TITLE = 265,
    TITLEE = 266,
    FONT = 267,
    AE = 268,
    FONTE = 269,
    CENTER = 270,
    CENTERE = 271,
    IMG = 272,
    BR = 273,
    P = 274,
    PE = 275,
    H1 = 276,
    H1E = 277,
    H2 = 278,
    H2E = 279,
    H3 = 280,
    H3E = 281,
    H4 = 282,
    H4E = 283,
    UL = 284,
    ULE = 285,
    DL = 286,
    DLE = 287,
    DT = 288,
    DTE = 289,
    DD = 290,
    DDE = 291,
    DIV = 292,
    DIVE = 293,
    U = 294,
    UE = 295,
    B = 296,
    BE = 297,
    I = 298,
    IE = 299,
    EM = 300,
    EME = 301,
    TT = 302,
    TTE = 303,
    STRONG = 304,
    STRONGE = 305,
    SMALL = 306,
    SMALLE = 307,
    SUB = 308,
    SUBE = 309,
    SUP = 310,
    SUPE = 311,
    TABLE = 312,
    TABLEE = 313,
    CAPTION = 314,
    TH = 315,
    CAPTIONE = 316,
    THE = 317,
    TR = 318,
    TRE = 319,
    TD = 320,
    TDE = 321,
    LI = 322,
    LIE = 323,
    OL = 324,
    OLE = 325,
    TEXT = 326,
    GREEK = 327,
    HREF = 328,
    SIZE = 329,
    IMGSRC = 330,
    IMGWIDTH = 331,
    IMGHEIGHT = 332,
    FIGURE = 333,
    FIGUREE = 334,
    FIGCAPTION = 335,
    FIGCAPTIONE = 336,
    BORDER = 337,
    ATITLE = 338,
    ANAME = 339,
    COMMENT = 340,
    IMGFIGCAPTION = 341
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "parser.y" /* yacc.c:355  */

char *s;
struct node *node;

#line 210 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2032

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    68,    75,    84,    89,    97,   113,   124,
     134,   145,   158,   168,   179,   191,   202,   213,   224,   236,
     247,   258,   269,   280,   291,   304,   315,   326,   337,   348,
     359,   370,   381,   392,   402,   416,   428,   438,   449,   460,
     472,   483,   490,   497,   505,   510,   521,   525,   529,   532,
     539,   555,   556,   558,   559,   563,   580,   583,   588,   593,
     601,   610
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HTML", "HTMLE", "HEAD", "HEADE", "A",
  "BODY", "BODYE", "TITLE", "TITLEE", "FONT", "AE", "FONTE", "CENTER",
  "CENTERE", "IMG", "BR", "P", "PE", "H1", "H1E", "H2", "H2E", "H3", "H3E",
  "H4", "H4E", "UL", "ULE", "DL", "DLE", "DT", "DTE", "DD", "DDE", "DIV",
  "DIVE", "U", "UE", "B", "BE", "I", "IE", "EM", "EME", "TT", "TTE",
  "STRONG", "STRONGE", "SMALL", "SMALLE", "SUB", "SUBE", "SUP", "SUPE",
  "TABLE", "TABLEE", "CAPTION", "TH", "CAPTIONE", "THE", "TR", "TRE", "TD",
  "TDE", "LI", "LIE", "OL", "OLE", "TEXT", "GREEK", "HREF", "SIZE",
  "IMGSRC", "IMGWIDTH", "IMGHEIGHT", "FIGURE", "FIGUREE", "FIGCAPTION",
  "FIGCAPTIONE", "BORDER", "ATITLE", "ANAME", "COMMENT", "IMGFIGCAPTION",
  "$accept", "doc_start", "content_head", "content_title", "content_body",
  "alltags", "a_tag", "a_attr", "img_tag", "img_attr", "table_tag",
  "table_border", "table_caption", "table_data", "tr_data", "text", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -72

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-72)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    12,    18,   -72,    16,   -72,    -9,   -72,    21,   -72,
     -72,    14,   112,   -45,   -72,    -8,   -72,   -72,   -72,   -47,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -53,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -71,   -72,   184,   -54,   -45,   253,   322,
     391,   460,   529,   598,   667,   736,   805,   874,   943,  1012,
    1081,  1150,  1219,  1288,  1357,  1426,  1495,   -72,   -31,  1564,
    1633,   -45,  1702,  1771,   -45,   -45,   -45,   -45,   -72,   -72,
     -72,  1846,  1915,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -41,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -30,   -48,   -45,   -45,   -45,   -45,
     -45,   -72,   -72,   -72,   -56,   -72,   -72,   -72,   -57,   -55,
     -72,   -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,    61,     0,     1,     6,    61,     0,    61,
      60,     0,     0,    39,     2,     0,     3,    44,     7,     0,
      61,    49,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    52,    61,    61,    61,    61,    61,    61,    61,
      61,    61,     5,    61,    61,     0,    45,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    54,     0,
       0,    36,     0,     0,    37,    14,    34,    35,    41,    42,
      43,     0,     0,    61,    46,    47,    48,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,     0,    56,    61,    61,
      61,    61,    40,    61,     9,     8,    10,    11,    12,    13,
      26,    29,    30,    31,    25,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,     0,    27,    28,    32,    33,
      15,    53,    50,    59,     0,    61,    55,    61,     0,     0,
      57,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,   -72,   -72,  1978,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,    -3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,    11,     8,    12,    49,    53,    50,    56,
      51,    78,   117,   145,   154,    13
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       6,     9,    88,    52,   155,   160,    15,     1,   156,   157,
     152,   161,    89,    90,    10,   153,    10,     3,     5,    57,
      16,    94,    95,    96,     7,    14,    10,    54,   116,    77,
     144,   151,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    84,    85,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,     0,     0,   146,   147,   148,   149,    17,
     150,    18,     0,     0,    19,     0,     0,    20,     0,    21,
      22,    23,     0,    24,     0,    25,     0,    26,     0,    27,
       0,    28,     0,    29,     0,    30,     0,    31,     0,    32,
       0,    33,   158,    34,   159,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,     0,     0,    45,     0,     0,     0,     0,     0,
      46,    17,    47,     0,     0,     0,    19,    48,     0,    20,
      93,    21,    22,    23,     0,    24,     0,    25,     0,    26,
       0,    27,     0,    28,     0,    29,     0,    30,     0,    31,
       0,    32,     0,    33,     0,    34,     0,    35,     0,    36,
       0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,     0,     0,    45,     0,     0,     0,
      17,     0,    46,     0,    47,    19,     0,     0,    20,    48,
      21,    22,    23,    97,    24,     0,    25,     0,    26,     0,
      27,     0,    28,     0,    29,     0,    30,     0,    31,     0,
      32,     0,    33,     0,    34,     0,    35,     0,    36,     0,
      37,     0,    38,     0,    39,     0,    40,     0,    41,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,     0,     0,    45,     0,     0,     0,    17,
       0,    46,     0,    47,    19,     0,     0,    20,    48,    21,
      22,    23,     0,    24,    98,    25,     0,    26,     0,    27,
       0,    28,     0,    29,     0,    30,     0,    31,     0,    32,
       0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,     0,     0,    45,     0,     0,     0,    17,     0,
      46,     0,    47,    19,     0,     0,    20,    48,    21,    22,
      23,     0,    24,     0,    25,    99,    26,     0,    27,     0,
      28,     0,    29,     0,    30,     0,    31,     0,    32,     0,
      33,     0,    34,     0,    35,     0,    36,     0,    37,     0,
      38,     0,    39,     0,    40,     0,    41,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,    45,     0,     0,     0,    17,     0,    46,
       0,    47,    19,     0,     0,    20,    48,    21,    22,    23,
       0,    24,     0,    25,     0,    26,   100,    27,     0,    28,
       0,    29,     0,    30,     0,    31,     0,    32,     0,    33,
       0,    34,     0,    35,     0,    36,     0,    37,     0,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
       0,     0,    45,     0,     0,     0,    17,     0,    46,     0,
      47,    19,     0,     0,    20,    48,    21,    22,    23,     0,
      24,     0,    25,     0,    26,     0,    27,   101,    28,     0,
      29,     0,    30,     0,    31,     0,    32,     0,    33,     0,
      34,     0,    35,     0,    36,     0,    37,     0,    38,     0,
      39,     0,    40,     0,    41,     0,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,     0,
       0,    45,     0,     0,     0,    17,     0,    46,     0,    47,
      19,     0,     0,    20,    48,    21,    22,    23,     0,    24,
       0,    25,     0,    26,     0,    27,     0,    28,   102,    29,
       0,    30,     0,    31,     0,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
       0,    40,     0,    41,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,     0,     0,
      45,     0,     0,     0,    17,     0,    46,     0,    47,    19,
       0,     0,    20,    48,    21,    22,    23,     0,    24,     0,
      25,     0,    26,     0,    27,     0,    28,     0,    29,   103,
      30,     0,    31,     0,    32,     0,    33,     0,    34,     0,
      35,     0,    36,     0,    37,     0,    38,     0,    39,     0,
      40,     0,    41,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    45,
       0,     0,     0,    17,     0,    46,     0,    47,    19,     0,
       0,    20,    48,    21,    22,    23,     0,    24,     0,    25,
       0,    26,     0,    27,     0,    28,     0,    29,     0,    30,
     104,    31,     0,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,     0,     0,    45,     0,
       0,     0,    17,     0,    46,     0,    47,    19,     0,     0,
      20,    48,    21,    22,    23,     0,    24,     0,    25,     0,
      26,     0,    27,     0,    28,     0,    29,     0,    30,     0,
      31,   105,    32,     0,    33,     0,    34,     0,    35,     0,
      36,     0,    37,     0,    38,     0,    39,     0,    40,     0,
      41,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,     0,     0,    45,     0,     0,
       0,    17,     0,    46,     0,    47,    19,     0,     0,    20,
      48,    21,    22,    23,     0,    24,     0,    25,     0,    26,
       0,    27,     0,    28,     0,    29,     0,    30,     0,    31,
       0,    32,   106,    33,     0,    34,     0,    35,     0,    36,
       0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,     0,     0,    45,     0,     0,     0,
      17,     0,    46,     0,    47,    19,     0,     0,    20,    48,
      21,    22,    23,     0,    24,     0,    25,     0,    26,     0,
      27,     0,    28,     0,    29,     0,    30,     0,    31,     0,
      32,     0,    33,   107,    34,     0,    35,     0,    36,     0,
      37,     0,    38,     0,    39,     0,    40,     0,    41,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,     0,     0,    45,     0,     0,     0,    17,
       0,    46,     0,    47,    19,     0,     0,    20,    48,    21,
      22,    23,     0,    24,     0,    25,     0,    26,     0,    27,
       0,    28,     0,    29,     0,    30,     0,    31,     0,    32,
       0,    33,     0,    34,   108,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,     0,     0,    45,     0,     0,     0,    17,     0,
      46,     0,    47,    19,     0,     0,    20,    48,    21,    22,
      23,     0,    24,     0,    25,     0,    26,     0,    27,     0,
      28,     0,    29,     0,    30,     0,    31,     0,    32,     0,
      33,     0,    34,     0,    35,   109,    36,     0,    37,     0,
      38,     0,    39,     0,    40,     0,    41,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,    45,     0,     0,     0,    17,     0,    46,
       0,    47,    19,     0,     0,    20,    48,    21,    22,    23,
       0,    24,     0,    25,     0,    26,     0,    27,     0,    28,
       0,    29,     0,    30,     0,    31,     0,    32,     0,    33,
       0,    34,     0,    35,     0,    36,   110,    37,     0,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
       0,     0,    45,     0,     0,     0,    17,     0,    46,     0,
      47,    19,     0,     0,    20,    48,    21,    22,    23,     0,
      24,     0,    25,     0,    26,     0,    27,     0,    28,     0,
      29,     0,    30,     0,    31,     0,    32,     0,    33,     0,
      34,     0,    35,     0,    36,     0,    37,   111,    38,     0,
      39,     0,    40,     0,    41,     0,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,     0,
       0,    45,     0,     0,     0,    17,     0,    46,     0,    47,
      19,     0,     0,    20,    48,    21,    22,    23,     0,    24,
       0,    25,     0,    26,     0,    27,     0,    28,     0,    29,
       0,    30,     0,    31,     0,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,    37,     0,    38,   112,    39,
       0,    40,     0,    41,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,     0,     0,
      45,     0,     0,     0,    17,     0,    46,     0,    47,    19,
       0,     0,    20,    48,    21,    22,    23,     0,    24,     0,
      25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
      30,     0,    31,     0,    32,     0,    33,     0,    34,     0,
      35,     0,    36,     0,    37,     0,    38,     0,    39,   113,
      40,     0,    41,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    45,
       0,     0,     0,    17,     0,    46,     0,    47,    19,     0,
       0,    20,    48,    21,    22,    23,     0,    24,     0,    25,
       0,    26,     0,    27,     0,    28,     0,    29,     0,    30,
       0,    31,     0,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
     114,    41,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,     0,     0,    45,     0,
       0,     0,    17,     0,    46,     0,    47,    19,     0,     0,
      20,    48,    21,    22,    23,     0,    24,     0,    25,     0,
      26,     0,    27,     0,    28,     0,    29,     0,    30,     0,
      31,     0,    32,     0,    33,     0,    34,     0,    35,     0,
      36,     0,    37,     0,    38,     0,    39,     0,    40,     0,
      41,   115,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,     0,     0,    45,     0,     0,
       0,    17,     0,    46,     0,    47,    19,     0,     0,    20,
      48,    21,    22,    23,     0,    24,     0,    25,     0,    26,
       0,    27,     0,    28,     0,    29,     0,    30,     0,    31,
       0,    32,     0,    33,     0,    34,     0,    35,     0,    36,
       0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,   118,    44,     0,     0,    45,     0,     0,     0,
      17,     0,    46,     0,    47,    19,     0,     0,    20,    48,
      21,    22,    23,     0,    24,     0,    25,     0,    26,     0,
      27,     0,    28,     0,    29,     0,    30,     0,    31,     0,
      32,     0,    33,     0,    34,     0,    35,     0,    36,     0,
      37,     0,    38,     0,    39,     0,    40,     0,    41,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,   119,     0,    45,     0,     0,     0,    17,
       0,    46,     0,    47,    19,     0,     0,    20,    48,    21,
      22,    23,     0,    24,     0,    25,     0,    26,     0,    27,
       0,    28,     0,    29,     0,    30,     0,    31,     0,    32,
       0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,     0,     0,    45,     0,     0,     0,    17,     0,
      46,   120,    47,    19,     0,     0,    20,    48,    21,    22,
      23,     0,    24,     0,    25,     0,    26,     0,    27,     0,
      28,     0,    29,     0,    30,     0,    31,     0,    32,     0,
      33,     0,    34,     0,    35,     0,    36,     0,    37,     0,
      38,     0,    39,     0,    40,     0,    41,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,    45,     0,     0,     0,     0,     0,    46,
       0,    47,   121,    17,     0,     0,    48,     0,    19,   122,
       0,    20,     0,    21,    22,    23,     0,    24,     0,    25,
       0,    26,     0,    27,     0,    28,     0,    29,     0,    30,
       0,    31,     0,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,     0,     0,    45,     0,
       0,     0,    17,     0,    46,     0,    47,    19,     0,   123,
      20,    48,    21,    22,    23,     0,    24,     0,    25,     0,
      26,     0,    27,     0,    28,     0,    29,     0,    30,     0,
      31,     0,    32,     0,    33,     0,    34,     0,    35,     0,
      36,     0,    37,     0,    38,     0,    39,     0,    40,     0,
      41,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,     0,     0,    45,     0,     0,
       0,     0,     0,    46,     0,    47,     0,     0,    55,     0,
      48,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,    79,    80,     0,    82,    83,     0,     0,     0,     0,
       0,    91,    92
};

static const yytype_int16 yycheck[] =
{
       3,    10,    73,    11,    60,    62,     9,     3,    64,    65,
      58,    66,    83,    84,    71,    63,    71,     5,     0,    22,
       6,    75,    76,    77,     8,     4,    71,    74,    59,    82,
      71,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,   118,   119,   120,   121,     7,
     123,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,    17,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    -1,    27,
      -1,    29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,
      -1,    39,   155,    41,   157,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      78,     7,    80,    -1,    -1,    -1,    12,    85,    -1,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    -1,    -1,    72,    -1,    -1,    -1,
       7,    -1,    78,    -1,    80,    12,    -1,    -1,    15,    85,
      17,    18,    19,    20,    21,    -1,    23,    -1,    25,    -1,
      27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,    -1,
      37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,    -1,
      47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    -1,    -1,    72,    -1,    -1,    -1,     7,
      -1,    78,    -1,    80,    12,    -1,    -1,    15,    85,    17,
      18,    19,    -1,    21,    22,    23,    -1,    25,    -1,    27,
      -1,    29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,
      -1,    39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    -1,    72,    -1,    -1,    -1,     7,    -1,
      78,    -1,    80,    12,    -1,    -1,    15,    85,    17,    18,
      19,    -1,    21,    -1,    23,    24,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    -1,    72,    -1,    -1,    -1,     7,    -1,    78,
      -1,    80,    12,    -1,    -1,    15,    85,    17,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,
      -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,    -1,    72,    -1,    -1,    -1,     7,    -1,    78,    -1,
      80,    12,    -1,    -1,    15,    85,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    -1,    27,    28,    29,    -1,
      31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,    -1,
      41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,
      51,    -1,    53,    -1,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,
      -1,    72,    -1,    -1,    -1,     7,    -1,    78,    -1,    80,
      12,    -1,    -1,    15,    85,    17,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    -1,    29,    30,    31,
      -1,    33,    -1,    35,    -1,    37,    -1,    39,    -1,    41,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,
      72,    -1,    -1,    -1,     7,    -1,    78,    -1,    80,    12,
      -1,    -1,    15,    85,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    -1,    27,    -1,    29,    -1,    31,    32,
      33,    -1,    35,    -1,    37,    -1,    39,    -1,    41,    -1,
      43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,    72,
      -1,    -1,    -1,     7,    -1,    78,    -1,    80,    12,    -1,
      -1,    15,    85,    17,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    -1,    -1,    72,    -1,
      -1,    -1,     7,    -1,    78,    -1,    80,    12,    -1,    -1,
      15,    85,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,
      35,    36,    37,    -1,    39,    -1,    41,    -1,    43,    -1,
      45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    -1,    -1,    72,    -1,    -1,
      -1,     7,    -1,    78,    -1,    80,    12,    -1,    -1,    15,
      85,    17,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    37,    38,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    69,    -1,    -1,    72,    -1,    -1,    -1,
       7,    -1,    78,    -1,    80,    12,    -1,    -1,    15,    85,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    -1,
      27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    -1,    43,    -1,    45,    -1,
      47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    -1,    -1,    72,    -1,    -1,    -1,     7,
      -1,    78,    -1,    80,    12,    -1,    -1,    15,    85,    17,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    -1,    27,
      -1,    29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,
      -1,    39,    -1,    41,    42,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    -1,    72,    -1,    -1,    -1,     7,    -1,
      78,    -1,    80,    12,    -1,    -1,    15,    85,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    -1,    43,    44,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    -1,    72,    -1,    -1,    -1,     7,    -1,    78,
      -1,    80,    12,    -1,    -1,    15,    85,    17,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    -1,    27,    -1,    29,
      -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,
      -1,    41,    -1,    43,    -1,    45,    46,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,    -1,    72,    -1,    -1,    -1,     7,    -1,    78,    -1,
      80,    12,    -1,    -1,    15,    85,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    -1,    27,    -1,    29,    -1,
      31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,    -1,
      41,    -1,    43,    -1,    45,    -1,    47,    48,    49,    -1,
      51,    -1,    53,    -1,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,
      -1,    72,    -1,    -1,    -1,     7,    -1,    78,    -1,    80,
      12,    -1,    -1,    15,    85,    17,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    -1,    29,    -1,    31,
      -1,    33,    -1,    35,    -1,    37,    -1,    39,    -1,    41,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    50,    51,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,
      72,    -1,    -1,    -1,     7,    -1,    78,    -1,    80,    12,
      -1,    -1,    15,    85,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,
      33,    -1,    35,    -1,    37,    -1,    39,    -1,    41,    -1,
      43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,    52,
      53,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,    72,
      -1,    -1,    -1,     7,    -1,    78,    -1,    80,    12,    -1,
      -1,    15,    85,    17,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,
      -1,    35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    -1,    -1,    72,    -1,
      -1,    -1,     7,    -1,    78,    -1,    80,    12,    -1,    -1,
      15,    85,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,
      35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,
      45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    -1,    -1,    72,    -1,    -1,
      -1,     7,    -1,    78,    -1,    80,    12,    -1,    -1,    15,
      85,    17,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    72,    -1,    -1,    -1,
       7,    -1,    78,    -1,    80,    12,    -1,    -1,    15,    85,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    -1,
      27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,    -1,
      37,    -1,    39,    -1,    41,    -1,    43,    -1,    45,    -1,
      47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    69,    70,    -1,    72,    -1,    -1,    -1,     7,
      -1,    78,    -1,    80,    12,    -1,    -1,    15,    85,    17,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    -1,    27,
      -1,    29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,
      -1,    39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    -1,    72,    -1,    -1,    -1,     7,    -1,
      78,    79,    80,    12,    -1,    -1,    15,    85,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    81,     7,    -1,    -1,    85,    -1,    12,    13,
      -1,    15,    -1,    17,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,
      -1,    35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    69,    -1,    -1,    72,    -1,
      -1,    -1,     7,    -1,    78,    -1,    80,    12,    -1,    14,
      15,    85,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,
      35,    -1,    37,    -1,    39,    -1,    41,    -1,    43,    -1,
      45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    -1,    20,    -1,
      85,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    88,     5,    89,     0,   102,     8,    91,    10,
      71,    90,    92,   102,     4,   102,     6,     7,     9,    12,
      15,    17,    18,    19,    21,    23,    25,    27,    29,    31,
      33,    35,    37,    39,    41,    43,    45,    47,    49,    51,
      53,    55,    57,    67,    69,    72,    78,    80,    85,    93,
      95,    97,    11,    94,    74,    92,    96,   102,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    82,    98,    92,
      92,   102,    92,    92,   102,   102,   102,   102,    73,    83,
      84,    92,    92,    16,    75,    76,    77,    20,    22,    24,
      26,    28,    30,    32,    34,    36,    38,    40,    42,    44,
      46,    48,    50,    52,    54,    56,    59,    99,    68,    70,
      79,    81,    13,    14,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,    71,   100,   102,   102,   102,   102,
     102,    61,    58,    63,   101,    60,    64,    65,   102,   102,
      62,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    94,    94,    94,    94,    95,    96,    96,    96,    96,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   101,
     102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     0,     3,     0,     3,     5,     5,
       5,     5,     5,     5,     3,     6,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     3,     3,     3,     3,     3,     1,
       4,     2,     2,     2,     0,     2,     2,     2,     2,     0,
       5,     1,     0,     3,     0,     4,     0,     4,     4,     0,
       2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 57 "parser.y" /* yacc.c:1646  */
    {
												
												root=makenode();
												root->nodetype=HTML_H;
												addchildren(root,(yyvsp[-2].node));
												addchildren(root,(yyvsp[-1].node));
												}
#line 1800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 68 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=HEAD_H;
												addchildren((yyval.node),(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-1].node));
												}
#line 1811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 75 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode("");
												(yyval.node)->nodetype=HEAD_H;
												}
#line 1820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 84 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode((yyvsp[-1].node)->data);
												(yyval.node)->nodetype=TITLE_H;
												
												}
#line 1830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 89 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode("");
												(yyval.node)->nodetype=TITLE_H;
												}
#line 1839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 97 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=BODY_H;
												addchildren((yyval.node),(yyvsp[-1].node));
												}
#line 1849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 113 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=P_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 1864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 124 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=CENTER_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 1879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 134 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=H1_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=H2_H;
												addchildren(temp,(yyvsp[-2].node));
												
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 1911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 158 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=H3_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 1926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 168 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=H4_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 1941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 179 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=ALLTAG;
												addchildren(temp,(yyvsp[-1].node));
												addchildren((yyval.node),(yyvsp[-2].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 1956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 191 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode((yyvsp[-3].s));
												temp->nodetype=FONT_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-5].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 1971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 202 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=U_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 1986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 213 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=B_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 224 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=I_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 236 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=EM_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 247 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=TT_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 258 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=STRONG_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 269 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=SMALL_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 280 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=SUB_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 291 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=SUP_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2106 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 304 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=DIV_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 315 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=UL_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 326 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=LI_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2151 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 337 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=OL_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 348 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=DL_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2181 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 359 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=DT_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 370 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=DD_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 381 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=FIG_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 392 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=FIGC_H;
												addchildren(temp,(yyvsp[-2].node));
												addchildren((yyval.node),(yyvsp[-4].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2241 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 402 "parser.y" /* yacc.c:1646  */
    {
											(yyval.node)=makenode();
											(yyval.node)->nodetype=ALLTAG;
											struct node* temp=makenode();
											temp->nodetype=IMG_H;
											for(int i=0;i<(yyvsp[-1].node)->attribute.size();i++)
											{
											temp->attribute.push_back(make_pair((yyvsp[-1].node)->attribute[i].first,(yyvsp[-1].node)->attribute[i].second));
											}
											addchildren((yyval.node),(yyvsp[-2].node));
											addchildren((yyval.node),temp);
											addchildren((yyval.node),(yyvsp[0].node));
											}
#line 2259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 416 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=ALLTAG;
												addchildren(temp,(yyvsp[-1].node));
												addchildren((yyval.node),(yyvsp[-2].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2274 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 428 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode((yyvsp[-1].s));
												temp->nodetype=GREEK_H;
												addchildren((yyval.node),(yyvsp[-2].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2288 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 438 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode((yyvsp[-1].s));
												temp->nodetype=COMMENT_H;
												addchildren((yyval.node),(yyvsp[-2].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2302 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 449 "parser.y" /* yacc.c:1646  */
    {           
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode("");
												temp->nodetype=BR_H;
												addchildren((yyval.node),(yyvsp[-2].node));
												addchildren((yyval.node),temp);
												addchildren((yyval.node),(yyvsp[0].node));
												}
#line 2316 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 460 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode((yyvsp[0].node)->data);
												(yyval.node)->nodetype=DATA_H;
												
												}
#line 2326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 472 "parser.y" /* yacc.c:1646  */
    { 
												(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;
												struct node* temp=makenode((yyvsp[-2].node)->data);
												temp->nodetype=A_H;
												struct node* temp2=makenode((yyvsp[-1].node)->data);
												temp2->nodetype=A_L;
												addchildren((yyval.node),temp);
												addchildren((yyval.node),temp2);
												}
#line 2341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 483 "parser.y" /* yacc.c:1646  */
    { 
												string s;
												s = (yyvsp[-1].node)->data + (yyvsp[0].s);
												(yyval.node)=makenode(s);
												(yyval.node)->nodetype=DATA_H;
												}
#line 2352 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 490 "parser.y" /* yacc.c:1646  */
    { 
												string s;
												s = (yyvsp[-1].node)->data + "";
												(yyval.node)=makenode(s);
												(yyval.node)->nodetype=DATA_H;
												}
#line 2363 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 497 "parser.y" /* yacc.c:1646  */
    { 
												string s;
												s = (yyvsp[-1].node)->data + "";
												(yyval.node)=makenode(s);
												(yyval.node)->nodetype=DATA_H;
												}
#line 2374 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 505 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=makenode("");
												(yyval.node)->nodetype=DATA_H;}
#line 2381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 510 "parser.y" /* yacc.c:1646  */
    { 
									(yyval.node)=makenode();
									(yyval.node)->nodetype=IMG_H;
									for(int i=0;i<(yyvsp[0].node)->attribute.size();i++)
									{
									(yyval.node)->attribute.push_back(make_pair((yyvsp[0].node)->attribute[i].first,(yyvsp[0].node)->attribute[i].second));
									}
									}
#line 2394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 521 "parser.y" /* yacc.c:1646  */
    { 
												(yyval.node)->attribute.push_back(make_pair("src",(yyvsp[0].s)));
												}
#line 2402 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 525 "parser.y" /* yacc.c:1646  */
    { 
												(yyval.node)->attribute.push_back(make_pair("width",(yyvsp[0].s)));
												}
#line 2410 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 529 "parser.y" /* yacc.c:1646  */
    { 
												(yyval.node)->attribute.push_back(make_pair("height",(yyvsp[0].s)));
												}
#line 2418 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 532 "parser.y" /* yacc.c:1646  */
    {}
#line 2424 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 539 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode();
												(yyval.node)->nodetype=T_T;
												addchildren((yyval.node),(yyvsp[-1].node));
												(yyval.node)->data=(yyvsp[-2].s);
												if((yyvsp[-3].s) != "")
												{
													string sb =string((yyvsp[-3].s));
													if(sb[0]!='0')
													{
														(yyval.node)->tdata.push_back((yyvsp[-3].s));
													}
												}
												
												
												}
#line 2445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 555 "parser.y" /* yacc.c:1646  */
    {(yyval.s)=(yyvsp[0].s);}
#line 2451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 556 "parser.y" /* yacc.c:1646  */
    {(yyval.s)=(char *)"";}
#line 2457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 558 "parser.y" /* yacc.c:1646  */
    {(yyval.s)=(yyvsp[-1].s);}
#line 2463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 559 "parser.y" /* yacc.c:1646  */
    {(yyval.s)=(char *)"";}
#line 2469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 563 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=makenode();
												(yyval.node)->nodetype=TABLE_H;
												struct node* temp=makenode();
												temp->nodetype=TABLE_D;
												for(int i=0;i<(yyvsp[-1].node)->tdata.size();i++)
												{
												temp->tdata.push_back((yyvsp[-1].node)->tdata[i]);
											
												}
												addchildren((yyval.node),(yyvsp[-3].node));
												addchildren((yyval.node),temp);
												
												
												}
#line 2488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 580 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=makenode();
												(yyval.node)->nodetype=ALLTAG;}
#line 2495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 583 "parser.y" /* yacc.c:1646  */
    {
												
												(yyval.node)->tdata.push_back((yyvsp[-1].node)->data);
												}
#line 2504 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 588 "parser.y" /* yacc.c:1646  */
    {
												
												(yyval.node)->tdata.push_back((yyvsp[-1].node)->data);
												}
#line 2513 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 593 "parser.y" /* yacc.c:1646  */
    {(yyval.node)=makenode();
												(yyval.node)->nodetype=TR_D;}
#line 2520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 601 "parser.y" /* yacc.c:1646  */
    {
												string s;
												s = (yyvsp[-1].node)->data + (yyvsp[0].s);
												(yyval.node)=makenode(s);
												(yyval.node)->nodetype=DATA_H;
												}
#line 2531 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 610 "parser.y" /* yacc.c:1646  */
    {
												(yyval.node)=makenode("");
												(yyval.node)->nodetype=DATA_H;
												}
#line 2540 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2544 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 620 "parser.y" /* yacc.c:1906  */


                                                



