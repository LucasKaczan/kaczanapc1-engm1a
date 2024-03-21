/*
Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.
*/
#include <stdio.h>
#include <math.h>

int main() {
  int numero = 0;
  int multiplicador = 0;
  int resultado = 0;
  printf("Entre com o número: ");
  int deu_certo = scanf("%i", &numero);
  for(multiplicador = 1; multiplicador <= 10; multiplicador++)
  
  printf("A tabuada de %i é %i\n", numero, resultado);
  //TERMINO ESSE CODIGO AMANHÃ
  
  return 0;
}