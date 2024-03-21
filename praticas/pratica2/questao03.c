/*
Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
*/
#include <stdio.h>

int main() {
  float celsius = 0.0;
  float fahrenheit = 0.0;
  
  printf("Entre com a temperatura em graus Celsius: ");
  int deu_certo = scanf("%f", &celsius);
  fahrenheit = (9.0/5.0)*celsius + 32;

  printf("A temperatura em graus Fahrenheit é %.1f\n", fahrenheit);
  
  return 0;
}