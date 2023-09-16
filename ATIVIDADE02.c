#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função de comparação para o Quicksort
int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char *arr[20] = {
        "maca", "banana", "pera", "uva", "laranja", "abacaxi", "limao", "manga", "abacate", "kiwi",
        "cereja", "morango", "pessego", "goiaba", "melancia", "framboesa", "amora", "caqui", "figo", "papaya"
    };

    int trocas = 0, comparacoes = 0;
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    // Ordenar o vetor usando o Quicksort
    qsort(arr, tamanho, sizeof(char *), compare);

    // Mostrar o vetor ordenado
    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%s\n", arr[i]);
    }

    // Calcular a mediana
    char *mediana;
    if (tamanho % 2 == 0) {
        mediana = arr[tamanho / 2];
    } else {
        mediana = arr[tamanho / 2 + 1];
    }

    printf("\nMediana: %s\n", mediana);

    // Gerar um arquivo de saída
    FILE *arquivo = fopen("saida.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        fprintf(arquivo, "%s\n", arr[i]);
    }

    fclose(arquivo);

    return 0;
}
