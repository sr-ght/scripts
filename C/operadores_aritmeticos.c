#include <stdio.h>

void main(){

    int num = 4;
    
    //soma
    int soma = num+num;
    //multiplicação
    int mult = num*num;
    //subtração
    int subt = num-num;
    //divisão
    int divi = num/num;
    //resto
    int rest = num%num;

    printf("Soma: %i\n", soma);
    printf("Multiplicacao: %i\n", mult);
    printf("Subtracao: %i\n", subt);
    printf("Divisao: %i\n", divi);
    printf("Resto: %i\n", rest);

}