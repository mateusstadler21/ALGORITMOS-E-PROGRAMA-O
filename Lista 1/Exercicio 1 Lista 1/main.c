
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    Funcionario f;

    printf("Cadastro de Funcion�rio\n");
    printf("Nome: ");
    scanf("%49s", f.nome);
    printf("Idade: ");
    scanf("%d", &f.idade);
    printf("Sal�rio: ");
    scanf("%f", &f.salario);

    printf("\nInforma��es do Funcion�rio:\n");
    printf("Nome: %s\n", f.nome);
    printf("Idade: %d\n", f.idade);
    printf("Sal�rio: R$%.2f\n", f.salario);

    return 0;
}
