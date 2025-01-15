#include <stdio.h>

// Função recursiva para calcular Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int numero;

    printf("Digite o valor de n para calcular o Fibonacci: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, insira um número não negativo.\n");
    } else {
        printf("Fibonacci(%d) = %d\n", numero, fibonacci(numero));
    }

    return 0;
}
