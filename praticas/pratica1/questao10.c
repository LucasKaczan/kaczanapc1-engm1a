/*
10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
  */

#include <stdio.h>

int main() {
  int numero = 0;
  int unidade = 0;
  int dezena = 0;
  int centena = 0;
  int milhar = 0;
  int resto = 0;

  printf("Entre com o numero: ");
  int deu_certo = scanf("%i", &numero);
  unidade = numero % 10;
  resto = numero / 10;
  dezena = resto % 10;
  resto = resto / 10;
  centena = resto % 10;
  resto = resto / 10;
  milhar = resto % 10;
  
  printf("O numero %i tem %i unidades, %i dezenas, %i centenas e %i milhares\n", numero, unidade, dezena, centena, milhar);
  
  return 0;
}