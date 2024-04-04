/*
5.12) Escreva um programa que leia o valor de 3 ângulos de um triângulo e escreva se o
triângulo é Acutângulo, Retângulo ou Obtusângulo. Sendo que:
• Triângulo Retângulo: possui um ângulo reto. (igual a 90o)
• Triângulo Obtusângulo: possui um ângulo obtuso. (maior que 90o)
• Triângulo Acutângulo: possui três ângulos agudos. (menor que 90o)
*/

#include <stdio.h>

int main() {
  int angulo1 = 0;
  int angulo2 = 0;
  int angulo3 = 0;
  
  printf("Entre com o primeiro ângulo: ");
  int deu_certo = scanf("%i", &angulo1);

  printf("Entre com o segundo ângulo: ");
  deu_certo = scanf("%i", &angulo2);

  printf("Entre com o terceiro ângulo: ");
  deu_certo = scanf("%i", &angulo3);

if (angulo1 == 90|| angulo2 == 90|| angulo3 == 90)
  printf("É um triângulo retângulo\n");

if (angulo1 > 90|| angulo2 > 90|| angulo3 > 90)
  printf("É um triângulo obtusângulo\n");

if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90)
  printf("É um triângulo acutângulo\n");

  return 0;
}