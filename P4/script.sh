#!/bin/bash

# Comprobar si el archivo Sintact.output existe
if [ ! -f "Sintact.output" ]; then
    echo "Error: No se encontró el archivo Sintact.output. Asegúrate de que Bison lo generó."
    exit 1
fi

# Extraer los estados y las transiciones del autómata
# Se almacena en un archivo temporal
grep -E "Estado [0-9]+|desplazar|ir al estado|\$accept|reduce|:" Sintact.output > automata_info.txt

# Crear el archivo en formato DOT para Graphviz
output_dot="automata.dot"
echo "digraph DFA {" > $output_dot
echo "    rankdir=LR;" >> $output_dot
echo "    node [shape=circle];" >> $output_dot

# Inicializar variables para los estados
estado_actual=""

# Procesar el archivo temporal para generar nodos y transiciones
while IFS= read -r line; do
    if [[ $line =~ Estado\ ([0-9]+) ]]; then
        # Obtener el número del estado
        estado_actual="${BASH_REMATCH[1]}"
        echo "    $estado_actual [label=\"$estado_actual\"];" >> $output_dot
    elif [[ $line =~ \•\ (.+) ]]; then
        # Acción de desplazamiento y transición
        transicion="${BASH_REMATCH[1]}"
        echo "    $estado_actual [label=\"$estado_actual: $transicion\"];" >> $output_dot
    elif [[ $line =~ ([A-Z]+)\ +desplazar\ e\ ir\ al\ estado\ ([0-9]+) ]]; then
        # Transición de desplazamiento con token
        token="${BASH_REMATCH[1]}"
        estado_destino="${BASH_REMATCH[2]}"
        echo "    $estado_actual -> $estado_destino [label=\"$token: desplazar\"];" >> $output_dot
    elif [[ $line =~ reduce\ (.+) ]]; then
        # Acción de reducción
        regla_reduccion="${BASH_REMATCH[1]}"
        echo "    $estado_actual -> $estado_actual [label=\"reduce usando $regla_reduccion\"];" >> $output_dot
    elif [[ $line =~ \$accept ]]; then
        # Estado de aceptación
        echo "    $estado_actual [shape=doublecircle, label=\"accept\"];" >> $output_dot
    fi
done < automata_info.txt

# Terminar el archivo DOT
echo "}" >> $output_dot

# Generar la visualización del autómata usando Graphviz
output_image="automata.png"
dot -Tpng $output_dot -o $output_image

echo "Visualización del autómata generada en $output_image."

# Limpiar archivos temporales
rm automata_info.txt
