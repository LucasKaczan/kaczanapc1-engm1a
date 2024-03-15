/*
5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).
*/
#include <stdio.h>

int main() {
  float peso, altura, imc;
  printf("Digite o peso: ");
  scanf("%f", &peso);
  printf("Digite a altura: ");
  scanf("%f", &altura);
  imc = peso / (altura * altura);
  printf("O IMC é: %.2f", imc);

  return 0;
}