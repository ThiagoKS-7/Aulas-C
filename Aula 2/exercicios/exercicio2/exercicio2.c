#include <stdio.h>
int main(void)
{
    printf("Crie um programa que leia 3 numeros e faca a media entre eles.\n");
    printf("Apos o calculo, imprima o valor na tela.\n");
    float num1, num2, num3, soma, media;
    printf("Digite o valor 1: ");
    scanf("%f", &num1);
    printf("Digite o valor 2: ");
    scanf("%f", &num2);
    printf("Digite o valor 3: ");
    scanf("%f", &num3);
    soma = num1 + num2 + num3;
    media = soma / 3;
    printf("a media foi de %.2f", media);
    return 0;
}
