.SUFFIXES:

sintact: main.o Sintact.tab.o
	gcc -o Sintact main.o Sintact.tab.o lex.yy.o

Sintact.tab.o: Sintact.tab.c lex.yy.c
	gcc -c Sintact.tab.c
	gcc -c lex.yy.c

main.o: main.c
	gcc -c main.c

Sintact.tab.c: Sintact.y lex.yy.c
	bison -t -v -d -Wcounterexamples Sintact.y

lex.yy.c: Lexico.lex
	flex -l Lexico.lex

clean :
	rm -f Sintact main.o Sintact.tab.o Sintact.tab.c lex.yy.c lex.yy.o

all :
	make clean
	make sintact