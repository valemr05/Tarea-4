//Ejercicio 2

#include <stdio.h>

int main()
{
    int primerNumero = 0, segundoNumero = 1, auxiliar = 0, sumaFibonacci = 0;

    printf( "Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.\nLos números a sumar son:\n" );

    for ( int i = 0; i < 11; i++ )
    {
        printf( "%i, ", primerNumero );
        sumaFibonacci += primerNumero;
        auxiliar = primerNumero + segundoNumero;
        primerNumero = segundoNumero;
        segundoNumero = auxiliar;
    }

    printf( "%i y su suma es %i", primerNumero, sumaFibonacci + primerNumero );

    return 0;
}