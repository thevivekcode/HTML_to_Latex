bison -d  sample.y
flex sample.l
g++ lex.yy.c sample.tab.c
./a.out sample.html sample.txt
