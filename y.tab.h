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
    BRS = 272,
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
    IMG = 326,
    TEXT = 327,
    GREEK = 328,
    HREF = 329,
    SIZE = 330,
    IMGSRC = 331,
    IMGWIDTH = 332,
    IMGHEIGHT = 333,
    FIGURE = 334,
    FIGUREE = 335,
    FIGCAPTION = 336,
    FIGCAPTIONE = 337,
    BORDER = 338,
    ATITLE = 339,
    IMGFIGCAPTION = 340
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
#define BRS 272
#define BR 273
#define P 274
#define PE 275
#define H1 276
#define H1E 277
#define H2 278
#define H2E 279
#define H3 280
#define H3E 281
#define H4 282
#define H4E 283
#define UL 284
#define ULE 285
#define DL 286
#define DLE 287
#define DT 288
#define DTE 289
#define DD 290
#define DDE 291
#define DIV 292
#define DIVE 293
#define U 294
#define UE 295
#define B 296
#define BE 297
#define I 298
#define IE 299
#define EM 300
#define EME 301
#define TT 302
#define TTE 303
#define STRONG 304
#define STRONGE 305
#define SMALL 306
#define SMALLE 307
#define SUB 308
#define SUBE 309
#define SUP 310
#define SUPE 311
#define TABLE 312
#define TABLEE 313
#define CAPTION 314
#define TH 315
#define CAPTIONE 316
#define THE 317
#define TR 318
#define TRE 319
#define TD 320
#define TDE 321
#define LI 322
#define LIE 323
#define OL 324
#define OLE 325
#define IMG 326
#define TEXT 327
#define GREEK 328
#define HREF 329
#define SIZE 330
#define IMGSRC 331
#define IMGWIDTH 332
#define IMGHEIGHT 333
#define FIGURE 334
#define FIGUREE 335
#define FIGCAPTION 336
#define FIGCAPTIONE 337
#define BORDER 338
#define ATITLE 339
#define IMGFIGCAPTION 340

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "sample.y" /* yacc.c:1909  */

char *s;


#line 229 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
