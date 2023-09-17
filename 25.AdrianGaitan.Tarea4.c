/*
- Fecha: 17 de septiembre 2023
- Hora: 10:00 am
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en pantalla una figura en el centro de la pantalla, la figura
- es un rombo con una altura de 7 caracteres y un ancho de 7 caracteres. 
- La figura se imprime desde el centro de la pantalla hasta los extremos de la misma.
- Entrada: Ninguna.
- Salida: Un rombo con una altura de 7 caracteres y un ancho de 7 caracteres.
*/

//Librerías
#include <stdio.h>
#include <stdlib.h>

int printChar(char caracter, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("%c", caracter);
    }
    return 0;
}// Esta función imprime un caracter la cantidad de veces que se le indique

int printFigureDown(int spaces, int letters){
    for ( ; spaces >= 6 && letters > 0; spaces++) {
        printChar(' ', spaces);
        printChar('Z', letters);
        printChar('\n', 1);
        system("sleep 0.25");
        letters -= 2;
    }
    return 0;
}// Esta función imprime la parte de abajo de la figura

int printFigureUp(int spaces, int letters) {
    for ( ; spaces > 6; spaces--) {
        printChar(' ', spaces);
        printChar('Z', letters);
        printChar('\n', 1);
        system("sleep 0.25");
        letters += 2;
    }
    return printFigureDown(6, 7);
}// Esta función imprime la parte de arriba de la figura

int main () {
    //Impresión de figura
    printFigureUp(9, 1);//El primer número corresponde a la cantidad de espacios con que inicia
    //la figura, y el segundo número corresponde a la cantidad de letras con que inicia la figura
    return 0;
}