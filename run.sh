bison -d  sample.y
flex sample.l
g++ -std=c++11 lex.yy.c sample.tab.c ast.cpp
./a.out sample.html sample.txt
