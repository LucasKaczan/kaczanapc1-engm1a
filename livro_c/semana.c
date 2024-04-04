/*
Faça um programa que lê um número inteiro de 1 a 7 e imprime o dia da semana
correspondente (1=Domingo, 2=segunda...), se o número estiver fora deste intervalo 
o programa deve imprimir uma mensagem de erro.
*/

#include <stdio.h>

int main() {
  int dia = 0;
  printf("Entre com o dia da semana: ");
  int deu_certo = scanf("%i", &dia);
  switch(dia) {
    case 1:
      printf("Domingo!\n");
      break;
    case 2:
      printf("Segunda!\n");
      break;
    case 3:
      printf("Terça!\n");
      break;
    case 4:
      printf("Quarta!\n");
      break;
    case 5:
      printf("Quinta!\n");
      break;
    case 6:
      printf("Sexta!\n");
      break;
    case 7:
      printf("Sábado!\n");
      break;
    default:
      printf("Engraçadinho...\n");
  }
    
  return 0;
}