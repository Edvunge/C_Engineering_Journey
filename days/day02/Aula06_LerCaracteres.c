#include <stdio.h>
#include <stdlib.h>

/*
    Aula 06: 
    Lendo caracteres
*/

int main(void) {
    char sexo = 's'; 

    printf("Valor da minha variavel: %c\n", sexo);
    
    printf("Digite seu sexo: (f, F, m ou M) ");
    scanf("%c",&sexo);

    printf("Valor Lido: %c", sexo);
    return (0);
}