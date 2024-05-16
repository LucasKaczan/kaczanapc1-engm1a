/*
4. Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial.
*/
#include <stdio.h>

int main() {
  char tecla;
  printf("Entre com uma tecla: ");
  int deu_certo = scanf("%c", &tecla);

  if (tecla >= 'a' && tecla <= 'z') {
    printf("A tecla pressionada é uma letra minúscula\n");
  }
  if (tecla >= 'A' && tecla <= 'Z') {
    printf("A tecla pressionada é uma letra maiuscula\n");
  }
  if (tecla >= '0' && tecla <= '9') {
    printf("A tecla pressionada é um número\n");

  } else {
    printf("A tecla pressionada é um caractere especial\n");
  }
  return 0;
}