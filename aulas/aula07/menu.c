#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;
  while (opcao != 4) {
    int deu_certo = system("clear");
    printf("MEU JOGO!\n");
    printf("1 - Iniciar\n");
    printf("2 - Ranking\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção => ");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n'); // limpar buffer do teclado
    if (!deu_certo) {
      opcao = 0;
    }
    
    switch(opcao) {
      case 1: { 
        char nome[31];
        deu_certo = system("clear");
        printf("Escolha o nome do seu personagem: ");
        deu_certo = scanf("%[^\n]s", nome);
        while (getchar() != '\n'); // limpar buffer do teclado
        printf("Ola %s!\n", nome);
        printf("Pressione ENTER p/ iniciar...");
        getchar();
        break;
      }
      case 2: {
        deu_certo = system("clear");
        printf("Ranking - Top 5\n");
        printf("1o lugar: Edmar - 1000 pontos\n");
        printf("2o lugar: Edenilson - 900 pontos\n");
        printf("3o lugar: Edmarcos - 700 pontos\n");
        printf("4o lugar: Edmundo - 500 pontos\n");
        printf("5o lugar: Edvaldo - 200 pontos\n");
        printf("Pressione ENTER p/ voltar...");
        getchar();
        break;
      }
      case 3: 
        break;
      case 4: 
        printf("Ate a proxima!\n");
        break;
      default:
        printf("Opcao invalida! Pressione ENTER p/ prosseguir.\n");
      getchar();
    }
  }
  return 0;
}
