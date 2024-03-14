/*
Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
*/
#include <stdio.h>

int main() {
  float valor_hora_trabalho = 150.00;
  float total_horas_trabalhadas = 100;
  float salario_bruto = valor_hora_trabalho * total_horas_trabalhadas;

  const float IR = 0.25f;
  const float INSS = 0.11f;
  float valor_ir = salario_bruto * IR;
  float valor_inss = salario_bruto * INSS;
  float salario_liquido = salario_bruto - (valor_ir + valor_inss);

  printf("\x1b[34m-------------------------------------\n");
  printf("      C O N T R A   C H E Q U E      \n");
  printf("-------------------------------------\x1b[0m\n");
  printf("\x1b[32mSalario bruto.....: R$ %8.2f\x1b[0m\n", salario_bruto);
  printf("\x1b[31mImposto de renda..: R$ %8.2f\x1b[0m\n", valor_ir);
  printf("\x1b[31mImposto INSS......: R$ %8.2f\x1b[0m\n", valor_inss);
  printf("\x1b[32mSalario liquido...: R$ %8.2f\x1b[0m\n", salario_liquido);
  
  return 0;
}