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

// Librerías
#include <stdio.h>

// Las funciones se declaran antes de ser usadas. Esto es para que el compilador sepa que existen.
int factorial(int enesimo);                    // Esta función calcula el factorial de un número n.
double combinatoria(int enesimo, int k);         // Esta función calcula el coeficiente binomial de n y k.
int complementoBell(int enesimo, int k, int acc); // Esta función calcula la suma de los coeficientes binomiales de n y k.
int numeroBell(int n);                   // Esta función calcula el número de Bell de n.
void imprimirNumeroBell(int n);            // Esta función imprime los números de Bell de 0 a n.


int factorial (int enesimo) {
    int result = 1;
    for (int i = 1; i <= enesimo; i++) {
        result *= i;
    }
    return result;
}
// Esta función calcula el factorial de un número n.

double combinatoria(int n, int k){
    return factorial(n) / (factorial(k) * factorial(n - k));
}//Combinatoria == n!/(k!(n-k)!)

int numeroBell(int n) {
    int acc = 1;
    for (int i = 1; i <= n; i++) {
        int temp = 0;
        for (int j = 0; j < i; j++) {
            temp += combinatoria(i - 1, j) * acc;
        }
        acc = temp;
    }
    return acc;
}

void imprimirNumeroBell(int n) {
    for (int i = 0; i <= n; i++) {
        printf("%d ", numeroBell(i));
    }
}

int main()
{
    //Declaración e inicialización de variables
    int n = 0; // Esta variable almacena el número de términos que se desean imprimir.
    //Mensaje de bienvenida
    printf("Este programa va imprimir los términos que le solicites de la serie de Bell: \nEsta serie cuenta el número de particiones no vacías de un conjunto de n elementos. \nComienza con los números 1, 1 y los siguientes términos se calculan como la suma de \nlos términos anteriores multiplicados por los números naturales consecutivos.\nIngrese a continuación el número de términos deseados: ");
    scanf("%d", &n);

    //Impresión de terminos deseados
    printf("\nLos primeros %d términos de la serie de Bell son: ", n);
    imprimirNumeroBell(n - 1);
    return 0;
}