#include <stdio.h>
#include <math.h>

int main() {
  int numero1;
  int numero2;
  const double PI = 3.1416;
  
  printf("Entre com o primeiro número: ");
  int deu_certo = scanf("%i", &numero1);
  printf("Entre com o segundo número: ");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma é %i\n", soma);
  
  int subtracao = numero1 - numero2;
  printf("A subtração é %i\n", subtracao);
  
  int multiplicacao = numero1 * numero2;
  printf("A multiplicação é %i\n", multiplicacao);
  
  int divisao = numero1 / numero2;
  int resto = numero1 % numero2;
  if (numero2 != 0)
    printf("A divisão é %i com resto %i\n", divisao, resto);
  else (
    printf("NÃO PODE DIVIDIR POR ZERO SEU MALUCo!\n")
  );

  double potencia = pow(numero1, numero2);
  printf("A potenciação entre os números é %.2f\n", potencia);

  double quadrado = pow(numero1, 2);
  printf("O quadrado do primeiro número é %.2f\n", quadrado);

  double logaritmo = log10(numero1);
  printf("O logaritmo de base 10 do primeiro número é %.2f\n", logaritmo);

  double logartmo2 = log2(numero1);
  printf("O logaritmo de base 2 do primeiro número é %.2f\n", logartmo2);
  
  double raiz = sqrt(numero1);
  printf("A raiz quadrada de %i é %.2f\n", numero1, raiz);

  double seno = sin(numero1 * (PI / 180));
  printf("O seno de %i é %.2f\n", numero1, seno);

  double cosseno = cos(numero1 * (PI / 180));
  printf("O cosseno de %i é %.2f\n", numero1, cosseno);

  double tangente = tan(numero1 * (PI / 180));
  printf("A tangente de %i é %.2f\n", numero1, tangente);
 
  // incremento
  // printf("O incremento do primeiro numero é %i\n", numero1++);
  // printf("O incremento do primeiro numero é %i\n", ++numero1);
  // decremento
  // printf("O decremento do primeiro numero é %i\n", numero1--);
  // printf("O decremento do primeiro numero é %i\n", --numero1);
  
  return 0;
}