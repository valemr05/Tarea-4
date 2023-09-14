/*
- Fecha: 13 de septiembre 2023
- Hora: 4:20 pm
- Versión del código: 1.0
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla los primeros n terminos de la serie de Perrin.
- Entrada: Un número entero n que representa el enésimo término de la serie de Perrin.
- Salida: El enésimo término de la serie de Perrin.
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/
#include <stdio.h>

int perrin(int enesimo) {
    int primerTermino = 3,
        segundoTermino = 0,
        tercerTermino = 2,
        resultado = 0;

    if (enesimo == 0) 
        return 3;
    else if (enesimo == 1)
        return 0;
    else if (enesimo == 2) 
        return 2;
    else 
    for (int i = 3; i <= enesimo; i++) {
        resultado = primerTermino + segundoTermino;
        primerTermino = segundoTermino;
        segundoTermino = tercerTermino;
        tercerTermino = resultado;
    }
    return resultado;
}

int imprimirPerrin(int terminos) {
    printf("El número %i de términos de la serie de Perrin es: ", terminos);
    for (int i = 0; i <= terminos; i++) {
        i == terminos ? printf("%i.", perrin (i)):
        printf("%i, ", perrin (i));
    }
}

int main () {
    //Declaración e inicialización de variables
    int cantidadTerminos = 0;

    //Mensaje bienvenida y solicitud de datos
    printf("Este programa imprime en pantalla los primeros n terminos de la serie de Perrin.\n");
    printf("Ingrese la cantidad de términos de la serie de Perrin que desea ver: ");
    scanf("%i", &cantidadTerminos);

    //Impresión de resultados
    imprimirPerrin(cantidadTerminos);

    return 0;
}