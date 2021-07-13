#include <stdio.h>

int arg(int x, int y){
    //retorna a multiplicação de x e y
    return (x*y);
}

void main(){

    int mult = arg(10,5);
    printf("O resultado da multiplicacao de x e y eh %i", mult);
}