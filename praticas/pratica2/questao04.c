/*
4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
*/

#include <stdio.h>

int main() {
  float largura, comprimento, area;
  printf("Digite a largura do terreno: ");
  scanf("%f", &largura);
  printf("Digite o comprimento do terreno: ");
  scanf("%f", &comprimento);
  area = (largura * comprimento) / 10000;
  printf("A área do terreno é: %.2f hectares", area);
  
return 0;
}