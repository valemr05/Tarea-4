/*
- Fecha: 1 de septiembre 2023
- Hora: 1:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa toma como valor de entrada un número x, en el que quiere evaluar la serie de Taylor
- la función e^(x) = x^0/0! + x^1/1! + x^2/2! + x^3/3! ... x^n/n!  X | -∞ < x < ∞
- Entrada: Un número x y un número n.
- Salida: El resultado de la serie de Taylor.
*/

//Librerías
#include <stdio.h>
#include <math.h>

double factorial(int enesimo) {
    double result = 1;
    for (int i = 1;  i <= enesimo; i++) {
        result *= i;
    }
    return result;
}// Esta función calcula el factorial de un número enesimo

double taylor(long long int x, long long int enesimo) {
    double result = 0;
    for (int i = 0; i <= enesimo; i++) {
        result += pow(x, i) / factorial(i);
    }
    return result;
}

int main () {
    //Declaración e inicialización de variables
    long long int x = 0, enesimo = 0;

    //Mensaje de bienvenida
    printf("Bienvenido, este programa calcula la serie de Taylor de e^(x)\n");

    //Entrada de datos
    printf("Ingrese el valor de x: ");
    scanf("%lld", &x);
    printf("Ingrese la cantidad de términos: ");
    scanf("%lld", &enesimo);

    //Impresión de resultados
    printf("El resultado de la serie de Taylor es: %f\n", taylor(x, enesimo));
    return 0;
}