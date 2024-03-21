/*
1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.
*/
#include <stdio.h>

int main() {
  float a = 0.0;
  float b = 0.0;
  float c = 0.0;
  float media = 0.0;

  printf("Entre com o valor de a: ");
  int deu_certo = scanf("%f", &a);
  printf("Entre com o valor de b: ");
  deu_certo = scanf("%f", &b);
  printf("Entre com o valor de c: ");
  deu_certo = scanf("%f", &c);

  media = (a + b + c) / 3;

  printf("A media entre esses números é %.1f\n", media);

  return 0;
}