/*

- for ejercicio 3


- Fecha de publicación: 03/09/2023
- Hora: 6:00 PM
- Versión de su código: 1.0
- Autor. Ing(c) Valeria Muñoz Ramirez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa imprime la serie de Lucas con la cantidad de terminos ingresada por el usuario.
- terminos: Los primeros nueve términos de la serie de Lucas son: 2, 1, 3, 4, 7, 11, 18, 29, 47.
- Salvedades: El programa admite valores ingresados de tipo entero, para valores de otro tipo no garantizamos sus resultados.
*/

#include <stdio.h>


int main(){
    // cantidadDeTerminos almacenará la cantidad de terminos que el usuario desea ver.
    int cantidadDeTerminos=0, primerTermino=2, segundoTermino=1, siguienteTermino=0;
  
    printf( "Este programa presenta la Serie de Lucas: \nLos primeros nueve términos de la serie son: 2, 1, 3, 4, 7, 11, 18, 29, 47. " );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );
    
    printf( "Los primeros %i términos de la serie Lucas son: ", cantidadDeTerminos );
    
    //se crea la condición para que la serie de lucas no sobrepase la cantidad de terminos que el usuario desea ver
    for ( int contador=1; contador <= cantidadDeTerminos; contador++ ){
     printf( "%i, ", primerTermino );

    siguienteTermino= primerTermino + segundoTermino;
    primerTermino= segundoTermino;
    segundoTermino= siguienteTermino;

    }//fin del if

 return 0;
}