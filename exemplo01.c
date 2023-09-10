#include <stdio.h>

int main(){
    int numeros[5] = {1,2,3,4,5};

    char nome[10] = "Hoje e segunda feira";

    printf("Terceiro elemento do vetor : %d\n", numeros[2]);
    
    printf("Primeira letra do nome : %c\n", numeros[0]);
    
    printf("Teste 01 : %d\n", nome[0]);

    printf("Teste 02 : %c\n", nome[0] + 1);

    return 0;
}