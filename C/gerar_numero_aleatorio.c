#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    // Seg recebendo tempo
    int seg = time(0);
    srand(seg);

    // n recebe número aleatório
    int n = rand() % 100;
    printf("\n%d", n);
}