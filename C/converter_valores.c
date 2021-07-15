#include <stdio.h>

void main(){

    int a = 5, b = 2;

    double div1 = a/b;

    // Convertendo variável
    double div2 = (double)a/(double)b;

    printf("\n[1] %.1f [2] %.1f", div1, div2);
}