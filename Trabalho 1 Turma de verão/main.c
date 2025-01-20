#include <stdio.h>
#include <string.h>

// Definir macro para limpar o buffer de entrada
#ifdef _WIN32
#include <conio.h>
#define CLEAR_INPUT_BUFFER() fflush(stdin)
#else
#include <stdio_ext.h>
#define CLEAR_INPUT_BUFFER() __fpurge(stdin)
#endif

typedef struct {
    char titulo[100];
    char autor[100];
} Livro;

typedef struct {
    char nome[100];
} Usuario;

typedef struct {
    Livro livros[100];
    Usuario usuarios[100];
    int totalLivros;
    int totalUsuarios;
} Biblioteca;


void adicionarLivro(Biblioteca *biblio) {
    CLEAR_INPUT_BUFFER();
    printf("\nTitulo do livro: ");
    fgets(biblio->livros[biblio->totalLivros].titulo, sizeof(biblio->livros[biblio->totalLivros].titulo), stdin);
    biblio->livros[biblio->totalLivros].titulo[strcspn(biblio->livros[biblio->totalLivros].titulo, "\n")] = 0;

    printf("Autor do livro: ");
    fgets(biblio->livros[biblio->totalLivros].autor, sizeof(biblio->livros[biblio->totalLivros].autor), stdin);
    biblio->livros[biblio->totalLivros].autor[strcspn(biblio->livros[biblio->totalLivros].autor, "\n")] = 0;

    biblio->totalLivros++;
    printf("Livro adicionado!\n");
}

void adicionarUsuario(Biblioteca *biblio) {
    CLEAR_INPUT_BUFFER();
    printf("\nNome do usuario: ");
    fgets(biblio->usuarios[biblio->totalUsuarios].nome, sizeof(biblio->usuarios[biblio->totalUsuarios].nome), stdin);
    biblio->usuarios[biblio->totalUsuarios].nome[strcspn(biblio->usuarios[biblio->totalUsuarios].nome, "\n")] = 0;

    biblio->totalUsuarios++;
    printf("Usuario adicionado!\n");
}

void listarLivros(Biblioteca *biblio) {
    printf("\nLista de Livros:\n");
    for (int i = 0; i < biblio->totalLivros; i++) {
        printf("%d. %s - %s\n", i + 1, biblio->livros[i].titulo, biblio->livros[i].autor);
    }
    if (biblio->totalLivros == 0) printf("Nenhum livro cadastrado.\n");
}

void listarUsuarios(Biblioteca *biblio) {
    printf("\nLista de Usuarios:\n");
    for (int i = 0; i < biblio->totalUsuarios; i++) {
        printf("%d. %s\n", i + 1, biblio->usuarios[i].nome);
    }
    if (biblio->totalUsuarios == 0) printf("Nenhum usuario cadastrado.\n");
}

void buscarLivro(Biblioteca *biblio) {
    char titulo[100];
    CLEAR_INPUT_BUFFER();
    printf("\nDigite o titulo do livro: ");
    fgets(titulo, sizeof(titulo), stdin);
    titulo[strcspn(titulo, "\n")] = 0;

    for (int i = 0; i < biblio->totalLivros; i++) {
        if (strcmp(biblio->livros[i].titulo, titulo) == 0) {
            printf("Livro encontrado: %s - %s\n", biblio->livros[i].titulo, biblio->livros[i].autor);
            return;
        }
    }
    printf("Livro nao encontrado.\n");
}


int main() {
    Biblioteca biblio = { .totalLivros = 0, .totalUsuarios = 0 };
    int opcao;

    do {
        printf("\n1. Adicionar Livro\n2. Adicionar Usuario\n3. Listar Livros\n4. Listar Usuarios\n5. Buscar Livro\n6. Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: adicionarLivro(&biblio); break;
            case 2: adicionarUsuario(&biblio); break;
            case 3: listarLivros(&biblio); break;
            case 4: listarUsuarios(&biblio); break;
            case 5: buscarLivro(&biblio); break;
            case 6: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 6);

    return 0;
}
