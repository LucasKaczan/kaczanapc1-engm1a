#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 100
#define NAME_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    int age;
    float salary;
} Record;

int main() {
    Record records[MAX_RECORDS];
    int record_count = 0;
    int choice;
    int i;

    while (1) {
        printf("Sistema de Cadastro\n");
        printf("1. Adicionar registro\n");
        printf("2. Listar registros\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        if (scanf("%d", &choice) != 1) {
            printf("Entrada inválida! Por favor, insira um número.\n");
            while(getchar() != '\n'); // Limpa o buffer
            continue;
        }

        switch (choice) {
            case 1:
                if (system("clear") != 0) {
                    printf("Error clearing the screen!\n");
                }
                if (record_count >= MAX_RECORDS) {
                    printf("Limite de registros atingido!\n");
                    break;
                }
                printf("Inserir nome: ");
                while (getchar() != '\n'); // Limpa o buffer
                char *deu_certo = fgets(records[record_count].name, NAME_LENGTH, stdin);
                if (deu_certo == NULL) {
                    printf("Erro ao ler o nome!\n");
                    break;
                }
                records[record_count].name[strcspn(records[record_count].name, "\n")] = 0;

                printf("Inserir idade: ");
                if (scanf("%d", &records[record_count].age) != 1) {
                    printf("Entrada inválida! Por favor, insira um número.\n");
                    while(getchar() != '\n'); // Limpa o buffer
                    continue;
                }

                printf("Inserir salário: ");
                if (scanf("%f", &records[record_count].salary) != 1) {
                    printf("Entrada inválida! Por favor, insira um número.\n");
                    while(getchar() != '\n'); // Limpa o buffer
                    continue;
                }

                record_count++;
                if (system("clear") != 0) {
                    printf("Error clearing the screen!\n");
                }
                printf("Registro adicionado com sucesso!\n");
                break;

            case 2:
                if (system("clear") != 0) {
                    printf("Error clearing the screen!\n");
                }
                if (record_count == 0) {
                    printf("Nenhum registro encontrado.\n");
                } else {
                    for (i = 0; i < record_count; i++) {
                        printf("Registro %d\n", i + 1);
                        printf("Nome: %s\n", records[i].name);
                        printf("Idade: %d\n", records[i].age);
                        printf("Salário: %.2f\n", records[i].salary);
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