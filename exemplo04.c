#include <stdio.h>

void exibeArray(int array[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\t",array[i]);
    }
}

void modificaArray(int *array, int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        array[i] = array[i] * 2; 
    }
}

int main()
{
    int meuArray[5] = [1,2,3,4,5];
    int tamanho = sizeOf(meuArray) / sizeof(meuArray[0]);

    exibeArray(meuArray,tamanho);
    modificaArray(meuArray, tamanho);
    exibeArray(meuArray,tamanho);

    return 0;
}
