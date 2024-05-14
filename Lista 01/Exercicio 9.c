#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 , centimetros , milimetros;
    printf("Escreva o numero em metros:");
    scanf("%d", &num1 );

    centimetros = num1 * 100;

    printf("Escreva o numero em metros para se converter em:");
    scanf("%d" , &num1);

    milimetros = num1 * 1000;

    printf("o resultado de centimetros e: %d\n e em milimetros e %.d\n" , num1 , centimetros , milimetros);

    return 0;


}
