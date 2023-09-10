#include <stdio.h>

int main()
{
    //int mstriz[linhas][colunas]
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int Soma = 0;

    // Acessando ultimo elemento
    printf("Elemento da linha 2 coluna 3: %d/n", matriz[1][2]);

    // Somando todos os elementos
    for (int i = 0; i < 2; i++)//Controla numero de linhas
    {
        for (int j = 0; j < 3; j++)//Controla numero de colunas
        {
            Soma = Soma + matriz[i][j];
        }
    }

    printf("A soma dos elementos é: %d/n", Soma);

    return 0;
}