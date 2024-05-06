#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 , num2 , area;

printf("Digite o valor da base:");
scanf("%d" , &num1);

printf("Digite o valor da area:");
scanf("%d" , &num2);

area = num1 * num2 ;

printf ("A area do retangulo e : %d\n" , area);

return 0;
}
