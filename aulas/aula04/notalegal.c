#include <stdio.h>

int main() {
  char nome[31];
  int quantidade;
  float valor;

  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Entre com a quantidade do produto: ");
  deu_certo = scanf("%i", &quantidade);

  printf("Entre com o valor do produto: ");
  deu_certo = scanf("%f", &valor);

  printf("\x1b[32m----------------------------\n");
  printf("     N O T A   L E G A L    \n");
  printf("----------------------------\x1b[0m\n");
  printf("ITEM              QTD VALOR \n");
  printf("%-17s %3i %5.2f\n", nome, quantidade, valor);
  
  return 0;
}