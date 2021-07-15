#include <stdio.h>

void main(){

    float media;

    printf("Digite a media: ");
    scanf("%f", &media);

    // Se media for maior que 6
    if(media > 6) printf("Aprovado!");
    // Senao se media for menor que 5
    else if (media < 5) printf("Reprovado!");
    // Senao
    else printf("Recuperação!");
    
}