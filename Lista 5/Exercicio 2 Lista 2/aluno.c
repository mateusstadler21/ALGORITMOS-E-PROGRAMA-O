#include "aluno.h"
#include <stdio.h>

void adicionarAluno(Aluno alunos[], int *quantidade) {
    printf("Nome do aluno: ");
    scanf(" %[^\n]", alunos[*quantidade].nome);
    printf("Digite 3 notas: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &alunos[*quantidade].notas[i]);
    }
    (*quantidade)++;
}

void listarAlunos(Aluno alunos[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d: %s\n", i + 1, alunos[i].nome);
    }
}

void calcularMedia(Aluno alunos[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        float media = 0;
        for (int j = 0; j < 3; j++) {
            media += alunos[i].notas[j];
        }
        media /= 3;
        printf("Média de %s: %.2f\n", alunos[i].nome, media);
    }
}

