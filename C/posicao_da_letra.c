#include <stdio.h>
#include <string.h>

void main(){

    char str[8];
    int count = 0;

    str[0] = 'b';
    str[1] = 'e';
    str[2] = 't';
    str[3] = 'h';
    str[4] = 'a';
    str[5] = 'n';
    str[6] = 'i';
    str[7] = 'a';
    str[8] = '\0';

    do {
        char letra;

        printf("Digite uma letra: ");
        scanf("%c", &letra);
        
        for(int i = 0; i < strlen(str); i++){
            if(str[i] == letra) printf("A posicao da letra [%c] eh: %d\n", letra, i);
        }

        count++;

    }while(count < 9);
}