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

}
%start  doc_start
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
%token	<s>			IMGSRC		IMGWIDTH	IMGHEIGHT		FIGURE				
%token	<s>			FIGUREE 	FIGCAPTION 	FIGCAPTIONE
%token 	<s>			ATITLE		IMGFIGCAPTION

%type	<s>			doc_start	
%type	<s>			content_head	content_body 
%type	<s>			content_title 	alltags 		text
	
		
	

%%
/*              ********************************************************
                 Document starts here with head and body content
                ********************************************************

*/
doc_start 	: HTML content_head content_body HTMLE 				{
																char *s=malloc(1000);
																strcpy(s,$2);
																strcat(s,"\n");
																strcat(s,$3);
																$$=s;
																printf("\n\n\n GRAMMAR DATA \n\n\n");
																printf("%s",$$);
																fprintf(fileout,"%s\n",$$);
																}
			;
			
			

content_head :	  HEAD content_head content_title HEADE 		{
																char *s=malloc(1000);
																strcpy(s,$2);
																strcat(s,"\n");
																strcat(s,$3);
																$$=s;
																}
																
				|	TEXT                                   			{
																char *s=malloc(1000);
																strcpy(s,$1);
																$$=s;
																}
				;
			
			
			

content_title	: TITLE TEXT TITLEE 							{
																char *s=malloc(1000);
																strcpy(s,$2);
																$$=s;
																}
				;
				
				

content_body	:	BODY	alltags 	BODYE 				{
																char *s= malloc(1000);
																strcpy(s,$2);
																//strcat(s,$3);
																$$=s;
																}
				;
				
/*              ********************************************************
                 ALL Different tags a body can have are lsited here
                ********************************************************
*/				



alltags 		:	 alltags	 P alltags  PE  text							{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}					
				|	 alltags	 CENTER alltags  CENTERE text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
																
				|	 alltags	 H1 alltags  H1E text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
				|	 alltags	 H2 alltags  H2E text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
				|	 alltags	 H3 alltags  H3E text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
				|	 alltags	 H4 alltags  H4E text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
				|	 alltags	 FONT SIZE alltags  FONTE text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$4);
																strcat(s,"\n");
																strcat(s,$6);
																$$=s;
																}
				|	 alltags	 A HREF alltags  AE text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$4);
																strcat(s,"\n");
																strcat(s,$6);
																$$=s;
																}
				|	 alltags	 BR   text					{            // this BR grammar has issue with nesting <p> this is new para <br> it got broke here <centre> with a center </center> here para ends </p>
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																//strcat(s,"\n");
																//strcat(s,$4);
																$$=s;
																}
																
				|	 alltags	 DIV alltags  DIVE text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
				|	 alltags	 UL alltags  ULE text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
																
				|	 alltags	 LI alltags  LIE text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
				|	 alltags	 OL alltags  OLE text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
				
				|	 alltags	 DL alltags  DLE text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
				
				|	 alltags	 DT alltags  DTE text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
		        |	 alltags	 DD alltags  DDE text					{
																char *s= malloc(1000);
																strcpy(s,$1);
																strcat(s,"\n");
																strcat(s,$3);
																strcat(s,"\n");
																strcat(s,$5);
																$$=s;
																}
			    
																	
				|	text 										{char *s=malloc(1000);
																strcpy(s,$1);
																//strcat(s,"\n");
																//strcpy(s,$2);
																$$=s;}	
				
			   									
				;


				
/*              ********************************************************
                                   TEXT is retrieved here
                ********************************************************

*/

text			:  TEXT  	{char *s =malloc(1000);
							strcpy(s,$1);
							$$=s;	
							}
				|			{$$="";}	
				
				;		
				

				
				
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
