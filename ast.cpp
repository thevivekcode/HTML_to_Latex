#include<bits/stdc++.h>
#include "import_file.h"
void yyerror(const char *);
                                                
extern FILE *yyin;
extern int yyparse();
int yylex();
extern char * yytext; 
using namespace std;


string s="";
map <int ,string > mymap
{
{0,"\\docummentclass{article}\n"},
{1,""},
{2,"\\title\n"},
{3,"\\begin{document}\n"},
{4,"\\par\n"},
{5,"\\begin{center}\n"},
{7,""}
};

map <int ,string > mymape
{
{0,""},
{1,""},
{2,""},
{3,"\\end{document}\n"},
{4,""},
{5,"\\end{center}\n"},
{7,""}
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
node *root;
void addchildren(node* temp , node* c){
temp->children.push_back(c);
}

void traverse(node *root)
{
  cout<<root->nodetype<<endl;
	if(root->nodetype==6)
		s=s+root->data+"\n";
	else
	  s=s+mymap[root->nodetype];
	 
	for(int i=0;i<root->children.size();i++)
	{
	 traverse(root->children[i]);
	}

	s=s+mymape[root->nodetype];
 

}

int main(int argc,char *argv[]){   
FILE *fileout;                                
yyin=fopen(argv[1],"r");
fileout=fopen(argv[2],"w+");
yyparse(); 

traverse(root);
cout<<s;                                                          

}

void yyerror(const char *s){                                                    

printf("Syntax error");

 
}
