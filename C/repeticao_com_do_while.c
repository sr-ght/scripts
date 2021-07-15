#include <stdio.h>
#include <conio.h>

void main(){

    int count = 0;
    char num, n[10];

    // Laço de repetição do while
    do{

        printf("Informe um numero: ");
        num = getche();
        printf("\n");

        n[count] = num;
        count++;

    }while (count < 10);

    count = 0;
    printf("\n");

    do{

        //imprime número digitados
        printf("%c ", n[count]);
        count++;
    }while (count < 10);    
    
}