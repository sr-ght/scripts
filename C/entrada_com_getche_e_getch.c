#include <stdio.h>
#include "conio.h"

void main(){
    
    char ch;
    printf("Pressione qualquer tecla: ");
    //getch recebe caracter sem imprimir
    ch = getch();
    printf("\nVoce pressionou a tecla %c\n", ch);
    printf("getche = ");
    //getche recebe caracter imprimindo
    getche();
}