#include <stdio.h>
#include <stdlib.h>

/*
    Aula 04: Função Scanf
    Lendo números inteiros
*/

int main(void) {
    int valor; // criei uma variavel para guardar um valor do tipo inteiro

    printf("Digite um valor inteiro: \n");
    scanf("%d",&valor);

    printf("A variavel valor: %d" , valor);
    return (0);
}