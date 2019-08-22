yacc -d -v sample.y
flex sample.l
gcc lex.yy.c y.tab.c
./a.out sample2.html sample.txt
