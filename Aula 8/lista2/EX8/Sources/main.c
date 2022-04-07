#include <stdio.h>

/*
Desenvolver um programa que leia um número inteiro
e verifique se o número é divisível por 5 e por 3 ao
mesmo tempo.
*/
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero % 5 == 0 && numero % 3 == 0) {
        printf("Eh divisivel por 3 e 5");
    } else {
        printf("Nao eh divisivel");
    }
    return 0;
}
