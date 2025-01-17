#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char telefone[15];
    char email[50];
} Contato;

int main() {
    Contato c;

    printf("Cadastro de Contato\n");
    printf("Nome: ");
    scanf("%49s", c.nome);
    printf("Telefone: ");
    scanf("%14s", c.telefone);
    printf("Email: ");
    scanf("%49s", c.email);

    printf("\nInformações do Contato:\n");
    printf("Nome: %s\n", c.nome);
    printf("Telefone: %s\n", c.telefone);
    printf("Email: %s\n", c.email);

    return 0;
}
