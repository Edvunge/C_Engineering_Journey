#include <stdio.h>
#include <stdlib.h>

/*
    Aula 08: Função getC()
    Lendo caracteres
*/

int main(void) {
    char letra; 

    printf("Digite uma letra: ");
    letra = getc(stdin);
    
    printf("Caracter lido:  %c\n", letra);
    return (0);
}