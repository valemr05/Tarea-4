/*- Fecha de publicación: 2023-09-03
- Hora: 4:00 p.m
- Versión de su código: 1.0
- Autor. Ing(c) Samuel Santa Martínez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- El siguiente programa presenta la serie de Fibonacci sin sobrepasar el número 10,000
- Salvedad: El programa no admite ingreso de datos.
*/
#include <stdio.h>

int main()
{
    int primerValor = 0, segundoValor = 1, auxiliar = 0;

    printf( "Este programa presenta la serie de Fibonacci como la serie que comienza con los dígitos 1 y 0 y va\nsumando progresivamente los dos últimos elementos de la serie, así: 0 1 1 2 3 5 8 13 21 34.......\nPara este programa, se presentará la serie de Fibonacci hasta llegar sin sobrepasar el número 10,000.\n" );
    
    for( ; primerValor < 10000; ){
        printf( "%i, ", primerValor );
        
        auxiliar = primerValor + segundoValor;
        primerValor = segundoValor;
        segundoValor = auxiliar;
    }//fin del for

    return 0;
}