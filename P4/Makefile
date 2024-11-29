OBJ = obj
SRC = src
BIN = bin
INCLUDE = include

Sintact: $(OBJ)/estructuras.o $(OBJ)/main.o $(OBJ)/y.tab.o
	@echo ""
	@echo Generando ejecutable...
	@echo ""
	gcc -o $(BIN)/Sintact $(OBJ)/estructuras.o $(OBJ)/main.o $(OBJ)/y.tab.o
	@echo ""
	@echo Ejecutable generado con éxito
	@echo ""

$(OBJ)/main.o: $(SRC)/main.c
	gcc -o $@ -c $(SRC)/main.c -I$(INCLUDE)

$(OBJ)/y.tab.o: $(SRC)/y.tab.c
	gcc -o $@ -c $(SRC)/y.tab.c -I$(INCLUDE)

$(SRC)/y.tab.c: $(SRC)/Sintact.y $(SRC)/lex.yy.c
	bison -t -v -d -Wcounterexamples -o $@ $(SRC)/Sintact.y

$(SRC)/lex.yy.c: $(SRC)/Lexico.lex
	lex -o $@ $(SRC)/Lexico.lex

$(OBJ)/estructuras.o: $(SRC)/estructuras.c
	gcc -o $@ -c $(SRC)/estructuras.c -I$(INCLUDE)

all:
	make Sintact

clean:
	@echo ""
	@echo Limpiando los ficheros...
	@echo ""
	rm -rf $(BIN)/Sintact $(OBJ)/* $(SRC)/y.tab.c $(SRC)/lex.yy.c
	@echo ""
	@echo Limpieza finalizada
	@echo ""
