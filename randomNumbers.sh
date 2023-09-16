#!/bin/bash

# Función para generar un número aleatorio en el rango [-500, 1000]
generate_random_number() {
    echo $((RANDOM % 1501 - 500))
}

# Número de veces que se ejecutará el programa con números aleatorios
cantidadNumeros=75

# Ejecuta el programa C con números aleatorios
gcc -o 13.AdrianGaitan.Tarea4 13.AdrianGaitan.Tarea4.c  # Compila el programa C
./13.AdrianGaitan.Tarea4 <<EOF
$cantidadNumeros
$(for _ in $(seq $cantidadNumeros); do generate_random_number; done)
EOF

# Limpia el programa compilado después de su ejecución
rm 13.AdrianGaitan.Tarea4 