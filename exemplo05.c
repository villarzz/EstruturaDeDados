#include <stdio.h>

struct pessoa
{
    char nome[20];
    int idade;
};

void modificarPessoa(struct Pessoa *p){
    p->idade += 1;
}

void testarPessoa(struct Pessoa X){
    x.idade = x.idade * 2;
}

int main()
{
    struct Pessoa pessoa1 = {"João", 25};
    modificarPessoa(&pessoa1);

    printf("Nome: %s", pessoa1.nome);
    printf("Idade: %d", pessoa1.idade);

    testarPessoa(pessoa1);

    return 0;
}
