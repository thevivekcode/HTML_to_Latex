/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_SAMPLE_TAB_H_INCLUDED
# define YY_YY_SAMPLE_TAB_H_INCLUDED
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "sample.y" /* yacc.c:1909  */

char *s;
struct node *node;

#line 146 "sample.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SAMPLE_TAB_H_INCLUDED  */
