#include <stdio.h>

int *criarVetor(int tamanho){
    int *Vetor = malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        Vetor[i] = 2 * 1 + 3;
    }

    return Vetor;
}

int main()
{
    int tamanho;
    printf("Digite um valor: ");
    scanf("%d",&tamanho);

    int *meuVetor = criarVetor(tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d",meuVetor[i]);
    }
    free(meuVetor);
    

    return 0;
}
