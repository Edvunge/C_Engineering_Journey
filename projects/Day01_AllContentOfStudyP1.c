#include <stdio.h>
#include <stdlib.h>

int main(void) {
/*
    Estrutura do Programa:
    Crie um programa que processe dados de 3 cidades diferentes
    Para cada cidade, armazene as temperaturas mínimas e máximas de 7 dias
    Utilize tipos inteiros apropriados para cada variável (char, short, int, etc.)
*/

    char cidade1[20] = {"Namibe"};
    char cidade2[20] = {"Bie"};
    char cidade3[20] = {"Bengo"};


   printf("Digite o nome da cidade1: \n");
   fgets(cidade1, sizeof(cidade1), stdin);


    printf("cidade 1: %s " , cidade1);
    return (0);
}