#include <stdio.h>

//variável constante
#define PI 3.1415

void main(){

    float cir;

    printf("Informe a circunferencia: ");
    scanf("%f", &cir);

    float raio = cir/(2*PI);

    printf("O raio e: %.2f", raio);
}