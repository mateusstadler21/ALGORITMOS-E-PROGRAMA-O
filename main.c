#include <stdio.h>
#include <stdlib.h>


int main()
{
    //aqui fala sobre o que e o codigo ou seja comentarios
    int numero;
    float numeroReal;
    char caractere;
    double numeroPreciso;

    //o igual é quando a variavel recebe o valor,
    //const float PI = 3.14; //variavel constante,outra maneira de incluir uma biblioteca o #define
    printf("\nNumero inteiro: %i" , numero);
    scanf("%i",  &numero);
    scanf("%f",  &numeroReal);
    setbuf(stdin, NULL); //limpar buffer
    scanf("%c",  &caractere);
    scanf("%lf", &numeroPreciso);

    printf("\nNumero inteiro: %i" , numero);
    printf("\nnumero real: %f" , numero);
    printf("\ncaractere: %c" , caractere);
    printf("\nnumero preciso: %lf" , numeroPreciso);

    numero = 10;
    numeroPreciso = 10.5;
    caractere = 'B';
    numeroReal = 5.11;

    printf("\nNumero inteiro: %i" , numero);
    printf("\nnumero real: %f" , numero);
    printf("\ncaractere: %c" , caractere);
    printf("\nnumero preciso: %lf" , numeroPreciso);

}
