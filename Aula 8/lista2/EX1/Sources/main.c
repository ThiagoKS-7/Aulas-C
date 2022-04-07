#include <stdio.h>
/*Desenvolva um programa que leia dois números inteiros e informe se estes são iguais ou diferentes.*/
int main()
{
    int a, b;
    printf  ("digite A: ");
    scanf("%d", &a);
    printf  ("digite B: ");
    scanf("%d", &b);
    if (a == b) {
        printf("A vale B");
    } else {
        printf("A nao vale B");
    }
    system("pause");
    return 0;
}
