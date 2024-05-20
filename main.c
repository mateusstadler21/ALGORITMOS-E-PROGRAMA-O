#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1 , n2 , result;
    char operador;

    printf("Escreva dois numeros a serem calculados:\n");
    scanf("%f %f" , &n1 , &n2);

    //operador
    printf("Escreva o operador:");
    scanf(" %c" , &operador);

    switch(operador)
    {
        case '+':
            result = n1+n2 ;
            printf("%.2f + %.2f = %.2f", n1 , n2 , result);
            break;
        case '-':
            result = n1-n2 ;
            printf("%.2f - %.2f = %.2f", n1 , n2 , result);
            break;
        case '*' :
            result = n1*n2;
            printf("%.2f * %.2f = %.2f", n1 , n2 , result);
            break;
        case '/':
            result = n1/n2 ;
            printf("%.2f /%.2f = %.2f", n1 , n2 , result);
            break;
        default:
            printf("");
    }
    return 0;
}
