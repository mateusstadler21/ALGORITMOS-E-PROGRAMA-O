#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero inteiro:");
    scanf("%d" , &num);

    if (num >=0)
    {
        printf("O numero %d e positivo " , num);
    }
    else {
        printf("");
    }
    if (num <=0)
    {
        printf("O numero %d e negativo " , num);
    }
    else if (num ==0)
    {
        printf("O numero %d e zero " , num);
    }
    else{

    }
    return 0;
}
