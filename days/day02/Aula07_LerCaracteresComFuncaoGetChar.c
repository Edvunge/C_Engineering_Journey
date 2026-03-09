#include <stdio.h>
#include <stdlib.h>

/*
    Aula 07: Função getChar()
    Lendo caracteres
*/

int main(void) {
    char letra; 

    printf("Digite uma letra: ");
    letra = getchar();
    
    printf("Caracter lido:  %c\n", letra);
    return (0);
}