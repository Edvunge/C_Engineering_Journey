#include <stdio.h>
#include <stdlib.h>

/*
    Aula 05: 
    Lendo números reais
*/

int main(void) {
    float numero; 

    printf("Valor da minha variavel: %.2f\n", numero);
    
    printf("Digite um número real: ");
    scanf("%f",&numero);

    printf("Valor Lido: %.3f", numero);
    return (0);
}