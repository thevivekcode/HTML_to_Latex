%{
#include<bits/stdc++.h>
#include "ast.h"
using namespace std;
void yyerror(const char *);
FILE *fileout;                                                       
extern FILE *yyin;
int yylex();
extern char * yytext; 
%}

%union
{
char *s;
struct node *node;
}


%start  	doc_start
%token		HTML		HTMLE		HEAD		HEADE			A
%token		BODY		BODYE		TITLE		TITLEE			FONT
%token		AE		FONTE		CENTER		CENTERE			
%token		BR		P		PE		H1
%token		H1E 		H2		H2E		H3 			H3E
%token		H4		H4E		UL		ULE			DL
%token		DLE		DT		DTE		DD			DDE
%token		DIV		DIVE		U		UE			B
%token		BE		I		IE		EM			EME
%token		TT		TTE		STRONG		STRONGE			SMALL
%token		SMALLE		SUB		SUBE		SUP			SUPE
%token 		TABLE 		TABLEE		CAPTION		TH			CAPTIONE
%token		THE		TR		TRE		TD			TDE			
%token		LI		LIE		OL		OLE			IMG
%token	<s>	TEXT		GREEK		HREF		SIZE		
%token	<s>	IMGSRC		IMGWIDTH	IMGHEIGHT	FIGURE				
%token	<s>	FIGUREE 	FIGCAPTION 	FIGCAPTIONE	BORDER
%token 	<s>	ATITLE		ANAME		COMMENT		IMGFIGCAPTION



%type	<node>	doc_start	content_head	content_title	content_body	alltags	text
	
		
	

%%
/*              ********************************************************
                 Document starts here with head and body content
                ********************************************************

*/
doc_start 	: HTML content_head content_body HTMLE 						{
												$$=makenode();
												$$->nodetype=HTML_H;
												addchildren($$,$2);
												addchildren($$,$3);
												}
		;
			
			

content_head	:	HEAD content_head content_title HEADE 					{
												$$=makenode();
												$$->nodetype=HEAD_H;
												addchildren($$,$2);
												addchildren($$,$3);
												}
																
		|	text                                   					{
												$$=makenode($1->data);
												$$->nodetype=HEAD_H;
												}
		;
			
			
			

content_title	:	TITLE text TITLEE 							{
												$$=makenode();
												$$->nodetype=TITLE_H;
												addchildren($$,$2);
												}
		;
				
				

content_body	:	BODY	alltags 	BODYE 						{
												$$=makenode();
												$$->nodetype=BODY_H;
												addchildren($$,$2);
												}
		;
				
/*              ********************************************************
                       ALL Different tags of body are lsited here
                ********************************************************
*/				



alltags 	:	alltags	P alltags  PE  text						{
												struct node* temp=makenode();
												temp->nodetype=P_H;
												$$=makenode();
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
												
		|	alltags	CENTER alltags CENTERE text					{
												struct node* temp=makenode();
												temp->nodetype=CENTER_H;
												$$=makenode();
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
					
		|	text 									{
												$$=makenode($1->data);
												
												}	
				
			   									
		;




text		:	text TEXT  								{
												string s;
												s = $1->data + $2;
												$$=makenode(s);
												$$->nodetype=DATA_H;	
												}
		
		|										{
												$$=makenode("");
												$$->nodetype=DATA_H;
												}	
				
		;		
			

				
				
%%

                                                


int main(int argc,char *argv[]){   
                                  
yyin=fopen(argv[1],"r");
fileout=fopen(argv[2],"w+");
yyparse();                                                              

}

void yyerror(const char *s){                                                    

printf("Syntax error");

 
}
