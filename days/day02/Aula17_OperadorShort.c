#include <stdio.h>
#include <stdlib.h>

/*
    Aula 17: 
    sizeof x ou sizeof(int)
*/

int main(void) {
    int y = 0;
    short int x = 32767;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %hi\n", x);
    return (0);
}