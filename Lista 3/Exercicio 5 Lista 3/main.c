#include <stdio.h>

int contarCaracteres(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf(" %[^\n]", str);
    printf("Número de caracteres: %d\n", contarCaracteres(str));
    return 0;
}
