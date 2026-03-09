#include <stdio.h>
#include <stdlib.h>

/*
    Aula 13: 
    Lendo dois caracteres
*/

int main(void) {
    char a, b; 

    printf("Digite duas letras: \n");
    scanf("%c %c", &a, &b);
    
    printf("Primeira letra: %c\nSegunda letra: %c\n",a ,b);
    return (0);
}