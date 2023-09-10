#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[20];
    int idade;
    float altura;
};

int main(){
    struct Pessoa X;
    strcpy(X.nome, "Hugo");
    X.idade = 19;
    X.altura = 1.71;

    printf("%s tem %d e %f de altura", X.nome, X.idade, X.altura);

    return 0;
}