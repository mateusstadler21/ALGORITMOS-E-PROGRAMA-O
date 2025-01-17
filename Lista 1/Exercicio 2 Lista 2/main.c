#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota1, nota2;
} Aluno;

int main() {
    Aluno a;

    printf("Cadastro de Aluno\n");
    printf("Nome: ");
    scanf("%49s", a.nome);
    printf("Matricula: ");
    scanf("%d", &a.matricula);
    printf("Nota 1: ");
    scanf("%f", &a.nota1);
    printf("Nota 2: ");
    scanf("%f", &a.nota2);

    float media = (a.nota1 + a.nota2) / 2;
    printf("\nInformaçoes do Aluno:\n");
    printf("Nome: %s\n", a.nome);
    printf("Matricula: %d\n", a.matricula);
    printf("Média: %.2f\n", media);

    return 0;
}
