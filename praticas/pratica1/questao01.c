#include <stdio.h>

int main() {
  float A1 = 0.0;
  float A2 = 0.0;

  printf("Entre com a nota1: ");
  int deu_certo = scanf("%f", &A1);

  printf("Entre com a nota2: ");
  deu_certo = scanf("%f", &A2);

  float media = 0.4*A1 + 0.6*A2;

  printf("A média final é %.1f\n", media);

  if(media >= 5.0) {
    printf("Congratulations my friend!!\n");
  } else {
    printf("Se lascou!\n");
  }

  return 0;
}