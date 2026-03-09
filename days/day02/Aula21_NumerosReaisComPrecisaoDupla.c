#include <stdio.h>
#include <stdlib.h>

/*
    Aula 21:
    tipo double
    %lf
*/

int main(void) {
    float x = 3.1415;
    double y = 3.1415443434232332232323;

    printf("Um double precisa de %lu bytes de memoria.\n", sizeof y);
    return (0);
}