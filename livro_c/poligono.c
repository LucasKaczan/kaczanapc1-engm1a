/*
5.13) Escreva um programa para ler o número de lados de um polígono regular e a
medida do lado (em cm). Calcular e imprimir o seguinte:
• Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor da área
• Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
• Se o número de lados for igual a 5 escrever PENTÁGONO.
• Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO
IDENTIFICADO.
*/

#include <stdio.h>
#include <math.h>

int main() {
  int lados = 0;
  float medida = 0.0;
  float area = 0.0;
  
  printf("Quantos lados tem o polígono?: ");
  int deu_certo = scanf("%i", &lados);

  if (lados > 5) {
    printf("Menos, por favor.\n");
  } else {
  printf("Qual a medida do lado?: ");
  deu_certo = scanf("%f", &medida);

  if (lados == 3) {
    area = (medida * medida) * sqrt(3) / 4;
    printf("É um triângulo com área de %f\n", area);
  }
  if (lados == 4) {
    area = medida * medida;
    printf("É um quadrado com área de %f\n", area);
  }
  if (lados == 5) {
    area = (5 * medida * medida) / (4 * tan(M_PI / 5));
    printf("É um pentágono com área de %f\n", area);
  }
  }
  return 0;
}