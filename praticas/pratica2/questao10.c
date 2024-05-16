/*
Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.
*/
#include <stdio.h>
#include <math.h>

int main() {
  int numero = 0;
  int resultado = 0;
  printf("Entre com um número de 0 a 10: ");
  int deu_certo = scanf("%i", &numero);
  for (int i = 1; i <= 10; i++)
    printf(" %i x %i = %i\n", numero, i, numero * i);
  return 0;
}