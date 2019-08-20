/*                                                    * * * * * * * * * * * * * * * * * * * * * * * * *  * * * *  *
                                                      |          Bhagvan bharose attempt by KEVIV SINGH		  |
                                  		      |								  |
                                                      * * * * * * * **  ** * * ** * * * * * * * * * * * * * * * * *
*/

%{
#include <stdio.h>
#include<string.h>
#include "y.tab.h"
%}
spac		    	 [ \t]+
punc             	(\.|\,|\!|\?%)
word		        ({punc}|[a-zA-Z0-9])+
text			(({word}|{spac})+[\n]*({word}|{spac})+)
%x 			S1

%%
"<!doctype"[^>]+">"			{printf("METADATA\n");
					return METADATA;					
					}

"<html>"				{
					printf("HTML\n");
					return HTML;
					}
"</html>"				{
					printf("HTMLE\n");
					return HTMLE;
					}
"<head>"				{
					printf("HEAD\n");
					return HEAD;
					}
"</head>"				{
					printf("HEADE\n");
					return HEADE;
					}
"<body>"				{
					printf("BODY\n");
					return BODY;
					}
"</body>"				{
					printf("BODYE\n");
					return BODYE;
					}
"<title>"				{
					printf("TITLE\n");
					return TITLE;
					}
"</title>"				{
					printf("TITLEE\n");
					return TITLEE;
					}
"<h1>"					{
					printf("H1\n");
					return H1;
					}
"</h1>"					{
					printf("H1E\n");
					return H1E;
					}
"<a"([ =."/]|[a-zA-z0-9])*">"		{
					char *ss =yytext;
					int length=strlen(ss);
					char link[length+1];
					sscanf(ss, "%*[^\"]\"%[^\"]",link);
					printf("%s\n",link);
					return HREF;
					}
"</a>"					{
					printf("AEND\n");
					return AEND;
					}
"<font"([ =."/]|[a-zA-z0-9])*">"	{
					char *ss =yytext;
					int length=strlen(ss);
					char link[length+1];
					sscanf(ss, "%*[^\"]\"%[^\"]",link);
					printf("%s\n",link);
					return SIZE;
					}
"</font>"					{
					printf("FONTE\n");
					return FONTE;
					}
{text}					{
					printf("%s\n",yytext);
					yylval.s = strdup(yytext);
					return TEXT;
					}
"\n"					;
.					;


%%


int yywrap(){
return 1;
}

/*
int main(void){
yyin=fopen("sample.html","r");
yylex();
}
*/






