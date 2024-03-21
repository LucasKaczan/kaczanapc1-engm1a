#include <stdio.h>

int main() {
  int raio = 0.f;
  printf("O raio da pizza eh de: ");
  scanf("%i", &raio);
  float pizza;
  
  pizza = 3.1416 * 2 * raio;
  printf("O perimetro da pizza eh %f\n", pizza);
  return 0;
}