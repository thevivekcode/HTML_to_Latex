bison -d  parser.y
flex lexer.l
g++ -std=c++11 lex.yy.c parser.tab.c ast.cpp
./a.out  $1 $2
