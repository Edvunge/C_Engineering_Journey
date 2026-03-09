#include <stdio.h>
#include <stdlib.h>

/*
    Aula 22:
    operador long para o tipo double
    double   -> %lf
    long double   ->  %Lf


    __mingw_printf();
*/

int main(void) {
    float x = 3.1415;
    long double y = 3.141513321212323323;

    printf("Valor de y: %Lf\n", y);
    printf("Um double precisa de %d bytes de memoria.\n", sizeof y);
    return (0);
}