#include <stdio.h>
#include <stdlib.h>

/*
    Aula 11: Exercicio
    Ler sexo, idade, peso e altura
*/

int main(void) {
    char sexo;
    int idade;
    float peso, altura; 

    printf("Digite sexo (f, F, m ou M), idade, peso e altura: \n");
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
    
    printf("\nSexo:  %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);
    return (0);
}