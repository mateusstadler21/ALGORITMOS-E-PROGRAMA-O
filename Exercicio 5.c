#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variaveis
    int num1 , num2 , op;


    printf("Digite o primeiro numero inteiro:");
    scanf ("%d", &num1);

    printf("Digite o segundo numero inteiro:");
    scanf ("%d" , &num2);

    //soma
    op = num1 + num2;
    printf("O resultado da soma e: %d\n" , op);

    //subtração
    op = num1 - num2;
    printf("O resultado da subtracao e : %d\n" , op);

    //multiplicação
    op = num1 * num2;
    printf("O resultado da multiplicacao e : %d\n" , op);

    //divisão
    op = num1/num2;
    printf("O resultado da divisao e: %d\n" , op);

    return 0;

}
