/*
6. Faça um programa em C que liste todos os múltiplos de n, enter 1 e 100.
*/
#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um numero inteiro > 0 e < 101: ");
  int deu_certo = scanf("%i" , &numero);
  int numero_valido = numero > 0 && numero < 101;

  if (deu_certo && numero_valido) {
  printf("Os multiplos de %i entre 1 e 100 sao:\n", numero);
    for (int i = 1; i <= 100; i++) {
      if(i % numero == 0) {
      printf(" %i\n", i);
      }
    }
    printf("\n");
  } else {
    printf("Numero invalido, tente novamente!\n");
  }
  return 0;
}