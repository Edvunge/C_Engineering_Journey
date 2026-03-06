#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char ch = 'A';
    printf("The character %c has the character code %d.\n", ch, ch);

    for ( ; ch <= 'Z'; ++ch )
        printf("%2c", ch);
    return (0);
}