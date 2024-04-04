#include <stdio.h>

int main() {
  int numero1;
  int numero2;

  printf("Entre com o primeiro número: ");
  int deu_certo = scanf("%i" , &numero1);

  printf("Entre com o segundo número: ");
  deu_certo = scanf("%i" , &numero2);

  int sao_iguais = numero1 == numero2;
  if (sao_iguais)
  printf("Os números são iguais! %i = %i\n" , numero1, numero2);
  
  int sao_diferentes = numero1 != numero2;
  if (sao_diferentes)
  printf("Os números são diferentes! %i != %i\n" , numero1, numero2);
  
  int eh_maior = numero1 > numero2;
  if (eh_maior)
  printf("O Primeiro número é maior! %i > %i\n" , numero1, numero2);
    
  
  int eh_menor = numero1 < numero2;
  if (eh_menor)
    printf("Os primerio número é menor! %i < %i\n" , numero1, numero2);
  
  return 0;
}