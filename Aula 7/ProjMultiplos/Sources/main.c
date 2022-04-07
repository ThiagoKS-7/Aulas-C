#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando variáveis
    int a = 15;
    /*CONENCTIVO LÓGICO AND, se UMA comparação for falsa, tudo é falso (não entra no código)*/
    if(a > 5 && a <= 15) {
        printf("\nA variavel 'a' entre 5 e 15\n");

    }
     /*CONENCTIVO LÓGICO OR, se UMA comparação for true, já entra no código*/
    if(a > 5 || a > 15) {
        printf("\nA variavel 'a' eh maior que 5\n");

    }
     /*misturando conectivos*/
    if(a > 5 && a <= 15 || a == 20) {
        printf("\nA variavel 'a' esta entre 5 e 15 ou  vale 20\n");

    }
    return 0;
}
