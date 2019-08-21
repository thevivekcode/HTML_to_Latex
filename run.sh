yacc -d sample.y
flex sample.l
gcc lex.yy.c y.tab.c
./a.out sample.html sample.txt
