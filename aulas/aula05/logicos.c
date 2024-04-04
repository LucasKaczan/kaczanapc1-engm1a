#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um número: ");
  int deu_certo = scanf("%i" , &numero);
  
  // 0 < x < 10 = 0 < x E x < 10
  int maior_que_zero_e_menor_que_dez = numero > 0 && numero < 10;
  if (maior_que_zero_e_menor_que_dez == 1)
  printf("0 < %i < 10\n" , numero);
  else printf("Esse número \x1b[31mnão está\x1b[0m entre 0 e 10!\n");
  return 0;
}