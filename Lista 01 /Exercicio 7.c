#include <stdio.h>
#include <stdlib.h>

int main()
{  double raio , area , PI;

   printf("Digite o raio:");
   scanf("%lf", &raio);

   area = PI * pow(raio,2);

   printf("O resultado do raio e %.2lf\n" , raio, area);

   return 0;
}
