#include<bits/stdc++.h>
#include "ast.h"
void yyerror(const char *);                                               
extern FILE *yyin;
extern int yyparse();
int yylex();
extern char * yytext; 
using namespace std;

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------

string s="";
int flag=0,fborder=0;

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*				 ----------------------------------------------------
						mymap to map starting 
				-------------------------------------------------------
*/


map <int ,string > mymap
{
{0,"\\documentclass{article}\n\\usepackage{hyperref}\n\\usepackage{comment}\n\\usepackage[utf8]{inputenc}\n\\usepackage[T1]{fontenc}\n\\usepackage{enumitem}\n\\usepackage{graphicx}\n"},
{1,""},
{2,"\\title{"},
{3,"\\begin{document}\n\\maketitle\n"},
{4,"\\par "},
{5,"\\begin{center}"},
{7,""},
{8,"\\section{"},
{9,"\\subsection{"},
{10,"\\subsubsection{"},
{11,"\\textbf{"},
{12,"\\href{"},
{13,"{"},
{14,"{\\fontsize{"},
{15,"\\underline{"},
{16,"\\textbf{"},
{17,"\\textit{"},
{18,"\\hfill \\break\n"},
{19,"\\emph{"},
{20,"\\textt{"},
{21,"\\textbf{"},
{22,"{\\fontsize{4}{5}\\selectfont  "},
{23,"_{"},
{24,"^{"},
{25,""},
{26,"\\begin{itemize}\n"},
{27,"\\item"},
{28,"\\begin{enumerate}\n"},
{29,"\\begin{description}[style=unboxed, labelwidth=\\linewidth, font =\\sffamily\\itshape\\bfseries, listparindent =0pt, before =\\sffamily]"},
{30,"\\item["},
{31,""},
{32,"\\begin{figure}\n"},
{33,"\\caption{"},
{34,"\\ "},
{35,"\n\\begin{comment}\n"},
{36,"\\includegraphics"},
{37,"\\begin{tabular}{"},
{38,""},
{39,"\\begin{table}\n\\centering\n"}
};

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------


/*				 ----------------------------------------------------
						mymape to map ending 
				-------------------------------------------------------
*/


map <int ,string > mymape
{
{0,""},
{1,""},
{2,"}\\author{Vivek Singh}\n"},
{3,"\\end{document}\n"},
{4,"\n"},
{5,"\\end{center}"},
{7,""},
{8,"}\n"},
{9,"}\n"},
{10,"}\n"},
{11,"}\n"},
{12,""},
{13,"\n"},
{14,"}"},
{15,"}"},
{16,"}"},
{17,"}"},
{18,""},
{19,"}"},
{20,"}"},
{21,"}"},
{22,"}"},
{23,"}"},
{24,"}"},
{25,""},
{26,"\\end{itemize}\n"},
{27,"\n"},
{28,"\\end{enumerate}\n"},
{29,"\\end{description}\n"},
{30,"]"},
{31,""},
{32,"\\end{figure}\n"},
{33,"}\n"},
{34,"\\ "},
{35,"\n\\end{comment}\n"},
{36,""},
{37,""},
{38,""},
{39,"\\end{tabular}\n\\end{table}\n"}
};

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*				 ----------------------------------------------------
						special to map greek symbols
				-------------------------------------------------------
*/

map <string,string> special
{
{"&Alpha;","A"},
{"&alpha;","\\alpha"},
{"&Beta;","B"},
{"&beta;","\\beta"},
{"&Gamma;","\\Gamma"},
{"&gamma;","\\gamma"},
{"&Delta;","\\Delta"},
{"&delta;","\\delta"},
{"&Epsilon;","E"},
{"&epsilon;","\\epsilon"},
{"&Zeta;","Z"},
{"&zeta;","zeta"},
{"&Eta;","H"},
{"&Theta;","\\Theta"},
{"&theta;","\\theta"},
{"&Iota;","I"},
{"&iota;","i"},
{"&Kappa;","K"},
{"&kappa;","kappa"},
{"&Lambda;","\\Lambda"},
{"&lambda;","\\lambda"},
{"&Mu;","M"},
{"&mu;","\\mu"},
{"&Nu;","N"},
{"&nu;","nu"},
{"&Xi;","\\Xi"},
{"&xi;","\\xi"},
{"&Omicron;","O"},
{"&Pi;","\\Pi"},
{"&pi;","\\pi"},
{"&Rho;","P"},
{"&rho;","\\rho"},
{"&Sigma;","\\Sigma"},
{"&sigma;","\\sigma"},
{"&Tau;","T"},
{"&tau;","\\tau"},
{"&Upsilon;","\\Upsilon"},
{"&upsilon;","\\upsilon"},
{"&Phi;","\\Phi"},
{"&phi;","\\phi"},
{"&Chi;","X"},
{"&chi;","\\chi"},
{"&Psi;","\\Psi"},
{"&psi;","\\psi"},
{"&Omega;","\\Omega"},
{"&omega;","\\omega"}
};


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------



node* makenode()
{
node* temp=new node;
return temp;
}

node* makenode(string data)
{
node* temp=new node;
temp->data=data;
return temp;
}

node *root;

void addchildren(node* temp , node* c)
{
temp->children.push_back(c);
}


//------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*				 ----------------------------------------------------
						TREE TRAVERSAL AND CONVERSION 
				-------------------------------------------------------
*/

void traverse(node *root)
{

	 if(root->nodetype==6)// DATA_H
	{	string sdata="";
		string rdata=root->data;
		for(int i=0;i<rdata.length();i++)
		{
		if(rdata[i]=='_'||rdata[i]=='#'||rdata[i]=='%'||rdata[i]=='$'||rdata[i]=='&'||rdata[i]=='{'||rdata[i]=='}')
		sdata=sdata+"\\"+rdata[i]+"\\ ";
		else if(rdata[i]=='~')
		sdata=sdata+"\\sim"+"\\ ";
		else if(rdata[i]=='^')
		sdata=sdata+"\\hat{}"+"\\ ";
		else if(rdata[i]=='\\')
		sdata=sdata+"\\textbackslash"+"\\ ";
		else if(rdata[i]=='@')
		sdata=sdata+rdata[i]+"\\ ";
		else
		sdata=sdata+rdata[i];
		}
		s=s+sdata;
	}

	else if(root->nodetype==2) //TITLE_H
	{
		s=s+mymap[root->nodetype];
		s=s+root->data;
	}
	
	else if(root->nodetype==8) //H1
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==9) //H2
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==10) //H3
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==11) //H4
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==12) //A_H
	{
		s=s+mymap[root->nodetype];
		s=s+root->data+"}";
	}

	else if(root->nodetype==13) //A_L
	{
		s=s+mymap[root->nodetype];
		s=s+root->data+"}";
	}
	
	else if(root->nodetype==14) //FONT_H
	{
		 s=s+mymap[root->nodetype];
		 s=s+root->data+"}"+"{"+to_string((int)(1.2*(stoi(root->data))))+"}"+"\\selectfont  ";
	}

	else if(root->nodetype==15) //U
	{
		s=s+mymap[root->nodetype];
	}

	else if(root->nodetype==16) //B
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==17) //I
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==18) //br_h
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==19) //EM_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==20) //TT_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==21) //STRONG_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==22) //SMALL_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==23) //SUB_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==24) //SUP_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==26) //UL_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==27) //LI_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==28) //OL_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==29) //OL_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==30) //OL_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==32) //OL_H
	{
		s=s+mymap[root->nodetype];
	
	}

	else if(root->nodetype==33) //OL_H
	{
		s=s+mymap[root->nodetype];
	}

	else if(root->nodetype==34) //GREEK_H
	{
		s=s+mymap[root->nodetype];
		//int len=root->data.length();
		//s=s+"\\"+root->data.substr(1,len-2)+" ";
		s=s+special[root->data];
	}

	else if(root->nodetype==35) //COMMENT_H
	{
		s=s+mymap[root->nodetype];
		s=s+root->data;
	}

	else if(root->nodetype==36) //IMG_H
	{
		string attr1="";
		string attr2="";
		s=s+mymap[root->nodetype];

		for(int i=root->attribute.size()-1;i>=0;i--)
		{

			if(root->attribute[i].first=="height" && attr1=="")
			attr1=attr1+"["+"height"+"="+root->attribute[i].second+"px";
			else if(root->attribute[i].first=="height")
			attr1=attr1+","+"height"+"="+root->attribute[i].second+"px";

			if(root->attribute[i].first=="width" && attr1=="")
			attr1=attr1+"["+"width"+"="+root->attribute[i].second+"px";
			else if(root->attribute[i].first=="width")
			attr1=attr1+","+"width"+"="+root->attribute[i].second+"px";

			if(root->attribute[i].first=="src")
			attr2="{"+root->attribute[i].second +"}";
		}

		if(attr1!="")
			s=s+attr1+"]"+attr2;
		else 
			s=s+attr2;
	}
	



	else if(root->nodetype==37 && flag==0 && fborder==0) //TABLE_H
	{
		s=s+mymap[root->nodetype];

		for(int i=0;i<root->children[1]->tdata.size();i++)
		{
			s=s+"c ";
	
		}
		s=s+""+"}"+"\n";
		flag=1;
	}	

	else if(root->nodetype==37 && flag==0 && fborder==1) //TABLE_H
	{
		s=s+mymap[root->nodetype];

		for(int i=0;i<root->children[1]->tdata.size();i++)
		{
			s=s+"|c";
	
		}
		s=s+"|"+"}"+"\n";
		flag=1;
	}

	else if(root->nodetype==38 && fborder==0)   //TABLE_D
	{
		s=s+mymap[root->nodetype];
		for(int i=0;i<root->tdata.size()-1;i++)
		{
			s=s+root->tdata[i]+"  &  ";
		}
		s=s+root->tdata[root->tdata.size()-1];
		s=s+"  \\\\"+"\n";
	}

	else if(root->nodetype==38 && fborder==1)   //TABLE_D
	{
		s=s+mymap[root->nodetype];
		s=s+"\\hline";
		for(int i=0;i<root->tdata.size()-1;i++)
		{
	
			s=s+root->tdata[i]+"  &  ";
		}
		s=s+root->tdata[root->tdata.size()-1];
		s=s+"  \\\\"+"\n";
		s=s+"\\hline";
	}
		
	else if(root->nodetype==39 ) //T_T
	{	
		s=s+mymap[root->nodetype];
		if(root->tdata.size()>0)
			fborder=1;
		if(root->data!="")
		{
			
			s=s+"\\caption{"+root->data+"}\n";
		}
	
	}

		
	else if(root->nodetype!=37)
	  s=s+mymap[root->nodetype];



//----------------------------------------------------------------------------------------------------------------------------------------------------------------
/*		-----------------------------------------------
			RECUSIVELY TRAVERSE THE CHILDREN
		-----------------------------------------------
*/
		for(int i=0;i<root->children.size();i++)
		{
		 traverse(root->children[i]);
		}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------   
	
	 if(root->nodetype==39)
	 {
		 s=s+mymape[root->nodetype];
		 fborder=0;
		 flag=0;
	 }

 	 else if(root->nodetype!=37)
		 s=s+mymape[root->nodetype];
 

}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main(int argc,char *argv[])
{   
	FILE *fileout;                                
	yyin=fopen(argv[1],"r");
	fileout=fopen(argv[2],"w+");
	yyparse(); 
	ofstream fout(argv[2]);
	traverse(root);
	fout<<s;                                                          

}

void yyerror(const char *s)
{                                                    
	printf("Syntax error"); 
}
