#include <stdio.h>
#include "calculador.h"

int main() {
    float num1, num2;
    char operacao;

    printf("Digite a opera��o (+, -, *, /): ");
    scanf(" %c", &operacao);
    printf("Digite os dois n�meros: ");
    scanf("%f %f", &num1, &num2);

    switch (operacao) {
        case '+':
            printf("Resultado: %.2f\n", adicionar(num1, num2));
            break;
        case '-':
            printf("Resultado: %.2f\n", subtrair(num1, num2));
            break;
        case '*' :
            printf("Resultado: %.2f\n", multiplicar(num1, num2));
            break;
        case '/' :
            if (num2 != 0)
                printf("Resultado: %.2f\n", dividir(num1, num2));
            else
                printf("Erro: Divis�o por zero!\n");
            break;
        default:
            printf("Opera��o inv�lida!\n");
    }

    return 0;
}
