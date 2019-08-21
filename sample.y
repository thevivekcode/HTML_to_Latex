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
%token	HTML		HTMLE		HEAD		HEADE			A
%token	BODY		BODYE		TITLE		TITLEE			FONT
%token	AE			FONTE		CENTER		CENTERE
%token	BR						P			PE				H1
%token	H1E 		H2			H2E			H3 				H3E
%token	H4			H4E			UL			ULE				DL
%token	DLE			DT			DTE			DD				DDE
%token	DIV			DIVE		U			UE				B
%token	BE			I			IE			EM				EME
%token	TT			TTE			STRONG		STRONGE			SMALL
%token	SMALLE		SUB			SUBE		SUP				SUPE
%token 	TABLE 		TABLEE		CAPTION		TH				CAPTIONE
%token	THE			TR			TRE			TD				TDE			
%token	LI			LIE			OL			OLE				IMG
%token	<s>			TEXT		GREEK		HREF			SIZE		
%token	<s>			IMGSRC		IMGWIDTH	IMGHEIGHT		IMGFIGURE		
%token 	<s>			ANAME		ATITLE		IMGFIGCAPTION
%type	<s>			doc_start	content		body_s

%%

doc_start :		HTML	HEAD 	HEADE body_s	HTMLE	{fprintf(fileout,"\\\\document{article}\n");
														fprintf(fileout,"\\\\usepackage{blindwrite}\n");
														fprintf(fileout,"%s\n",$4);}

body_s	:	TITLE TEXT TITLEE content				{char* s=malloc(150);
													strcpy(s,$2);
													strcat(s,"\n");
													strcat(s,$4);
													$$=s; }
								

content	: 	BODY 	GREEK  FONT SIZE TEXT FONTE A HREF ATITLE AE BODYE			{char *s=malloc(150);
																		strcpy(s,$2);
																		strcat(s,"\n");
																		strcat(s,$4);
																		strcat(s,"\n");
																		strcat(s,$5);
																		strcat(s,"\n");
																		strcat(s,$8);
																		strcat(s,"\n");
																		strcat(s,$9);
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
