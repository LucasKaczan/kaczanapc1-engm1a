/*
Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/
#include <stdio.h>

int main() {
  int anos = 0;
  int meses = 0;
  int dias = 0;
  int total = 0;
  int segundos_totais = 0;
  
  printf("Quantos anos?: ");
  int deu_certo = scanf("%i", &anos);
  printf("Quantos meses?: ");
  deu_certo = scanf("%i", &meses);
  printf("Quantos dias?: ");
  deu_certo = scanf("%i", &dias);
  
  total = anos * 365 + meses * 30 + dias;
  
  printf("Você viveu um total de %i dias\n", total);
  return 0;
}