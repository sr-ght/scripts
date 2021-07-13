#include <stdio.h>

void main(){

    float media;

    printf("Digite a media: ");
    scanf("%f", &media);

    //se media for maior que 6
    if(media > 6) printf("Aprovado!");
    //senao se media for menor que 5
    else if (media < 5) printf("Reprovado!");
    //senao
    else printf("Recuperação!");
    
}