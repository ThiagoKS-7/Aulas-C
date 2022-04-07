#include <stdio.h>

/*
Faça um programa que, ao receber um numero,
calcule a sua tabuada
*/

void main()
{
    //declarar variaveis
    int cont, num; // sempre é inteira
    printf("Digite um numero: ");
    scanf("%d", &num);

    /*TABUADA DO num*/
    printf("******************************\n");
    printf("*        TABUADA DO %d       *\n", num);
    printf("******************************\n");
    for (cont = 1; cont <=10;  cont++) {
        printf("*    %d x %d = %d \n", cont, num, (num*cont));
    }
    printf("\n\n**************************************\n");
    printf("*        TABUADA REVERSA DO %d       *\n", num);
    printf("**************************************\n");

    /*CONTAGEM REGRESSIVA*/
    for (cont = 10; cont > 1;  cont--) {
        printf("*    %d x %d = %d \n", cont, num, (num*cont));
    }

    printf("\n\n**************************************\n");
    printf("*        TABUADA 2 EM 2 DO %d       *\n", num);
    printf("**************************************\n");

    /*CONTAGEM 2 em 2*/
    for (cont = 1; cont <= 10;  cont += 2) {
        printf("*    %d x %d = %d \n", cont, num, (num*cont));
    }
    system("pause");
    return 0;
}
