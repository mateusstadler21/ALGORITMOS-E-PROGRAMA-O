#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int codigo;
    float preco;
    int quantidade;
} Produto;

int main() {
    Produto p;

    printf("Cadastro de Produto\n");
    printf("Nome: ");
    scanf("%49s", p.nome);
    printf("Código: ");
    scanf("%d", &p.codigo);
    printf("Preço: ");
    scanf("%f", &p.preco);
    printf("Quantidade em Estoque: ");
    scanf("%d", &p.quantidade);

    float valorTotal = p.preco * p.quantidade;
    printf("\nInformações do Produto:\n");
    printf("Nome: %s\n", p.nome);
    printf("Código: %d\n", p.codigo);
    printf("Preço: R$%.2f\n", p.preco);
    printf("Quantidade: %d\n", p.quantidade);
    printf("Valor Total em Estoque: R$%.2f\n", valorTotal);

    return 0;
}
