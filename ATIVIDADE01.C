#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivoEntrada;
    FILE *arquivoSaida;
    arquivoEntrada = fopen("DadosEntrada.csv", "r");
    
    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada!\n");
        exit(1);
    }

    arquivoSaida = fopen("SituacaoFinal.csv", "w"); // Cria ou sobrescreve o arquivo de saída

    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saída!\n");
        fclose(arquivoEntrada);
        exit(1);
    }

    char linha[256]; // Para armazenar cada linha do arquivo
    fgets(linha, sizeof(linha), arquivoEntrada); // Lê a primeira linha do arquivo (cabeçalho) e descarta

    fprintf(arquivoSaida, "Nome,Nota Média,Situação\n"); // Escreve o cabeçalho no arquivo de saída

    while (fgets(linha, sizeof(linha), arquivoEntrada) != NULL) {
        char nome[50];
        float nota1, nota2;

        // Use sscanf para analisar cada linha e armazenar os valores nas variáveis
        sscanf(linha, "%[^,],%*[^,],%*[^,],%f,%f", nome, &nota1, &nota2);

        // Calcula a média das notas
        float media = (nota1 + nota2) / 2.0;

        // Determina a situação do aluno
        char situacao[20];
        if (media >= 7.0) {
            strcpy(situacao, "APROVADO");
        } else {
            strcpy(situacao, "REPROVADO");
        }

        // Escreve os dados no arquivo de saída
        fprintf(arquivoSaida, "%s,%.2f,%s\n", nome, media, situacao);
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo SituacaoFinal.csv gerado com sucesso!\n");

    return 0;
}
