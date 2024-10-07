# Archivo makefile para generar el analizador de léxico .
lex.yy.c: Lexico.lex
	flex -l Lexico.lex

comp : lex.yy.c
	gcc -olexico lex.yy.c

clean :
	rm lex.yy.c lexico