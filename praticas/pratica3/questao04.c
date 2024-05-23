/*
4. Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char tecla;

    printf("Pressione uma tecla: ");
    int deu_certo = scanf("%c", &tecla);

    if(isalpha(tecla)) {
        printf("A tecla pressionada é uma letra.\n");
    }
    else if(isdigit(tecla)) {
        printf("A tecla pressionada é um dígito.\n");
    }
    else {
        printf("A tecla pressionada é um caractere especial.\n");
    }

    return 0;
}