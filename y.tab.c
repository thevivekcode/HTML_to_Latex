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
#line 1 "sample.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void yyerror(const char *);
FILE *fileout;                                                       
FILE *yyin;
int yylex();
extern char * yytext; 

#line 78 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    BR = 272,
    P = 273,
    PE = 274,
    H1 = 275,
    H1E = 276,
    H2 = 277,
    H2E = 278,
    H3 = 279,
    H3E = 280,
    H4 = 281,
    H4E = 282,
    UL = 283,
    ULE = 284,
    DL = 285,
    DLE = 286,
    DT = 287,
    DTE = 288,
    DD = 289,
    DDE = 290,
    DIV = 291,
    DIVE = 292,
    U = 293,
    UE = 294,
    B = 295,
    BE = 296,
    I = 297,
    IE = 298,
    EM = 299,
    EME = 300,
    TT = 301,
    TTE = 302,
    STRONG = 303,
    STRONGE = 304,
    SMALL = 305,
    SMALLE = 306,
    SUB = 307,
    SUBE = 308,
    SUP = 309,
    SUPE = 310,
    TABLE = 311,
    TABLEE = 312,
    CAPTION = 313,
    TH = 314,
    CAPTIONE = 315,
    THE = 316,
    TR = 317,
    TRE = 318,
    TD = 319,
    TDE = 320,
    LI = 321,
    LIE = 322,
    OL = 323,
    OLE = 324,
    IMG = 325,
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
/* Tokens.  */
#define HTML 258
#define HTMLE 259
#define HEAD 260
#define HEADE 261
#define A 262
#define BODY 263
#define BODYE 264
#define TITLE 265
#define TITLEE 266
#define FONT 267
#define AE 268
#define FONTE 269
#define CENTER 270
#define CENTERE 271
#define BR 272
#define P 273
#define PE 274
#define H1 275
#define H1E 276
#define H2 277
#define H2E 278
#define H3 279
#define H3E 280
#define H4 281
#define H4E 282
#define UL 283
#define ULE 284
#define DL 285
#define DLE 286
#define DT 287
#define DTE 288
#define DD 289
#define DDE 290
#define DIV 291
#define DIVE 292
#define U 293
#define UE 294
#define B 295
#define BE 296
#define I 297
#define IE 298
#define EM 299
#define EME 300
#define TT 301
#define TTE 302
#define STRONG 303
#define STRONGE 304
#define SMALL 305
#define SMALLE 306
#define SUB 307
#define SUBE 308
#define SUP 309
#define SUPE 310
#define TABLE 311
#define TABLEE 312
#define CAPTION 313
#define TH 314
#define CAPTIONE 315
#define THE 316
#define TR 317
#define TRE 318
#define TD 319
#define TDE 320
#define LI 321
#define LIE 322
#define OL 323
#define OLE 324
#define IMG 325
#define TEXT 326
#define GREEK 327
#define HREF 328
#define SIZE 329
#define IMGSRC 330
#define IMGWIDTH 331
#define IMGHEIGHT 332
#define FIGURE 333
#define FIGUREE 334
#define FIGCAPTION 335
#define FIGCAPTIONE 336
#define BORDER 337
#define ATITLE 338
#define ANAME 339
#define COMMENT 340
#define IMGFIGCAPTION 341

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "sample.y" /* yacc.c:355  */

char *s;


#line 295 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 312 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1711

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  159

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
       0,    52,    52,    66,    74,    84,    93,   108,   117,   127,
     136,   145,   154,   163,   173,   183,   193,   203,   213,   223,
     233,   243,   253,   265,   275,   287,   296,   306,   315,   325,
     335,   344,   353,   363,   373,   383,   394,   414,   422,   430,
     437,   445,   452,   459,   466,   473,   480,   488,   493,   499,
     505,   512,   514,   520,   526,   535,   541,   547,   553
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HTML", "HTMLE", "HEAD", "HEADE", "A",
  "BODY", "BODYE", "TITLE", "TITLEE", "FONT", "AE", "FONTE", "CENTER",
  "CENTERE", "BR", "P", "PE", "H1", "H1E", "H2", "H2E", "H3", "H3E", "H4",
  "H4E", "UL", "ULE", "DL", "DLE", "DT", "DTE", "DD", "DDE", "DIV", "DIVE",
  "U", "UE", "B", "BE", "I", "IE", "EM", "EME", "TT", "TTE", "STRONG",
  "STRONGE", "SMALL", "SMALLE", "SUB", "SUBE", "SUP", "SUPE", "TABLE",
  "TABLEE", "CAPTION", "TH", "CAPTIONE", "THE", "TR", "TRE", "TD", "TDE",
  "LI", "LIE", "OL", "OLE", "IMG", "TEXT", "GREEK", "HREF", "SIZE",
  "IMGSRC", "IMGWIDTH", "IMGHEIGHT", "FIGURE", "FIGUREE", "FIGCAPTION",
  "FIGCAPTIONE", "BORDER", "ATITLE", "ANAME", "COMMENT", "IMGFIGCAPTION",
  "$accept", "doc_start", "content_head", "content_title", "content_body",
  "alltags", "a_tag", "a_attr", "img_tag", "img_attr", "table_tag",
  "table_data", "tr_data", "text", YY_NULLPTR
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

#define YYPACT_NINF -67

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    10,    22,    10,    16,   -66,   -67,    19,   -67,    28,
     -67,   -67,   -67,   -38,    30,   173,   -66,   -67,    23,   -67,
     -67,   -67,   -39,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -63,   -67,   230,   -66,   287,   351,
     415,   472,   529,   586,   643,   700,   757,   814,   871,   928,
     985,  1042,  1099,  1156,  1213,  1270,  1327,   -54,  1384,  1441,
     -59,  1505,   106,   -66,   -66,   -66,   -67,   -67,   -67,  1574,
    1631,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -34,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -22,   -33,   -66,   -66,   -66,   -66,
     -66,   -67,   -67,   -67,   -67,   -60,   -58,   -67,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    58,     0,    58,     0,     4,     1,     0,    58,     0,
      55,    56,    57,     0,     0,     0,    36,     2,     0,     3,
      41,     6,     0,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    51,    58,    58,    46,    58,    58,
      58,    58,    58,     5,    58,    58,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,     0,    23,    34,    35,    38,    39,    40,     0,
       0,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    47,     0,    54,    49,    58,    58,    43,    44,    45,
      58,    58,    37,    58,     8,     7,     9,    10,    11,    12,
      26,    29,    30,    31,    25,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,    27,    28,    32,    33,
      22,    50,    58,    48,    58,     0,     0,    52,    53
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -67,   -67,    36,   -67,   -67,    29,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,    14,     9,    15,    50,    54,    51,    80,
      52,    77,   145,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       5,   157,     5,   111,   112,    10,    11,   158,   113,     1,
      86,    10,    11,    10,    11,     3,   117,   118,   119,    12,
      87,    88,     6,    57,     8,    12,   152,    12,   114,    13,
     153,   154,    17,    18,    53,    55,    19,   144,   151,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
      84,    85,    56,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,     0,    78,    79,     0,    81,    82,     0,
       0,     0,     0,    89,    90,     0,     0,     0,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
       0,     0,     0,    20,   146,   147,     0,     0,    22,   148,
     149,    23,   150,    24,    25,     0,    26,     0,    27,     0,
      28,     0,    29,     0,    30,     0,    31,     0,    32,     0,
      33,     0,    34,     0,    35,     0,    36,     0,    37,     0,
      38,   155,    39,   156,    40,     0,    41,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,    46,     0,    47,     0,     0,     0,
      20,     0,    21,     0,    48,    22,    49,   121,    23,     0,
      24,    25,     0,    26,     0,    27,     0,    28,     0,    29,
       0,    30,     0,    31,     0,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
       0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    20,     0,    45,
       0,    46,    22,    47,     0,    23,    91,    24,    25,     0,
      26,    48,    27,    49,    28,     0,    29,     0,    30,     0,
      31,     0,    32,     0,    33,     0,    34,     0,    35,     0,
      36,     0,    37,     0,    38,     0,    39,     0,    40,     0,
      41,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    45,     0,    46,    22,
      47,     0,    23,     0,    24,    25,    92,    26,    48,    27,
      49,    28,     0,    29,     0,    30,     0,    31,     0,    32,
       0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,    43,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,    46,     0,    47,    20,     0,
       0,     0,     0,    22,     0,    48,    23,    49,    24,    25,
       0,    26,    93,    27,     0,    28,     0,    29,     0,    30,
       0,    31,     0,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,    43,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    46,
       0,    47,    20,     0,     0,     0,     0,    22,     0,    48,
      23,    49,    24,    25,     0,    26,     0,    27,    94,    28,
       0,    29,     0,    30,     0,    31,     0,    32,     0,    33,
       0,    34,     0,    35,     0,    36,     0,    37,     0,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    20,
       0,    45,     0,    46,    22,    47,     0,    23,     0,    24,
      25,     0,    26,    48,    27,    49,    28,    95,    29,     0,
      30,     0,    31,     0,    32,     0,    33,     0,    34,     0,
      35,     0,    36,     0,    37,     0,    38,     0,    39,     0,
      40,     0,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,     0,    20,     0,    45,     0,
      46,    22,    47,     0,    23,     0,    24,    25,     0,    26,
      48,    27,    49,    28,     0,    29,    96,    30,     0,    31,
       0,    32,     0,    33,     0,    34,     0,    35,     0,    36,
       0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
       0,    42,     0,    43,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    20,     0,    45,     0,    46,    22,    47,
       0,    23,     0,    24,    25,     0,    26,    48,    27,    49,
      28,     0,    29,     0,    30,    97,    31,     0,    32,     0,
      33,     0,    34,     0,    35,     0,    36,     0,    37,     0,
      38,     0,    39,     0,    40,     0,    41,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,     0,
      20,     0,    45,     0,    46,    22,    47,     0,    23,     0,
      24,    25,     0,    26,    48,    27,    49,    28,     0,    29,
       0,    30,     0,    31,    98,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
       0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    20,     0,    45,
       0,    46,    22,    47,     0,    23,     0,    24,    25,     0,
      26,    48,    27,    49,    28,     0,    29,     0,    30,     0,
      31,     0,    32,    99,    33,     0,    34,     0,    35,     0,
      36,     0,    37,     0,    38,     0,    39,     0,    40,     0,
      41,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    45,     0,    46,    22,
      47,     0,    23,     0,    24,    25,     0,    26,    48,    27,
      49,    28,     0,    29,     0,    30,     0,    31,     0,    32,
       0,    33,   100,    34,     0,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,    43,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    20,     0,    45,     0,    46,    22,    47,     0,    23,
       0,    24,    25,     0,    26,    48,    27,    49,    28,     0,
      29,     0,    30,     0,    31,     0,    32,     0,    33,     0,
      34,   101,    35,     0,    36,     0,    37,     0,    38,     0,
      39,     0,    40,     0,    41,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      45,     0,    46,    22,    47,     0,    23,     0,    24,    25,
       0,    26,    48,    27,    49,    28,     0,    29,     0,    30,
       0,    31,     0,    32,     0,    33,     0,    34,     0,    35,
     102,    36,     0,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,    43,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    45,     0,    46,
      22,    47,     0,    23,     0,    24,    25,     0,    26,    48,
      27,    49,    28,     0,    29,     0,    30,     0,    31,     0,
      32,     0,    33,     0,    34,     0,    35,     0,    36,   103,
      37,     0,    38,     0,    39,     0,    40,     0,    41,     0,
      42,     0,    43,     0,    44,     0,     0,     0,     0,     0,
       0,     0,    20,     0,    45,     0,    46,    22,    47,     0,
      23,     0,    24,    25,     0,    26,    48,    27,    49,    28,
       0,    29,     0,    30,     0,    31,     0,    32,     0,    33,
       0,    34,     0,    35,     0,    36,     0,    37,   104,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    20,
       0,    45,     0,    46,    22,    47,     0,    23,     0,    24,
      25,     0,    26,    48,    27,    49,    28,     0,    29,     0,
      30,     0,    31,     0,    32,     0,    33,     0,    34,     0,
      35,     0,    36,     0,    37,     0,    38,   105,    39,     0,
      40,     0,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,     0,    20,     0,    45,     0,
      46,    22,    47,     0,    23,     0,    24,    25,     0,    26,
      48,    27,    49,    28,     0,    29,     0,    30,     0,    31,
       0,    32,     0,    33,     0,    34,     0,    35,     0,    36,
       0,    37,     0,    38,     0,    39,   106,    40,     0,    41,
       0,    42,     0,    43,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    20,     0,    45,     0,    46,    22,    47,
       0,    23,     0,    24,    25,     0,    26,    48,    27,    49,
      28,     0,    29,     0,    30,     0,    31,     0,    32,     0,
      33,     0,    34,     0,    35,     0,    36,     0,    37,     0,
      38,     0,    39,     0,    40,   107,    41,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,     0,
      20,     0,    45,     0,    46,    22,    47,     0,    23,     0,
      24,    25,     0,    26,    48,    27,    49,    28,     0,    29,
       0,    30,     0,    31,     0,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
       0,    40,     0,    41,   108,    42,     0,    43,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    20,     0,    45,
       0,    46,    22,    47,     0,    23,     0,    24,    25,     0,
      26,    48,    27,    49,    28,     0,    29,     0,    30,     0,
      31,     0,    32,     0,    33,     0,    34,     0,    35,     0,
      36,     0,    37,     0,    38,     0,    39,     0,    40,     0,
      41,     0,    42,   109,    43,     0,    44,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    45,     0,    46,    22,
      47,     0,    23,     0,    24,    25,     0,    26,    48,    27,
      49,    28,     0,    29,     0,    30,     0,    31,     0,    32,
       0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,    43,   110,    44,     0,     0,     0,     0,     0,     0,
       0,    20,     0,    45,     0,    46,    22,    47,     0,    23,
       0,    24,    25,     0,    26,    48,    27,    49,    28,     0,
      29,     0,    30,     0,    31,     0,    32,     0,    33,     0,
      34,     0,    35,     0,    36,     0,    37,     0,    38,     0,
      39,     0,    40,     0,    41,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      45,   115,    46,    22,    47,     0,    23,     0,    24,    25,
       0,    26,    48,    27,    49,    28,     0,    29,     0,    30,
       0,    31,     0,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,    43,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    46,
     116,    47,    20,     0,     0,     0,     0,    22,     0,    48,
      23,    49,    24,    25,     0,    26,     0,    27,     0,    28,
       0,    29,     0,    30,     0,    31,     0,    32,     0,    33,
       0,    34,     0,    35,     0,    36,     0,    37,     0,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,    46,     0,    47,     0,     0,     0,     0,
       0,    20,     0,    48,   120,    49,    22,   122,     0,    23,
       0,    24,    25,     0,    26,     0,    27,     0,    28,     0,
      29,     0,    30,     0,    31,     0,    32,     0,    33,     0,
      34,     0,    35,     0,    36,     0,    37,     0,    38,     0,
      39,     0,    40,     0,    41,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      45,     0,    46,    22,    47,   123,    23,     0,    24,    25,
       0,    26,    48,    27,    49,    28,     0,    29,     0,    30,
       0,    31,     0,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,    43,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    46,
       0,    47,     0,     0,     0,     0,     0,     0,     0,    48,
       0,    49
};

static const yytype_int16 yycheck[] =
{
       1,    61,     3,    57,    58,    71,    72,    65,    62,     3,
      73,    71,    72,    71,    72,     5,    75,    76,    77,    85,
      83,    84,     0,    24,     8,    85,    59,    85,    82,    10,
      63,    64,     4,    71,    11,    74,     6,    71,    60,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    23,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    45,    46,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      -1,    -1,    -1,     7,   115,   116,    -1,    -1,    12,   120,
     121,    15,   123,    17,    18,    -1,    20,    -1,    22,    -1,
      24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      34,    -1,    36,    -1,    38,    -1,    40,    -1,    42,    -1,
      44,   152,    46,   154,    48,    -1,    50,    -1,    52,    -1,
      54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    -1,    70,    -1,    -1,    -1,
       7,    -1,     9,    -1,    78,    12,    80,    81,    15,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    24,    -1,    26,
      -1,    28,    -1,    30,    -1,    32,    -1,    34,    -1,    36,
      -1,    38,    -1,    40,    -1,    42,    -1,    44,    -1,    46,
      -1,    48,    -1,    50,    -1,    52,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    66,
      -1,    68,    12,    70,    -1,    15,    16,    17,    18,    -1,
      20,    78,    22,    80,    24,    -1,    26,    -1,    28,    -1,
      30,    -1,    32,    -1,    34,    -1,    36,    -1,    38,    -1,
      40,    -1,    42,    -1,    44,    -1,    46,    -1,    48,    -1,
      50,    -1,    52,    -1,    54,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    66,    -1,    68,    12,
      70,    -1,    15,    -1,    17,    18,    19,    20,    78,    22,
      80,    24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,
      -1,    34,    -1,    36,    -1,    38,    -1,    40,    -1,    42,
      -1,    44,    -1,    46,    -1,    48,    -1,    50,    -1,    52,
      -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    -1,    70,     7,    -1,
      -1,    -1,    -1,    12,    -1,    78,    15,    80,    17,    18,
      -1,    20,    21,    22,    -1,    24,    -1,    26,    -1,    28,
      -1,    30,    -1,    32,    -1,    34,    -1,    36,    -1,    38,
      -1,    40,    -1,    42,    -1,    44,    -1,    46,    -1,    48,
      -1,    50,    -1,    52,    -1,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      -1,    70,     7,    -1,    -1,    -1,    -1,    12,    -1,    78,
      15,    80,    17,    18,    -1,    20,    -1,    22,    23,    24,
      -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,
      -1,    36,    -1,    38,    -1,    40,    -1,    42,    -1,    44,
      -1,    46,    -1,    48,    -1,    50,    -1,    52,    -1,    54,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    66,    -1,    68,    12,    70,    -1,    15,    -1,    17,
      18,    -1,    20,    78,    22,    80,    24,    25,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    34,    -1,    36,    -1,
      38,    -1,    40,    -1,    42,    -1,    44,    -1,    46,    -1,
      48,    -1,    50,    -1,    52,    -1,    54,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    66,    -1,
      68,    12,    70,    -1,    15,    -1,    17,    18,    -1,    20,
      78,    22,    80,    24,    -1,    26,    27,    28,    -1,    30,
      -1,    32,    -1,    34,    -1,    36,    -1,    38,    -1,    40,
      -1,    42,    -1,    44,    -1,    46,    -1,    48,    -1,    50,
      -1,    52,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    66,    -1,    68,    12,    70,
      -1,    15,    -1,    17,    18,    -1,    20,    78,    22,    80,
      24,    -1,    26,    -1,    28,    29,    30,    -1,    32,    -1,
      34,    -1,    36,    -1,    38,    -1,    40,    -1,    42,    -1,
      44,    -1,    46,    -1,    48,    -1,    50,    -1,    52,    -1,
      54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    66,    -1,    68,    12,    70,    -1,    15,    -1,
      17,    18,    -1,    20,    78,    22,    80,    24,    -1,    26,
      -1,    28,    -1,    30,    31,    32,    -1,    34,    -1,    36,
      -1,    38,    -1,    40,    -1,    42,    -1,    44,    -1,    46,
      -1,    48,    -1,    50,    -1,    52,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    66,
      -1,    68,    12,    70,    -1,    15,    -1,    17,    18,    -1,
      20,    78,    22,    80,    24,    -1,    26,    -1,    28,    -1,
      30,    -1,    32,    33,    34,    -1,    36,    -1,    38,    -1,
      40,    -1,    42,    -1,    44,    -1,    46,    -1,    48,    -1,
      50,    -1,    52,    -1,    54,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    66,    -1,    68,    12,
      70,    -1,    15,    -1,    17,    18,    -1,    20,    78,    22,
      80,    24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    -1,    38,    -1,    40,    -1,    42,
      -1,    44,    -1,    46,    -1,    48,    -1,    50,    -1,    52,
      -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    66,    -1,    68,    12,    70,    -1,    15,
      -1,    17,    18,    -1,    20,    78,    22,    80,    24,    -1,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    -1,
      36,    37,    38,    -1,    40,    -1,    42,    -1,    44,    -1,
      46,    -1,    48,    -1,    50,    -1,    52,    -1,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      66,    -1,    68,    12,    70,    -1,    15,    -1,    17,    18,
      -1,    20,    78,    22,    80,    24,    -1,    26,    -1,    28,
      -1,    30,    -1,    32,    -1,    34,    -1,    36,    -1,    38,
      39,    40,    -1,    42,    -1,    44,    -1,    46,    -1,    48,
      -1,    50,    -1,    52,    -1,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    66,    -1,    68,
      12,    70,    -1,    15,    -1,    17,    18,    -1,    20,    78,
      22,    80,    24,    -1,    26,    -1,    28,    -1,    30,    -1,
      32,    -1,    34,    -1,    36,    -1,    38,    -1,    40,    41,
      42,    -1,    44,    -1,    46,    -1,    48,    -1,    50,    -1,
      52,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    66,    -1,    68,    12,    70,    -1,
      15,    -1,    17,    18,    -1,    20,    78,    22,    80,    24,
      -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,
      -1,    36,    -1,    38,    -1,    40,    -1,    42,    43,    44,
      -1,    46,    -1,    48,    -1,    50,    -1,    52,    -1,    54,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    66,    -1,    68,    12,    70,    -1,    15,    -1,    17,
      18,    -1,    20,    78,    22,    80,    24,    -1,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    34,    -1,    36,    -1,
      38,    -1,    40,    -1,    42,    -1,    44,    45,    46,    -1,
      48,    -1,    50,    -1,    52,    -1,    54,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    66,    -1,
      68,    12,    70,    -1,    15,    -1,    17,    18,    -1,    20,
      78,    22,    80,    24,    -1,    26,    -1,    28,    -1,    30,
      -1,    32,    -1,    34,    -1,    36,    -1,    38,    -1,    40,
      -1,    42,    -1,    44,    -1,    46,    47,    48,    -1,    50,
      -1,    52,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    66,    -1,    68,    12,    70,
      -1,    15,    -1,    17,    18,    -1,    20,    78,    22,    80,
      24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      34,    -1,    36,    -1,    38,    -1,    40,    -1,    42,    -1,
      44,    -1,    46,    -1,    48,    49,    50,    -1,    52,    -1,
      54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    66,    -1,    68,    12,    70,    -1,    15,    -1,
      17,    18,    -1,    20,    78,    22,    80,    24,    -1,    26,
      -1,    28,    -1,    30,    -1,    32,    -1,    34,    -1,    36,
      -1,    38,    -1,    40,    -1,    42,    -1,    44,    -1,    46,
      -1,    48,    -1,    50,    51,    52,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    66,
      -1,    68,    12,    70,    -1,    15,    -1,    17,    18,    -1,
      20,    78,    22,    80,    24,    -1,    26,    -1,    28,    -1,
      30,    -1,    32,    -1,    34,    -1,    36,    -1,    38,    -1,
      40,    -1,    42,    -1,    44,    -1,    46,    -1,    48,    -1,
      50,    -1,    52,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    66,    -1,    68,    12,
      70,    -1,    15,    -1,    17,    18,    -1,    20,    78,    22,
      80,    24,    -1,    26,    -1,    28,    -1,    30,    -1,    32,
      -1,    34,    -1,    36,    -1,    38,    -1,    40,    -1,    42,
      -1,    44,    -1,    46,    -1,    48,    -1,    50,    -1,    52,
      -1,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    66,    -1,    68,    12,    70,    -1,    15,
      -1,    17,    18,    -1,    20,    78,    22,    80,    24,    -1,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    -1,
      36,    -1,    38,    -1,    40,    -1,    42,    -1,    44,    -1,
      46,    -1,    48,    -1,    50,    -1,    52,    -1,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      66,    67,    68,    12,    70,    -1,    15,    -1,    17,    18,
      -1,    20,    78,    22,    80,    24,    -1,    26,    -1,    28,
      -1,    30,    -1,    32,    -1,    34,    -1,    36,    -1,    38,
      -1,    40,    -1,    42,    -1,    44,    -1,    46,    -1,    48,
      -1,    50,    -1,    52,    -1,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,     7,    -1,    -1,    -1,    -1,    12,    -1,    78,
      15,    80,    17,    18,    -1,    20,    -1,    22,    -1,    24,
      -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,
      -1,    36,    -1,    38,    -1,    40,    -1,    42,    -1,    44,
      -1,    46,    -1,    48,    -1,    50,    -1,    52,    -1,    54,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    68,    -1,    70,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    78,    79,    80,    12,    13,    -1,    15,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    24,    -1,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    -1,
      36,    -1,    38,    -1,    40,    -1,    42,    -1,    44,    -1,
      46,    -1,    48,    -1,    50,    -1,    52,    -1,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      66,    -1,    68,    12,    70,    14,    15,    -1,    17,    18,
      -1,    20,    78,    22,    80,    24,    -1,    26,    -1,    28,
      -1,    30,    -1,    32,    -1,    34,    -1,    36,    -1,    38,
      -1,    40,    -1,    42,    -1,    44,    -1,    46,    -1,    48,
      -1,    50,    -1,    52,    -1,    54,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    88,     5,    89,   100,     0,    89,     8,    91,
      71,    72,    85,    10,    90,    92,   100,     4,    71,     6,
       7,     9,    12,    15,    17,    18,    20,    22,    24,    26,
      28,    30,    32,    34,    36,    38,    40,    42,    44,    46,
      48,    50,    52,    54,    56,    66,    68,    70,    78,    80,
      93,    95,    97,    11,    94,    74,    92,   100,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    98,    92,    92,
      96,    92,    92,   100,   100,   100,    73,    83,    84,    92,
      92,    16,    19,    21,    23,    25,    27,    29,    31,    33,
      35,    37,    39,    41,    43,    45,    47,    49,    51,    53,
      55,    57,    58,    62,    82,    67,    69,    75,    76,    77,
      79,    81,    13,    14,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,    71,    99,   100,   100,   100,   100,
     100,    60,    59,    63,    64,   100,   100,    61,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    93,    94,    94,
      94,    94,    95,    96,    96,    96,    96,    97,    98,    98,
      98,    98,    99,    99,    99,   100,   100,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     1,     3,     3,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     6,     3,     3,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     3,     3,     1,     4,     2,     2,
       2,     0,     2,     2,     2,     2,     0,     3,     4,     2,
       4,     0,     4,     4,     0,     2,     2,     2,     0
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
#line 52 "sample.y" /* yacc.c:1646  */
    {
								char *s=malloc(6000);
								strcpy(s,(yyvsp[-2].s));
								strcat(s,"\n");
								strcat(s,(yyvsp[-1].s));
								(yyval.s)=s;
								printf("\n\n\n ********************GRAMMAR DATA********************** \n\n\n");
								printf("%s",(yyval.s));
								fprintf(fileout,"%s\n",(yyval.s));
								}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 66 "sample.y" /* yacc.c:1646  */
    {
																char *s=malloc(6000);
																strcpy(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-1].s));
																(yyval.s)=s;
																}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 74 "sample.y" /* yacc.c:1646  */
    {
																char *s=malloc(6000);
																strcpy(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 84 "sample.y" /* yacc.c:1646  */
    {
																char *s=malloc(6000);
																strcpy(s,(yyvsp[-1].s));
																(yyval.s)=s;
																}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 93 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-1].s));
																//strcat(s,$3);
																(yyval.s)=s;
																}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 108 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 117 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 127 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 136 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 154 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 163 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 173 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 183 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 193 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 203 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 213 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 223 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 233 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 243 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 253 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-5].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-3].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 265 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-1].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 275 "sample.y" /* yacc.c:1646  */
    {           
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																//strcat(s,"\n");
																//strcat(s,$4);
																(yyval.s)=s;
																}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 287 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 296 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 306 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 315 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 325 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 335 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 344 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 353 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 363 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-4].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 373 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-1].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 383 "sample.y" /* yacc.c:1646  */
    {
																char *s= malloc(6000);
																strcpy(s,(yyvsp[-2].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[-1].s));
																strcat(s,"\n");
																strcat(s,(yyvsp[0].s));
																(yyval.s)=s;
																}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 394 "sample.y" /* yacc.c:1646  */
    {char *s=malloc(6000);
																strcpy(s,(yyvsp[0].s));
																//strcat(s,"\n");
																//strcpy(s,$2);
																(yyval.s)=s;}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 414 "sample.y" /* yacc.c:1646  */
    { 
														char *s=malloc(6000);
														strcpy(s,(yyvsp[-2].s));
														strcat(s,"\n");
														strcat(s,(yyvsp[-1].s));
														(yyval.s)=s;
														}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 422 "sample.y" /* yacc.c:1646  */
    { 
														char *s=malloc(6000);
														strcpy(s,(yyvsp[-1].s));
														strcat(s,"\n");
														strcat(s,(yyvsp[0].s));
														(yyval.s)=s;
														}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 430 "sample.y" /* yacc.c:1646  */
    { 
														char *s=malloc(6000);
														strcpy(s,(yyvsp[-1].s));
														strcat(s,"\n");
														strcat(s,(yyvsp[0].s));
														(yyval.s)=s;
														}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 437 "sample.y" /* yacc.c:1646  */
    { 
														char *s=malloc(6000);
														strcpy(s,(yyvsp[-1].s));
														strcat(s,"\n");
														strcat(s,(yyvsp[0].s));
														(yyval.s)=s;
														}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 445 "sample.y" /* yacc.c:1646  */
    {(yyval.s)="";}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 452 "sample.y" /* yacc.c:1646  */
    { 
														char *s=malloc(6000);
														strcpy(s,(yyvsp[0].s));									
														//strcat(s,"\n");
														//strcat(s,$3);
														(yyval.s)=s;
														}
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 459 "sample.y" /* yacc.c:1646  */
    { 
														char *s=malloc(6000);
														strcpy(s,(yyvsp[-1].s));
														strcat(s,"\n");
														strcat(s,(yyvsp[0].s));
														(yyval.s)=s;
														}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 466 "sample.y" /* yacc.c:1646  */
    { 
														char *s=malloc(6000);
														strcpy(s,(yyvsp[-1].s));
														strcat(s,"\n");
														strcat(s,(yyvsp[0].s));
														(yyval.s)=s;
														}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 473 "sample.y" /* yacc.c:1646  */
    { 
														char *s=malloc(6000);
														strcpy(s,(yyvsp[-1].s));
														strcat(s,"\n");
														strcat(s,(yyvsp[0].s));
														(yyval.s)=s;
														}
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 480 "sample.y" /* yacc.c:1646  */
    {(yyval.s)="";}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 488 "sample.y" /* yacc.c:1646  */
    {char *s=malloc(6000);
											strcpy(s,(yyvsp[-1].s));
											(yyval.s)=s;
											}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 493 "sample.y" /* yacc.c:1646  */
    {char *s=malloc(6000);
												strcpy(s,(yyvsp[-3].s));
												strcat(s,"\n");
												strcat(s,(yyvsp[-1].s));
												(yyval.s)=s;
												}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 499 "sample.y" /* yacc.c:1646  */
    {char *s=malloc(6000);
												strcpy(s,(yyvsp[-1].s));
												strcat(s,"\n");
												strcat(s,(yyvsp[0].s));
												(yyval.s)=s;
												}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 505 "sample.y" /* yacc.c:1646  */
    {
													char *s=malloc(6000);
													strcpy(s,(yyvsp[-3].s));
													strcat(s,"\n");
													strcat(s,(yyvsp[-1].s));
													(yyval.s)=s;
													}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 512 "sample.y" /* yacc.c:1646  */
    {(yyval.s)="";}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 514 "sample.y" /* yacc.c:1646  */
    {char *s=malloc(6000);
												strcpy(s,(yyvsp[-3].s));
												strcat(s,"\n");
												strcat(s,(yyvsp[-1].s));
												(yyval.s)=s;
												}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 520 "sample.y" /* yacc.c:1646  */
    {char *s=malloc(6000);
												strcpy(s,(yyvsp[-3].s));
												strcat(s,"\n");
												strcat(s,(yyvsp[-1].s));
												(yyval.s)=s;
												}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 526 "sample.y" /* yacc.c:1646  */
    {(yyval.s)="";}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 535 "sample.y" /* yacc.c:1646  */
    {char *s =malloc(6000);
								strcpy(s,(yyvsp[-1].s));
								strcat(s,"\n");
								strcat(s,(yyvsp[0].s));
								(yyval.s)=s;	
								}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 541 "sample.y" /* yacc.c:1646  */
    {char *s =malloc(6000);
								strcpy(s,(yyvsp[-1].s));
								strcat(s,"\n");
								strcat(s,(yyvsp[0].s));
								(yyval.s)=s;	
								}
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 547 "sample.y" /* yacc.c:1646  */
    {char *s =malloc(6000);
								strcpy(s,(yyvsp[-1].s));
								strcat(s,"\n");
								strcat(s,(yyvsp[0].s));
								(yyval.s)=s;	
								}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 553 "sample.y" /* yacc.c:1646  */
    {(yyval.s)="";}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2507 "y.tab.c" /* yacc.c:1646  */
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
#line 560 "sample.y" /* yacc.c:1906  */


                                                 //include the lexical analyzer file


int main(int argc,char *argv[]){   
                                  //driver function (main function )
yyin=fopen(argv[1],"r");
fileout=fopen(argv[2],"w+");
yyparse();                                                            //parse the file   

}

void yyerror(const char *s){                                                     //if syntax error occured print error

printf("Syntax error");

 
}
