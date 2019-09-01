%{
#include<bits/stdc++.h>
#include "ast.h"
using namespace std;
void yyerror(const char *);
FILE *fileout;  
extern node *root;                                                     
extern FILE *yyin;
int yylex();
extern char * yytext; 
%}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------

%union
{
char *s;
struct node *node;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------

%start  	doc_start
%token		HTML		HTMLE		HEAD		HEADE			A
%token		BODY		BODYE		TITLE		TITLEE			FONT
%token		AE		FONTE		CENTER		CENTERE			IMG
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
%token		LI		LIE		OL		OLE			
%token	<s>	TEXT		GREEK		HREF		SIZE		
%token	<s>	IMGSRC		IMGWIDTH	IMGHEIGHT	FIGURE				
%token	<s>	FIGUREE 	FIGCAPTION 	FIGCAPTIONE	BORDER
%token 	<s>	ATITLE		ANAME				IMGFIGCAPTION
	
%type	<s>	table_border	table_caption
%type	<node>	doc_start	content_head	content_title	content_body		alltags	
%type	<node>	text		a_tag		a_attr	 	img_tag			img_attr
%type	<node>	table_tag	table_data	tr_data
	
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------		
	

%%
/*              --------------------------------------------------------
                 Document starts here with head and body content
                --------------------------------------------------------

*/
doc_start 	:	 HTML content_head content_body HTMLE 					{
												
												root=makenode();
												root->nodetype=HTML_H;
												addchildren(root,$2);
												addchildren(root,$3);
												}
		;
			
			

content_head	:	  HEAD text content_title HEADE 					{
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
												$$=makenode($2->data);
												$$->nodetype=TITLE_H;
												
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

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
				
/*             ---------------------------------------------------------
                       ALL Different tags of body are lsited here
               ---------------------------------------------------------
*/				



alltags 	:	alltags	P alltags  PE  text						{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=P_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
												
		|	alltags	CENTER alltags CENTERE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=CENTER_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
		|	 alltags	 H1 alltags  H1E text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=H1_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}

		|	 alltags	 H2 alltags  H2E text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=H2_H;
												addchildren(temp,$3);
												
												addchildren($$,$1);
												addchildren($$,temp);
												
												addchildren($$,$5);
												}

		|	 alltags	 H3 alltags  H3E text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=H3_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
		|	 alltags	 H4 alltags  H4E text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=H4_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
		
		|	 alltags	 a_tag text						{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=ALLTAG;
												addchildren(temp,$2);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$3);
												}
									

		|	 alltags	 FONT SIZE alltags  FONTE text				{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode($3);
												temp->nodetype=FONT_H;
												addchildren(temp,$4);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$6);
												}
												
		|	 alltags	 U alltags  UE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=U_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
																
		|	 alltags	 B alltags  BE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=B_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
																
		|	 alltags	 I alltags  IE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=I_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
												
		
		|	 alltags	 EM alltags  EME text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=EM_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
																	
		|	 alltags	 TT alltags  TTE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=TT_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}	
																														
		|	 alltags	 STRONG alltags  STRONGE text				{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=STRONG_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}

		|	 alltags	 SMALL alltags  SMALLE text				{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=SMALL_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
												
		|	 alltags	 SUB alltags  SUBE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=SUB_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
																
		|	 alltags	 SUP alltags  SUPE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=SUP_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
												
		
																
		|	 alltags	 DIV alltags  DIVE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=DIV_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}

		|	 alltags	 UL alltags  ULE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=UL_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
																
		|	 alltags	 LI alltags  LIE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=LI_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}

		|	 alltags	 OL alltags  OLE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=OL_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
				
		|	 alltags	 DL alltags  DLE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=DL_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
				
		|	 alltags	 DT alltags  DTE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=DT_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}

		|	alltags		DD alltags  DDE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=DD_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
												
		|	alltags	FIGURE alltags  FIGUREE text					{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=FIG_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
															
		|	alltags	FIGCAPTION alltags  FIGCAPTIONE text				{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=FIGC_H;
												addchildren(temp,$3);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$5);
												}
		|	alltags img_tag text						{
											$$=makenode();
											$$->nodetype=ALLTAG;
											struct node* temp=makenode();
											temp->nodetype=IMG_H;
											for(int i=0;i<$2->attribute.size();i++)
											{
											temp->attribute.push_back(make_pair($2->attribute[i].first,$2->attribute[i].second));
											}
											addchildren($$,$1);
											addchildren($$,temp);
											addchildren($$,$3);
											}

		|	alltags	table_tag text							{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode();
												temp->nodetype=ALLTAG;
												addchildren(temp,$2);
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$3);
												}


		|	 alltags	GREEK	text						{
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode($2);
												temp->nodetype=GREEK_H;
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$3);
												}
												
										
		
												
		|	 alltags	 BR   text						{           
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode("");
												temp->nodetype=BR_H;
												addchildren($$,$1);
												addchildren($$,temp);
												addchildren($$,$3);
												}

					
		|	text 									{
												$$=makenode($1->data);
												$$->nodetype=DATA_H;
												
												}	
				
			   									
		;
		
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------


a_tag		:	A a_attr alltags AE							{ 
												$$=makenode();
												$$->nodetype=ALLTAG;
												struct node* temp=makenode($2->data);
												temp->nodetype=A_H;
												struct node* temp2=makenode($3->data);
												temp2->nodetype=A_L;
												addchildren($$,temp);
												addchildren($$,temp2);
												}

a_attr		:	a_attr	HREF								{ 
												string s;
												s = $1->data + $2;
												$$=makenode(s);
												$$->nodetype=DATA_H;
												}

		|	a_attr	ATITLE								{ 
												string s;
												s = $1->data + "";
												$$=makenode(s);
												$$->nodetype=DATA_H;
												}

		|	a_attr	ANAME								{ 
												string s;
												s = $1->data + "";
												$$=makenode(s);
												$$->nodetype=DATA_H;
												}

					
		|										{$$=makenode("");
												$$->nodetype=DATA_H;}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------

img_tag		:	IMG	img_attr 				{ 
									$$=makenode();
									$$->nodetype=IMG_H;
									for(int i=0;i<$2->attribute.size();i++)
									{
									$$->attribute.push_back(make_pair($2->attribute[i].first,$2->attribute[i].second));
									}
									}

												

img_attr	:	img_attr	IMGSRC							{ 
												$$->attribute.push_back(make_pair("src",$2));
												}

		|	img_attr	IMGWIDTH						{ 
												$$->attribute.push_back(make_pair("width",$2));
												}

		|	img_attr	IMGHEIGHT						{ 
												$$->attribute.push_back(make_pair("height",$2));
												}
		|										{}
		;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------

          

table_tag	:	TABLE table_border table_caption table_data TABLEE 						{
												$$=makenode();
												$$->nodetype=T_T;
												addchildren($$,$4);
												$$->data=$3;
												if($2 != "")
												{
													string sb =string($2);
													if(sb[0]!='0')
													{
														$$->tdata.push_back($2);
													}
												}
												
												
												}
table_border	: BORDER									{$$=$1;}
		|										{$$=(char *)"";}

table_caption	: 	CAPTION TEXT CAPTIONE							{$$=$2;}
		|										{$$=(char *)"";}
														


table_data	:	table_data TR tr_data TRE						{$$=makenode();
												$$->nodetype=TABLE_H;
												struct node* temp=makenode();
												temp->nodetype=TABLE_D;
												for(int i=0;i<$3->tdata.size();i++)
												{
												temp->tdata.push_back($3->tdata[i]);
											
												}
												addchildren($$,$1);
												addchildren($$,temp);
												
												
												}



		|                             							{$$=makenode();
												$$->nodetype=ALLTAG;}

tr_data		:	tr_data TH text THE 							{
												
												$$->tdata.push_back($3->data);
												}

		|	tr_data TD text TDE							{
												
												$$->tdata.push_back($3->data);
												}

		|										{$$=makenode();
												$$->nodetype=TR_D;}
		;


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------


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

                                                



