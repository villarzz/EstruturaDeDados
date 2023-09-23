#include "ponto.h"
#include <math.h>

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
