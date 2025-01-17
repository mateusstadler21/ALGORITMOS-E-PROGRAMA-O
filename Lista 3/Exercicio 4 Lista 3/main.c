#include <stdio.h>

typedef struct {
    int x, y;
} Ponto;

void atualizarPonto(Ponto *p, int novoX, int novoY) {
    p->x = novoX;
    p->y = novoY;
}

int main() {
    Ponto p = {0, 0};
    printf("Antes: x = %d, y = %d\n", p.x, p.y);
    atualizarPonto(&p, 15, 30);
    printf("Depois: x = %d, y = %d\n", p.x, p.y);
    return 0;
}
