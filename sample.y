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

%start	doc_start
%token	HTML	HTMLE	HEAD	HEADE	METADATA
%token	BODY	BODYE	TITLE	TITLEE	HREF
%token	AEND	SIZE	FONTE	CENTER	CENTERE
%token	BR				P		PE		H1
%token	H1E 	H2		H2E		H3 		H3E
%token	H4		H4E		UL		ULE		DL
%token	DLE		DT		DTE		DD		DDE
%token	DIV		DIVE	U		UE		B
%token	BE		I		IE		EM		EME
%token	TT		TTE		STRONG	STRONGE	SMALL
%token	SMALLE	SUB		SUBE	SUP		SUPE
%token 	TABLE 	TABLEE	CAPTION	TH		CAPTIONE
%token	THE		TR		TRE		TD		TDE	
%token	LI		LIE		OL		OLE
%token	<s>	TEXT	
%type	<s>	doc_start	content	 body_s

%%

doc_start :	METADATA	HTML	HEAD 	HEADE body_s	HTMLE	{fprintf(fileout,"\\\\document{article}\n");
									fprintf(fileout,"\\\\usepackage{blindwrite}\n");
									fprintf(fileout,"%s\n",$5);}

body_s	:	TITLE TEXT TITLEE content				{char* s=malloc(150);
									strcpy(s,$2);
									strcat(s,"\n");
									strcat(s,$4);
									$$=s; }
								

content	: 	BODY 	TEXT  SIZE TEXT FONTE HREF AEND BODYE		{char *s=malloc(150);
									strcpy(s,$2);
									//strcat(s,"\n");
									strcat(s,$4);
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
