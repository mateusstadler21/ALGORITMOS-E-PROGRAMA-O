#include <stdio.h>
#include "login.h"

int main() {
    int opcao;

    do {
        printf("\n1. Cadastrar Usuário\n2. Fazer Login\n0. Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarUsuario();
                break;
            case 2:
                if (autenticarUsuario()) {
                    printf("Login bem-sucedido!\n");
                } else {
                    printf("Falha na autenticação!\n");
                }
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
