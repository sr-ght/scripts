#include <stdio.h>

// Função argumentada
int arg(int x, int y){

    printf("%i em funcao de %i", y, x);
}

void main(){

    int x = 10;
    int y = 5;

    arg(x, y);
}