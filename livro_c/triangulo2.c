/*
Escreva um programa que leia as medidas dos lados de um triângulo e escreva se
ele é Equilátero, Isósceles ou Escaleno. Sendo que:
• Triângulo Equilátero: possui os 3 lados iguais.
• Triângulo Isóscele: possui 2 lados iguais.
• Triângulo Escaleno: possui 3 lados diferentes.
*/

#include <stdio.h>

int main () {
  int lado1 = 0;
  int lado2 = 0;
  int lado3 = 0;
  
  printf("Quanto mede o primeiro lado do triângulo?: ");
  int deu_certo = scanf("%i", &lado1);

  printf("Quanto mede o segundo lado do triângulo?: ");
  deu_certo = scanf("%i", &lado2);

  printf("Quanto mede o terceiro lado do triângulo?: ");
  deu_certo = scanf("%i", &lado3);

  if (lado1 == lado2 && lado2 == lado3)
    printf("É um triângulo equilátero\n");
  if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    printf("É um triângulo isósceles\n");
  if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
    printf("É um triângulo escaleno\n");
    
  return 0;
}