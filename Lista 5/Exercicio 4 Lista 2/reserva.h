#ifndef RESERVAS_H
#define RESERVAS_H

typedef struct {
    int numero;
    int reservado; // 1 para reservado, 0 para dispon�vel
} Quarto;

void inicializarQuartos(Quarto quartos[], int quantidade);
void listarQuartos(Quarto quartos[], int quantidade);
void reservarQuarto(Quarto quartos[], int quantidade);

#endif

