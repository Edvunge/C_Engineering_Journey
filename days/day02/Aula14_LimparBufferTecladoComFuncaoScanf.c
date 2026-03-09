#include <stdio.h>
#include <stdlib.h>

/*
    Aula 13: 
    Lendo dois caracteres
*/

int main(void) {
    char a, b; 

    printf("Digite uma letra: \n");
    scanf("%c", &a);

    printf("Digite a segunda letra: \n");
    scanf(" %c",&b);
    
    printf("Primeira letra: %c\nSegunda letra: %c\n",a ,b);
    return (0);
}