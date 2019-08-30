#include<bits/stdc++.h>


using namespace std;

enum AST_Node_Type
{
	HTML_H, HEAD_H, TITLE_H, BODY_H, P_H, CENTER_H,  DATA_H, ALLTAG
};



typedef struct node{
AST_Node_Type nodetype;
string data;
vector<node*> children;
}node;



node* makenode();
void addchildren(node* , node* );
node* makenode(string);
void traverse(node *);

