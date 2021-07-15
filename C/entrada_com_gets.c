#include <stdio.h>

void main(){

    char string[100];
    printf("Digite uma palavra ou frase: ");
    // gets recebendo entrada de string
    gets(string);
    printf("\nVoce digitou: %s", string);
}