#ifndef PONTO_H
#define PONTO_H

typedef struct {
    float X;
    float Y;
} Ponto;

float calcularArea(Ponto* vertices, int numVertices);

#endif
