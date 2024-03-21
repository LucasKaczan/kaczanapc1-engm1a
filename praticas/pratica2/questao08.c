/*
Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
*/
#include <stdio.h>
#include <math.h>

int main() {
  float x1 = 0.0;
  float y1 = 0.0;
  float x2 = 0.0;
  float y2 = 0.0;
  float distancia = 0.0;

  printf("Entre com a coordenada x1: ");
  int deu_certo = scanf("%f", &x1);
  printf("Entre com a coordenada y1: ");
  deu_certo = scanf("%f", &y1);
  printf("Entre com a coordenada x2: ");
  deu_certo = scanf("%f", &x2);
  printf("Entre com a coordenada y2: ");
  deu_certo = scanf("%f", &y2);

  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));


  printf("A distância entre os pontos é %.2f\n", distancia);
  return 0;
}