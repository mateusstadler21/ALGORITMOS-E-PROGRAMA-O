
#include "reserva.h"
#include <stdio.h>

void inicializarQuartos(Quarto quartos[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        quartos[i].numero = i + 1;
        quartos[i].reservado = 0; // Todos começam como disponíveis
    }
}

void listarQuartos(Quarto quartos[], int quantidade) {
    printf("Quartos:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Quarto %d - %s\n", quartos[i].numero,
               quartos[i].reservado ? "Reservado" : "Disponível");
    }
}

void reservarQuarto(Quarto quartos[], int quantidade) {
    int numero;
    printf("Digite o número do quarto que deseja reservar: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > quantidade) {
        printf("Número de quarto inválido!\n");
    } else if (quartos[numero - 1].reservado) {
        printf("Quarto já reservado!\n");
    } else {
        quartos[numero - 1].reservado = 1;
        printf("Quarto %d reservado com sucesso!\n", numero);
    }
}
