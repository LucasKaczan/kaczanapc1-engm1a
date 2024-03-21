/*
Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/

#include <stdio.h>

int main() {
  int tempo = 0;
  int segundos = 0;
  int minutos = 0;
  int horas = 0;
  int resto = 0;

  printf("Entre com os segundos: ");
  scanf("%i", &tempo);

  horas = tempo / 3600;
  resto = tempo % 3600;
  minutos = resto / 60;
  segundos = resto % 60;

  printf("%i segundos corresponde a %i horas, %i minutos e %i segundos\n", tempo, horas, minutos, segundos);
  return 0;
}