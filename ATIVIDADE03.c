#include <stdio.h>
#include "ponto.h"
#include <stdlib.h>

float calcularArea(Ponto* vertices, int numVertices) {
    if (numVertices < 3) {
        return 0.0;
    }

    float area = 0.0;
    int j = numVertices - 1;

    for (int i = 0; i < numVertices; i++) {
        area += (vertices[j].X + vertices[i].X) * (vertices[j].Y - vertices[i].Y);
        j = i;
    }

    return fabs(area) / 2.0;
}


int main() {
    FILE* arquivo;
    int numVertices;

    arquivo = fopen("vertices.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fscanf(arquivo, "%d", &numVertices);

    Ponto* vertices = (Ponto*)malloc(numVertices * sizeof(Ponto));

    if (vertices == NULL) {
        printf("Erro ao alocar memória.\n");
        fclose(arquivo);
        return 1;
    }

    for (int i = 0; i < numVertices; i++) {
        fscanf(arquivo, "%f %f", &vertices[i].X, &vertices[i].Y);
    }

    fclose(arquivo);

    float area = calcularArea(vertices, numVertices);

    printf("A area do poligono e %.2f\n", area);

    free(vertices);

    return 0;
}
