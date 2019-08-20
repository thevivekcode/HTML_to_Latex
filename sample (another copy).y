%{
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void yyerror(const char *);
FILE *fileout;                                                       //creating pointer for input and output file
FILE *yyin;
int yylex();
extern char * yytext; 
%}

%union
{
char *s;
int i;
}

%start doc_start
%token	HTML	HTMLE	BODY	BODYE	HEAD	HEADE
%token	H1	H1E	TITLE	TITLEE	METADATA
%token	<s>	TEXT
%type	<s>	doc_start content body_s

%%

doc_start :	METADATA	HTML	HEAD 	HEADE body_s	HTMLE	{fprintf(fileout,"\\document{article}\n");
								fprintf(fileout,"\\usepackage{blindwrite}\n");
								fprintf(fileout,"%s\n",$5);}

body_s	:	TITLE TEXT TITLEE content			{char* s=malloc(150);
								strcpy(s,$2);
								strcat(s,"\n");
								strcat(s,$4);
								$$=s; }
								

content	: 	BODY 	TEXT	BODYE			        {char *s=malloc(150);
								strcpy(s,$2);
								$$=s;	}
	
%%

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
