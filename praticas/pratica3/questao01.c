/*
1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/
#include <stdio.h>

int main() {
  int numero;
  printf("Digite um número inteiro: \n");
  int deu_certo = scanf("%i", &numero);
  if (numero % 2 == 0)
    printf("O número é par!\n");
  else
    printf("O número é ímpar!\n");
  return 0;
}