/*
6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/

#include <stdio.h>
#include <math.h>

int main() {
  int a = 0.0;
  int b = 0.0;
  int c = 0.0;
  int delta = 0.0;
  int x1 = 0.0;
  int x2 = 0.0;

  printf("Entre com o valor de a: ");
  int deu_certo = scanf("%i", &a);
  printf("Entre com o valor de b: ");
  deu_certo = scanf("%i", &b);
  printf("Entre com o valor de c: ");
  deu_certo = scanf("%i", &c);
  
  delta = b*b - 4*a*c;
  x1 = (-b + sqrt(delta)) / (2*a);
  x2 = (-b - sqrt(delta)) / (2*a);

  printf("As raizes da equacao sao %.1i e %.1i\n", x1, x2);
  return 0;
}