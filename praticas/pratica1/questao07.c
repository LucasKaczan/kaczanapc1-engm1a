/*
7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/
#include <stdio.h>
#include <math.h>

int main() {
  float distancia = 0.0;
  float angulo = 0.0;
  float altura = 0.0;
  const double PI = 3.1416;
  
  printf("Entre com a distancia percorrida: ");
  int deu_certo = scanf("%f", &distancia);
  printf("Entre com o angulo de inclinação: ");
  
  deu_certo = scanf("%f", &angulo);
  altura = sin(angulo * (PI / 180)) * distancia;
  
  printf("A altura alcançada foi %.2f\n", altura);
  return 0;
}