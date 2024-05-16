#include <stdio.h>
int main() {
int dia, idade, estudante, casal;
printf("Informe o dia da semana (1:Domingo, 2:Segunda, ... 7:Sábado): ");
int deu_certo = scanf("%i", &dia);
if (dia == 2) {
printf("paga meia");
} else {
printf("Informe a idade: ");
deu_certo = scanf("%i", &idade);
if (idade <= 12 || idade >= 65) {
printf("paga meia");
} else {
printf("É estudante? (1:Sim ou 2:Não): ");
deu_certo = scanf("%i", &estudante);
if (estudante == 1) {
printf("Paga meia\n");
} else {
printf("É casal? (1:Sim ou 2:Não): ");
deu_certo = scanf("%i", &casal);
if (dia == 4 && casal == 1) {
printf("Paga meia\n");
} else {
printf("Paga inteira\n");
}
}
}
}
return 0;
}