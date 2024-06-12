#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define limite_registros 100
#define tamanho_nome 50

typedef struct {
    char nome[tamanho_nome];
    int idade;
    float salario;
} Record;

int main() {
    Record registro[limite_registros];
    int numero_registros = 0;
    int escolha;
    int i;

    while (1) {
        printf("Sistema de Cadastro\n");
        printf("1. Adicionar registro\n");
        printf("2. Listar registros\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        if (scanf("%d", &escolha) != 1) {
            printf("Entrada inválida! Por favor, insira um número.\n");
            while(getchar() != '\n'); // Limpa o buffer
            continue;
        }

        switch (escolha) {
            case 1:
                if (system("clear") != 0) {
                    printf("Error clearing the screen!\n");
                }
                if (numero_registros >= limite_registros) {
                    printf("Limite de registros atingido!\n");
                    break;
                }
                printf("Inserir nome: ");
                while (getchar() != '\n'); // Limpa o buffer
                char *deu_certo = fgets(registro[numero_registros].nome, tamanho_nome, stdin);
                if (deu_certo == NULL) {
                    printf("Erro ao ler o nome!\n");
                    break;
                }
                registro[numero_registros].nome[strcspn(registro[numero_registros].nome, "\n")] = 0;

                printf("Inserir idade: ");
                if (scanf("%d", &registro[numero_registros].idade) != 1) {
                    printf("Entrada inválida! Por favor, insira um número.\n");
                    while(getchar() != '\n'); // Limpa o buffer
                    continue;
                }

                printf("Inserir salário: ");
                if (scanf("%f", &registro[numero_registros].salario) != 1) {
                    printf("Entrada inválida! Por favor, insira um número.\n");
                    while(getchar() != '\n'); // Limpa o buffer
                    continue;
                }

                numero_registros++;
                if (system("clear") != 0) {
                    printf("Error clearing the screen!\n");
                }
                printf("Registro adicionado com sucesso!\n");
                break;

            case 2:
                if (system("clear") != 0) {
                    printf("Error clearing the screen!\n");
                }
                if (numero_registros == 0) {
                    printf("Nenhum registro encontrado.\n");
                } else {
                    for (i = 0; i < numero_registros; i++) {
                        printf("Registro %d\n", i + 1);
                        printf("Nome: %s\n", registro[i].nome);
                        printf("Idade: %d\n", registro[i].idade);
                        printf("Salário: %.2f\n", registro[i].salario);
                        printf("--------------------\n");
                    }
                }
                break;

            case 3:
                printf("Saindo...\n");
                exit(0);
                break;

            default:
                printf("Opção inválida! Por favor, escolha uma opção entre 1 e 3.\n");
                break;
        }
    }

    return 0;
}