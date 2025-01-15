#include <stdio.h>
#include "reserva.h"

#define TOTAL_QUARTOS 5

int main() {
    Quarto quartos[TOTAL_QUARTOS];
    int opcao;

    inicializarQuartos(quartos, TOTAL_QUARTOS);

    do {
        printf("\n1. Listar Quartos\n2. Reservar Quarto\n0. Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                listarQuartos(quartos, TOTAL_QUARTOS);
                break;
            case 2:
                reservarQuarto(quartos, TOTAL_QUARTOS);
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
