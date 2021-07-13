#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    //seg recebendo tempo
    int seg = time(0);
    srand(seg);

    //n recebe número aleatório
    int n = rand() % 100;
    printf("\n%d", n);
}