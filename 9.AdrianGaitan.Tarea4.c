/*
- Fecha: 13 de septiembre 2023
- Hora: 9:47 pm
- Versión del código: 1.0
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla los primeros n términos de la serie de Bell:
- Esta serie cuenta el número de particiones no vacías de un conjunto de n elementos.
- Comienza con los números 1, 1 y los siguientes términos se calculan como la suma de
- los términos anteriores multiplicados por los números naturales consecutivos.
- Entrada: Un número entero n que representa la cantidad de términos que se desean imprimir.
- Salida: Los primeros n términos de la serie de Bell.
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

#include <stdio.h>
#include <math.h>

double factorial(int enesimo) {
    double result = 1;
    for (int i = 1;  i <= enesimo; i++) {
        result *= i;
    }
    return result;
}// Esta función calcula el factorial de un número enesimo

double stirlingNumber(int enesimo, int k) {
    double result = 0;
    for (int i = 0; i <= k; i++) {
        result += pow(- 1, k - i) * pow(i, enesimo) / (factorial(i) * factorial(k - i));
    }

    if (enesimo >= 0 && enesimo == k) {
        result = 1;
    }
    if ( enesimo >= 1 && k == 1) {
        result = 1;
    }
    
    return result;
}// Esta función calcula los números de Stirling de segunda clase

double bellNumber(int enesimo) {
    double result = 0;
    for (int k = 0; k <= enesimo; k++) {
        result += stirlingNumber(enesimo, k);
    }
    return result;
}


int main() {
    //Declaración e inicialización de variables
    int cantidadTerminos = 0;//Cantidad de terminos deseados

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa va imprimir los términos que le solicites de la serie de Bell: \nEsta serie cuenta el número de particiones no vacías de un conjunto de n elementos. \nComienza con los números 1, 1 y los siguientes términos se calculan como la suma de \nlos términos anteriores multiplicados por los números naturales consecutivos.\nIngrese a continuación el número de términos deseados: ");
    scanf("%i", &cantidadTerminos);

    //Impresión de terminos deseados
    for (int i = 0; i < cantidadTerminos; i++) {
        cantidadTerminos - 1 == i ? printf("%.0lf.", bellNumber(i)) :
        printf("%.0lf, ", bellNumber(i));
    }
    return 0;   
}