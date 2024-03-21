/*
2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/
#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;
  int quociente = 0;
  int resto = 0;
  
  printf("Entre com o valor de a: ");
  int deu_certo = scanf("%i", &a);
  printf("Entre com o valor de b: ");
  deu_certo = scanf("%i", &b);
  
  quociente = a / b;
  resto = a % b;
  printf("O quociente é %i e o resto é %i\n", quociente, resto);
  
  return 0;
}