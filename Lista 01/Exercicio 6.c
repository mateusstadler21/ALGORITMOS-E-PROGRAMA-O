#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 , num2 , num3;
    float resultado;

    printf("Digite a primeira nota:");
    scanf("%d" , &num1);

    printf("Digite a segunda nota:");
    scanf("%d" , &num2);

    printf("Digite a terceira nota:");
    scanf("%d" , &num3);

    resultado = (num1 + num2 + num3) / 3 ;

    printf("A media final e: %f\n" , resultado);

    return 0;

}

