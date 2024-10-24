# PL

## Comandos P1

```bash

make

gcc lex.yy.c -o lexico

./lexico

```

## Comandos P2

```bash

make

./Sintact <[-t]> <[-v]> <[-d]> <programa>

```

-t Incluir código de depuración en el programa generado. Esto permite que el analizador obtenido, al ser ejecutado, escriba en pantalla las producciones que va aplicando cuando procesa
una entrada. Para hacerlo, debemos fijar la variable de entorno YYDEBUG a 1 antes de ejecutar
el analizador. Poniéndola a 0 (por defecto) no se obtendrá salida de depuración.
-v Indica a BISON que genere, además de y.tab.c, y.output, que contiene una descripción
textual de los estados del autómata finito determinista y correspondientes a la gramática de
entrada.
-d Indica a BISON que genere el archivo y.tab.h, que contiene la lista de tokens junto con su
código. Esto es especialmente útil para comprobar errores de tratamiento de los tokens por
considerar un código incorrecto.