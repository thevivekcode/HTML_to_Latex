#include<bits/stdc++.h>


using namespace std;

enum AST_Node_Type
{
	HTML_H,		HEAD_H,		TITLE_H, 	BODY_H, 	P_H, 		CENTER_H,  
	DATA_H, 	ALLTAG,		H1_H,		H2_H,		H3_H,		H4_H,
	A_H,		A_L,		FONT_H,		U_H,		B_H,		I_H,
	BR_H,		EM_H,		TT_H,		STRONG_H,	SMALL_H,	SUB_H,
	SUP_H,		DIV_H,		UL_H,		LI_H,		OL_H,		DL_H,
	DT_H,		DD_H,		FIG_H,		FIGC_H,		GREEK_H,	COMMENT_H,
	IMG_H,		TABLE_H,	TABLE_D,	T_T,		TR_D
};



typedef struct node{
AST_Node_Type nodetype;
string data;
vector<node*> children;
vector <pair<string,string> > attribute;
vector <string> tdata;
}node;



node* makenode();
void addchildren(node* , node* );
node* makenode(string);
void traverse(node *);

