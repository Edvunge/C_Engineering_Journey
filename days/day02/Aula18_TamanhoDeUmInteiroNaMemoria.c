#include <stdio.h>
#include <stdlib.h>

/*
    Aula 18:
    tamanho de um int na memoria 
    intervalo: -2.147.483.648    2.147.483.647
*/

int main(void) {
    int x = 2147483647;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %hi\n", x);
    return (0);
}