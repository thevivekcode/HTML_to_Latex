/*                            * * * * * * * * * * * * * * * * * * * * * * * * *  * * * *  *
                              |          Bhagvan bharose attempt by KEVIV SINGH		 	  |
          		     		  |			 												  |
                              * * * * * * * **  ** * * ** * * * * * * * * * * * * * * * * *
*/

%{

#include <stdio.h>
#include<string.h>
#include "y.tab.h"
%}
%option			caseless
spac		  	[ \t]+
punc            (\.|\,|\!|\?%)
special			(=|-|@|$|%|#|~|\}|\{|^|_|\\|:)
word		    ({punc}|[a-zA-Z0-9]|{special})+
text			(({word}|{spac})+[\n]*)*({word}|{spac})+
greek			(&{word};)
%x 				a_tag
%x 				font_tag
%x				img_tag
%x				table_tag
%%
([ ]|[\t]|[\n])* 			;
"<html>"					{
							printf("HTML\n");
							return HTML;
							}

"</html>"					{
							printf("HTMLE\n");
							return HTMLE;
							}

"<head>"					{
							printf("HEAD\n");
							return HEAD;
							}

"</head>"					{
							printf("HEADE\n");
							return HEADE;
							}

"<body>"					{
							printf("BODY\n");
							return BODY;
							}
							
"</body>"					{
							printf("BODYE\n");
							return BODYE;
							}
							
"<title>"					{
							printf("TITLE\n");
							return TITLE;
							}
							
"</title>"					{
							printf("TITLEE\n");
							return TITLEE;
							}

"<img"[ ]*									{ 
											BEGIN img_tag;
											printf("IMG\n");
											return IMG;
											}

<img_tag>{

			[ ]*"src=\""([ =#.:/]|[a-zA-Z0-9])*"\""[ ]* {
											
														char *ss =yytext;
														int length=strlen(ss);
														char link[length+5];
														sscanf(ss, "%*[^\"]\"%[^\"]",link);
														printf("%s\n",link);
														yylval.s = malloc(2000);
														yylval.s = strdup(link);
														//BEGIN a_tag;
														return IMGSRC;

														}
			[ ]*"src=\'"([ =#.:/]|[a-zA-Z0-9])*"\'"[ ]* {
											
														char *ss =yytext;
														int length=strlen(ss);
														char link[length+5];
														sscanf(ss, "%*[^\']\'%[^\']",link);
														printf("%s\n",link);
														yylval.s = malloc(2000);
														yylval.s = strdup(link);
														//BEGIN a_tag;
														return IMGSRC;
														}
		}


<img_tag>{
		
					[ ]*"width=\""([ =#.:/]|[a-zA-Z0-9])*"\""[ ]*	{
										
															char *ss =yytext;
															int length=strlen(ss);
															char link[length+5];
															sscanf(ss, "%*[^\"]\"%[^\"]",link);
															printf("%s\n",link);
															yylval.s = malloc(2000);
															yylval.s = strdup(link);
															//BEGIN a_tag;
															return IMGWIDTH;
															}

					[ ]*"width=\'"([ =#.:/]|[a-zA-Z0-9])*"\'"[ ]*	{
										
															char *ss =yytext;
															int length=strlen(ss);
															char link[length+5];
															sscanf(ss, "%*[^\']\'%[^\']",link);
															printf("%s\n",link);
															yylval.s = malloc(2000);
															yylval.s = strdup(link);
															//BEGIN a_tag;
															return IMGWIDTH;
															}
	}

<img_tag>{
					[ ]*"height=\""([ =#.:/]|[a-zA-Z0-9])*"\""[ ]*	{
										
															char *ss =yytext;
															int length=strlen(ss);
															char link[length+5];
															sscanf(ss, "%*[^\"]\"%[^\"]",link);
															printf("%s\n",link);
															yylval.s = malloc(2000);
															yylval.s = strdup(link);
															//BEGIN a_tag;
															return IMGHEIGHT;
															}
					[ ]*"height=\'"([ =#.:/]|[a-zA-Z0-9])*"\'"[ ]*	{
											
											char *ss =yytext;
											int length=strlen(ss);
											char link[length+5];
											sscanf(ss, "%*[^\']\'%[^\']",link);
											printf("%s\n",link);
											yylval.s = malloc(2000);
											yylval.s = strdup(link);
											//BEGIN a_tag;
											return IMGHEIGHT;
											}
		}

<img_tag>[ ]*"/>"							{
											BEGIN 0;
											}


"<a"[ ]*									{ 
											BEGIN a_tag;
											printf("A\n");
											return A;
											}


<a_tag>{

			[ ]*"href=\""([ =#.:/]|[a-zA-Z0-9])*"\""[ ]*	{
											
														char *ss =yytext;
														int length=strlen(ss);
														char link[length+5];
														sscanf(ss, "%*[^\"]\"%[^\"]",link);
														printf("%s\n",link);
														yylval.s = malloc(2000);
														yylval.s = strdup(link);
														//BEGIN a_tag;
														return HREF;
														}

			[ ]*"href=\'"([ =#.:/]|[a-zA-Z0-9])*"\'"[ ]*	{
											
														char *ss =yytext;
														int length=strlen(ss);
														char link[length+5];
														sscanf(ss, "%*[^\']\'%[^\']",link);
														printf("%s\n",link);
														yylval.s = malloc(2000);
														yylval.s = strdup(link);
														//BEGIN a_tag;
														return HREF;
														}

     }

<a_tag>{
				[ ]*"title=\""([ =#.:/]|[a-zA-Z0-9])*"\""[ ]*	{
															char *ss =yytext;
															int length=strlen(ss);
															char link[length+5];
															sscanf(ss, "%*[^\"]\"%[^\"]",link);
															printf("%s\n",link);
															yylval.s = malloc(2000);
															yylval.s = strdup(link);
															//BEGIN a_tag;
															return ATITLE;
															}
			
				[ ]*"title=\'"([ =#.:/]|[a-zA-Z0-9])*"\'"[ ]*	{
															char *ss =yytext;
															int length=strlen(ss);
															char link[length+5];
															sscanf(ss, "%*[^\']\'%[^\']",link);
															printf("%s\n",link);
															yylval.s = malloc(2000);
															yylval.s = strdup(link);
															//BEGIN a_tag;
															return ATITLE;
															}
			}

<a_tag>{
				[ ]*"name=\""([ =#.:/]|[a-zA-Z0-9])*"\""[ ]*	{
															char *ss =yytext;
															int length=strlen(ss);
															char link[length+5];
															sscanf(ss, "%*[^\"]\"%[^\"]",link);
															printf("%s\n",link);
															yylval.s = malloc(2000);
															yylval.s = strdup(link);
															//BEGIN a_tag;
															return ANAME;
															}
			
				[ ]*"name=\'"([ =#.:/]|[a-zA-Z0-9])*"\'"[ ]*	{
															char *ss =yytext;
															int length=strlen(ss);
															char link[length+5];
															sscanf(ss, "%*[^\']\'%[^\']",link);
															printf("%s\n",link);
															yylval.s = malloc(2000);
															yylval.s = strdup(link);
															//BEGIN a_tag;
															return ANAME;
															}
			}



<a_tag>[ ]*">"								{
											BEGIN 0;
											}
														
							
"</a>"										{
											printf("AE\n");
											return AE;
											}
							
"<table"[ ]*												{
															BEGIN table_tag;
															printf("TABLE\n");
															return TABLE;
															}

<table_tag>{


         [ ]*"border=\""([ =#.:/]|[a-zA-Z0-9])*"\""[ ]* 	{
															char *ss =yytext;
															int length=strlen(ss);
															char link[length+5];
															sscanf(ss, "%*[^\"]\"%[^\"]",link);
															printf("%s\n",link);
															yylval.s = malloc(2000);
															yylval.s = strdup(link);
															return BORDER;
															}

         [ ]*"border=\'"([ =#.:/]|[a-zA-Z0-9])*"\'"[ ]* 	{
															char *ss =yytext;
															int length=strlen(ss);
															char link[length+5];
															sscanf(ss, "%*[^\']\'%[^\']",link);
															printf("%s\n",link);
															yylval.s = malloc(2000);
															yylval.s = strdup(link);
															return BORDER;
															}
           }

<table_tag>[ ]*">"											{
															BEGIN 0;
															}
							
"</table>"									{
											printf("TABLEE\n");
											return TABLEE;	
											}

"<font"[ ]*									{
											BEGIN font_tag;
											printf("FONT\n");
											return FONT;
											}
							
<font_tag>{
			[ ]*"size=\""([ =#.:/]|[a-zA-Z0-9])*"\""[ ]*			{
																		char *ss =yytext;
																		int length=strlen(ss);
																		char link[length+5];
																		sscanf(ss, "%*[^\"]\"%[^\"]",link);
																		printf("%s\n",link);
																		yylval.s = malloc(2000);
																		yylval.s = strdup(link);
																		return SIZE;
																		}
			[ ]*"size=\'"([ =#.:/]|[a-zA-Z0-9])*"\'"[ ]*			{
																		char *ss =yytext;
																		int length=strlen(ss);
																		char link[length+5];
																		sscanf(ss, "%*[^\']\'%[^\']",link);
																		printf("%s\n",link);
																		yylval.s = malloc(2000);
																		yylval.s = strdup(link);
																		return SIZE;
																		}
			}


<font_tag>[ ]*">"											{
															BEGIN 0;
															}
							
							
"</font>"									{
											printf("FONTE\n");
											return FONTE;
											}

"<figure>"					{
							printf("FIGURE\n");
							return FIGURE;	
							}

"</figure>"					{
							printf("FIGUREE\n");
							return FIGUREE;	
							}

"<figcaption>"				{
							printf("FIGCAPTION\n");
							return FIGCAPTION;	
							}

"</figcaption>"				{
							printf("FIGCAPTIONE\n");
							return FIGCAPTIONE;	
							}
							
"<center>"					{
							printf("CENTER\n");
							return CENTER;	
							}
							
"</center>"					{
							printf("CENTERE\n");
							return CENTERE;	
							}
							
"<br"[ \t]*">"						{
							printf("BR\n");
							return BR;	
							}
"<br"[ \t]*"/>"						{
							printf("BR\n");
							return BR;	
							}
							
"<p>"						{
							printf("P\n");
							return P;	
							}
							
"</p>"						{
							printf("PE\n");
							return PE;	
							}
							
"<h1>"						{
							printf("H1\n");
							return H1;	
							}
							
"</h1>"						{
							printf("H1E\n");
							return H1E;	
							}
							
"<h2>"						{
							printf("H2\n");
							return H2;	
							}
							
"</h2>"						{
							printf("H2E\n");
							return H2E;	
							}
							
"<h3>"						{
							printf("H3\n");
							return H3;	
							}
							
"</h3>"						{
							printf("H3E\n");
							return H3E;	
							}
							
"<h4>"						{
							printf("H4\n");
							return H4;	
							}
							
"</h4>"						{
							printf("H4E\n");
							return H4E;	
							}
							
"<ul>"						{
							printf("UL\n");
							return UL;	
							}
							
"</ul>"						{
							printf("ULE\n");
							return ULE;	
							}
							
"<li>"						{
							printf("LI\n");
							return LI;	
							}
							
"</li>"						{
							printf("LIE\n");
							return LIE;	
							}
							
"<ol>"						{
							printf("OL\n");
							return OL;	
							}
							
"</ol>"						{
							printf("OLE\n");
							return OLE;	
							}
							
"<dl>"						{
							printf("DL\n");
							return DL;	
							}
							
"</dl>"						{
							printf("DLE\n");
							return DLE;	
							}
							
"<dt>"						{
							printf("DT\n");
							return DT;	
							}
							
"</dt>"						{
							printf("DTE\n");
							return DTE;	
							}
							
"<dd>"						{
							printf("DD\n");
							return DD;	
							}
							
"</dd>"						{
							printf("DDE\n");
							return DDE;	
							}
							
"<div>"						{
							printf("DIV\n");
							return DIV;	
							}
							
"</div>"					{
							printf("DIVE\n");
							return DIVE;	
							}
							
"<u>"						{
							printf("U\n");
							return U;	
							}
							
"</u>"						{
							printf("UE\n");
							return UE;	
							}
							
"<b>"						{
							printf("B\n");
							return B;	
							}
							
"</b>"						{
							printf("BE\n");
							return BE;	
							}
							
"<i>"						{
							printf("I\n");
							return I;	
							}
							
"</i>"						{
							printf("IE\n");
							return IE;	
							}
							
"<em>"						{
							printf("EM\n");
							return EM;	
							}
							
"</em>"						{
							printf("EME\n");
							return EME;	
							}
							
"<tt>"						{
							printf("TT\n");
							return TT;	
							}
							
"</tt>"						{
							printf("TTE\n");
							return TTE;	
							}
							
"<strong>"					{
							printf("STRONG\n");
							return STRONG;	
							}
							
"</strong>"					{
							printf("STRONGE\n");
							return STRONGE;	
							}
							
"<small>"					{
							printf("SMALL\n");
							return SMALL;	
							}
							
"</small>"					{
							printf("SMALLE\n");
							return SMALLE;	
							}
							
"<sub>"						{
							printf("SUB\n");
							return SUB;	
							}
							
"</sub>"					{
							printf("SUBE\n");
							return SUBE;	
							}
							
"<sup>"						{
							printf("SUP\n");
							return SUP;	
							}
							
"</sup>"					{
							printf("SUPE\n");
							return SUPE;	
							}

							
"<caption>"					{
							printf("CAPTION\n");
							return CAPTION;	
							}
							
"</caption>"				{
							printf("CAPTIONE\n");
							return CAPTIONE;	
							}
							
"<th>"						{
							printf("TH\n");
							return TH;	
							}
							
"</th>"						{
							printf("THE\n");
							return THE;	
							}
							
"<tr>"						{
							printf("TR\n");
							return TR;	
							}
							
"</tr>"						{
							printf("TRE\n");
							return TRE;	
							}
							
"<td>"						{
							printf("TD\n");
							return TD;	
							}
							
"</td>"						{
							printf("TDE\n");
							return TDE;	
							}
							
{text}						{
							printf("%s\n",yytext);
							yylval.s = malloc(2000);
							yylval.s = strdup(yytext);
							return TEXT;
							}

{greek}						{
							printf("GREEK\n");
							yylval.s = malloc(2000);
							yylval.s = strdup(yytext);
							return GREEK;
							}
							
"<!"[^>]*">"				;
.							;
"<"[.]*">"					;


%%


int yywrap(){
return 1;
}

/*
int main(void){
yyin=fopen("sample2.html","r\n");
yylex();
}
*/







