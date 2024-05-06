#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso , altura;
    float resultado;
     printf("Digite seu peso:");
     scanf ("%d", &peso );

     printf ("Digite sua altura:");
     scanf("%d" , &altura);

     resultado = peso/(altura * altura);

     printf("O seu IMC e: %f\n" , resultado);

     return 0;

}
