// ************************************************************************
// ***
// *** Fichero : MAIN .C
// *** Funcion : Pruebas de FLEX / BISON para prácticas de PL
// ***
// ************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"

extern FILE *yyin;

int yyparse(void);




// ************************************************************************

FILE *abrir_entrada(int argc, char *argv[]){

	FILE *f = NULL;

	if (argc > 1){

		f = fopen(argv[1], "r");

		if (f==NULL){

			fprintf(stderr, "fichero ´%s´ no encontrado\n", argv[1]);
			exit(1);

		}else{
			printf("\nLeyendo fichero ´%s´.\n\n", argv[1]);
		}

	}else{
		printf("\nLeyendo entrada estándar.\n\n");
	}

	return f;

}

int main( int argc, char *argv[1]){

	yyin = abrir_entrada(argc, argv);

	return yyparse();

}
