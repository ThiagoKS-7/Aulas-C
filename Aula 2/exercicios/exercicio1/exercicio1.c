#include <stdio.h>

int main(void) {
    int num1, num2, res;
    printf("Crie um programa que leia dois numeros inteiros e imprima a soma.\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    res = num1 + num2;
    printf("O resultado da soma foi: %d", res);
    return 0;   
}
