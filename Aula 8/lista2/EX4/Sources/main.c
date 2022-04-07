#include <stdio.h>
/*
Escreva um programa em C que recebe um número inteiro e informe se o número 
digitado é par ou ímpar. Use o operador matemático % (resto da divisão ou módulo)
e o teste condicional if.

Scanf("%[^\n]", string)
*/
int main()
{
    int a;
    printf("Digite A:");
    scanf("%d", &a);
    if (a % 2 == 0 ) {
        printf("Eh par");
    } else {
        printf("Eh impar");
    }
    system("pause");
    return 0;
}
