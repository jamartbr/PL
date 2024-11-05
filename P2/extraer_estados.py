import pydot
import sys
import re

def crear_automata(directorio):
    # Expresiones regulares para identificar los estados y las transiciones
    patron_estado = re.compile(r"^\s*Estado\s+(\d+)\s*$")
    patron_transicion = re.compile(r"^\s*(\w+)\s+desplazar\s+e\s+ir\s+al\s+estado\s+(\d+)\s*$")

    # Diccionario para almacenar las transiciones {estado_origen: [(simbolo, estado_destino), ...]}
    transiciones = {}

    # Leer archivo de texto con la descripción del autómata
    with open(directorio, 'r') as file:
        lines = file.readlines()

    estado_actual = None

    # Procesar cada línea para identificar estados y transiciones
    for line in lines:
        # Buscar inicio de un estado
        match_estado = patron_estado.match(line)
        if match_estado:
            estado_actual = match_estado.group(1)
            transiciones[estado_actual] = []  # Inicializar el estado en el diccionario
        # Buscar transición en el estado actual
        elif estado_actual:
            match_transicion = patron_transicion.match(line)
            if match_transicion:
                simbolo = match_transicion.group(1)
                estado_destino = match_transicion.group(2)
                transiciones[estado_actual].append((simbolo, estado_destino))

    # Crear el gráfico
    graph = pydot.Dot(graph_type="digraph")

    # Agregar nodos y arcos al gráfico según las transiciones
    for estado_origen, trans in transiciones.items():
        for simbolo, estado_destino in trans:
            edge = pydot.Edge(estado_origen, estado_destino, label=simbolo)
            graph.add_edge(edge)

    # Guardar el gráfico como imagen
    output_filename = "automata.png"
    graph.write_png(output_filename)
    print(f"Autómata guardado como {output_filename}")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Uso: python crear_automata.py <archivo_texto>")
    else:
        archivo_texto = sys.argv[1]
        crear_automata(archivo_texto)
