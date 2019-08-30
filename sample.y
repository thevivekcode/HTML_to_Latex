%{
#include<bits/stdc++.h>
#include "import_file.h"
using namespace std;
void yyerror(const char *);
FILE *fileout;  
extern node *root;                                                     
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
doc_start 	:	HTML content_head content_body HTMLE 					{
												cout<<"------------------GRAMMAR-----------------"<<endl;
												root=makenode();
												root->nodetype=HTML_H;
												addchildren(root,$2);
												addchildren(root,$3);
												
												//cout<<$$->children[0]->children[0]->data<<endl;
												//cout<<$$->children[0]->children[1]->data<<endl;
												//cout<<$$->children[1]->children[0]->children[1]->nodetype<<endl;
												}
		;
			
			

content_head	:	HEAD text content_title HEADE 						{
												$$=makenode();
												$$->nodetype=HEAD_H;
												addchildren($$,$2);
												addchildren($$,$3);
												}
																
		|	                                   					{
												$$=makenode("");
												$$->nodetype=HEAD_H;
												}
		;
			
			
			

content_title	:	TITLE text TITLEE 							{
												$$=makenode();
												$$->nodetype=TITLE_H;
												addchildren($$,$2);
												}
		|										{
												$$=makenode("");
												$$->nodetype=TITLE_H;
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
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=P_H;
												addchildren(temp,$3);
												if($1->data!="")
												addchildren($$,$1);
												addchildren($$,temp);
												if($5->data!="")
												addchildren($$,$5);

												}
												
		|	alltags	CENTER alltags CENTERE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=CENTER_H;
												addchildren(temp,$3);
												if($1->data!="")
												addchildren($$,$1);
												addchildren($$,temp);
												if($5->data!="")
												addchildren($$,$5);
												//cout<<"altags CE"<<endl;
												//cout<<$$->children[0]->data<<endl;
												//cout<<$$->children[1]->nodetype<<endl;
												
												}
					
		|	text 									{
												$$=makenode($1->data);
												$$->nodetype=DATA_H;
												
												}	
				
			   									
		;




text		:	text TEXT  								{
												string s;
												s = $1->data + $2;
												$$=makenode(s);
												$$->nodetype=DATA_H;
												//cout<<"text data"<<$$->data<<endl;
											
												}
		
		|										{
												$$=makenode("");
												$$->nodetype=DATA_H;
												}	
				
		;		
			

				
				
%%

                                                



