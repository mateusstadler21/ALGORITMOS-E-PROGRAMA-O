#include <stdio.h>
#include "aluno.h"

int main() {
    Aluno alunos[100];
    int quantidade = 0, opcao;

    do {
        printf("\n1. Adicionar Aluno\n2. Listar Alunos\n3. Calcular Médias\n0. Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarAluno(alunos, &quantidade);
                break;
            case 2:
                listarAlunos(alunos, quantidade);
                break;
            case 3:
                calcularMedia(alunos, quantidade);
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
