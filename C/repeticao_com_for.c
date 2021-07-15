#include <stdio.h>

void main(){

    char nome[10] = "Bethania\n";
    printf("Valor de x: %s", nome);

    // Laço for
    for(int i = 0; i < 10; i++){
        printf("\n%c", nome[i]);
    }
}