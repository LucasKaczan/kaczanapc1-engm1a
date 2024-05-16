/*
8. faça um programa em C que calcule o fatoriak de um numero inteiro.
*/
#include <stdio.h>

int main() {
  int numero;
  int fatorial = 1;
  int i;

  printf("Digite um numero >= 0: \n");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero >= 0) {
    for (i = 1; i <= numero; i++) 
      fatorial = fatorial * i;
    printf("O fatorial de %i é %i\n", numero, fatorial);
    } else {
    printf("Numero invalido, tente novamente.\n");
    }
  return 0;
}