#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, *array;
    printf("Tamanho do array: ");
    scanf("%d", &tamanho);

    array = (int *)malloc(tamanho * sizeof(int));
    if (!array) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Digite os valores:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    printf("Valores digitados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}
