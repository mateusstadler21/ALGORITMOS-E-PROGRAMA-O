
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    Funcionario f;

    printf("Cadastro de Funcionário\n");
    printf("Nome: ");
    scanf("%49s", f.nome);
    printf("Idade: ");
    scanf("%d", &f.idade);
    printf("Salário: ");
    scanf("%f", &f.salario);

    printf("\nInformações do Funcionário:\n");
    printf("Nome: %s\n", f.nome);
    printf("Idade: %d\n", f.idade);
    printf("Salário: R$%.2f\n", f.salario);

    return 0;
}
