#include <stdio.h>
#include <stdlib.h>

int main()
{  float Celsius , Fahrenheit;

   printf("Digite a temperatura em Celsus:");
   scanf("%f" , &Celsius);

   Fahrenheit = (Celsius * 9/5) + 32;

   printf("O resulta da conversao e: %f\n" , Fahrenheit );

   return 0;

}
