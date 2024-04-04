/*
Escreva um programa que verifique a validade de uma senha fornecida pelo suário.
A senha válida é o número 1234. Devem ser impressas as seguintes mensagens:
*/

#include <stdio.h>

int main() {
  int senha = 0;
  printf("Entre com a senha: ");
  int deu_certo = scanf("%i", &senha);

  if (senha == 1234)
    printf("ACESSO PERMITIDO\n");
  else printf("ACESSO NEGADO\n");
  return 0;
}