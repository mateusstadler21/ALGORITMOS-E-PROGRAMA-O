
#include "login.h"
#include <stdio.h>
#include <string.h>

typedef struct {
    char usuario[50];
    char senha[50];
} Usuario;

Usuario usuarios[100];
int totalUsuarios = 0;

void cadastrarUsuario() {
    printf("Nome de usuário: ");
    scanf(" %[^\n]", usuarios[totalUsuarios].usuario);
    printf("Senha: ");
    scanf(" %[^\n]", usuarios[totalUsuarios].senha);
    totalUsuarios++;
}

int autenticarUsuario() {
    char usuario[50], senha[50];
    printf("Nome de usuário: ");
    scanf(" %[^\n]", usuario);
    printf("Senha: ");
    scanf(" %[^\n]", senha);

    for (int i = 0; i < totalUsuarios; i++) {
        if (strcmp(usuarios[i].usuario, usuario) == 0 &&
            strcmp(usuarios[i].senha, senha) == 0) {
            return 1;
        }
    }
    return 0;
}
