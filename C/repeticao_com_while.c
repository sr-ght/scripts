#include <stdio.h>

void main(){

    int num = 0, count = 0;
    char n[10];

    // Laço de repeticação while
    while (count < 10)
    {
        printf("Digite um numero [%d]: ", count);
        scanf("%d", &num);

        n[count] = num;
        count++;
    }

    count = 0;
    printf("\n");
    
    while (count < 10)
    {
        // Imprime caracteres
        printf("%c ", n[count]);
        count++;
    }
    
}