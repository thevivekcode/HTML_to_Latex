#include<bits/stdc++.h>
using namespace std;

enum AST_Node_Type{
	HTML_H, HEAD_H, TITLE_H, BODY_H, P_H, CENTER_H,  DATA_H
};


struct node{
AST_Node_Type nodetype;
string data;
vector<node*> children;
};


node* makenode(){
node* temp=new node;
return temp;
}

node* makenode(string data){
node* temp=new node;
temp->data=data;
return temp;
}

void addchildren(node* temp , node* c){
temp->children.push_back(c);

}
