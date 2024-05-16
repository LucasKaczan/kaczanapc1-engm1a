/*
2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.
*/
#include <stdio.h>

int main() {
  float valor_bruto = 0;
  float valor_desconto = 0;
  
  printf("Entre com o valor bruto: ");
  int deu_certo = scanf("%f", &valor_bruto);

  if (valor_bruto <= 100)
    valor_desconto = valor_bruto * 0.01;
  if (valor_bruto > 100 && valor_bruto <= 500)
    valor_desconto = valor_bruto * 0.05;
  if (valor_bruto > 500)
    valor_desconto = valor_bruto * 0.1;
  printf("Você tem direito a um desconto de %.2f reais\n", valor_desconto);
  return 0;
}