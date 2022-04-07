#include <stdio.h>
#include <math.h>
int main(void)
{
    /* 
    Fazer um algoritmo que leia a idade de uma pessoa expressa em anos, 
    meses e dias e mostre-a apenas em dias.
     */
    printf("idade pra dias \n");
    float idade, anos, meses,dias;
    printf("Digite quantos anos: ");
    scanf("%f", &anos);
    printf("Digite quantos meses: ");
    scanf("%f", &meses);
    printf("Digite quantos dias: ");
    scanf("%f", &dias);
    idade = (anos * 365) + (meses * 30.4167) + dias;
    printf("O resultado da idade em dias foi de: %.2f", idade);
    return 0;
}

// 30,4167