#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titulo[100];
    char autor[50];
    int ano_publicacao;
} Livro;

int main() {
    Livro l;

    printf("Cadastro de Livro\n");
    printf("T�tulo: ");
    scanf("%99s", l.titulo);
    printf("Autor: ");
    scanf("%49s", l.autor);
    printf("Ano de Publica��o: ");
    scanf("%d", &l.ano_publicacao);

    printf("\nInforma��es do Livro:\n");
    printf("T�tulo: %s\n", l.titulo);
    printf("Autor: %s\n", l.autor);
    printf("Ano de Publica��o: %d\n", l.ano_publicacao);

    return 0;
}
