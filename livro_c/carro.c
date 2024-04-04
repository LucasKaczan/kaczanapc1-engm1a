/*
5.9) Escreva abaixo o código de um programa que calcule a média de quilômetros feitos com cada litro de combustível. Solicite a entrada de dados com quilômetros e litros e depois exiba o cálculo da média e caso seja menor que 8 km/l informe que é preciso trocar o carro por um mais econômico.
*/

#include <stdio.h>

int main() {
  int km = 0;
  int litros = 0;

  printf("Quantos km foram percorridos? ");
  int deu_certo = scanf("%i", &km);

  printf("Quantos litros de gasolina foram consumidos?");
  deu_certo = scanf("%i", &litros);
  
  int media = km / litros;

  if (media < 8)
    printf("É recomendado a troca por um carro mais econômico\n");
  else printf("O seu carro possui uma boa média de %i km/l\n", media);
  
  return 0;
}