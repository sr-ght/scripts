#include <stdio.h>
#include <stdlib.h>

void main(){

    int op;

    printf("- MENU -\n[1] Frango\n[2] Carne\n[3] Peixe\n[0] Sair\n\n[?] Opcao: ");
    scanf("%d", &op);

    //tomada de decisão com escolha
    switch(op){
        case 0:
            printf("Voce escolheu Sair.");
            exit(0);
        case 1:
            printf("Voce escolheu Frago.");
            break;
        case 2:
            printf("Voce escolheu Carne.");
            break;
        case 3:
            printf("Voce escolheu Peixe.");
            break;
        default:
            system("cls");
            printf("[!] Opicao invalida.\n\n");
            main();
    }   

}