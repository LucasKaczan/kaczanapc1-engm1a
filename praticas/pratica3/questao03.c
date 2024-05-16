/*
3. Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.
*/
#include <stdio.h>

int main() {
  int nota;
  printf("Entre com a nota: ");
  int deu_certo = scanf("%i" , &nota);

  if (nota == 1)
    printf("Ruim\n");
  if (nota == 2)
    printf("Insuficiente\n");
  if (nota == 3)
    printf("Suficiente\n");
  if (nota == 4)
    printf("Bom\n");
  if (nota == 5)
    printf("Ótimo\n");
  if (nota < 1 || nota > 5)
    printf("Nota inválida\n");
  return 0;
}