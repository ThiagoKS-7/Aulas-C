#include <stdio.h>

int main() {
    /* variaveis */
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x'; // caracteres ou alfa-numericos

    printf("se tudo for false, nada acontece\n");
    /*CONDICIONAL SIMPES*/
    if(a == 5) {
        printf("A variavel a vale 5 \n");
    } 
    if(b == 2.5) {
        printf("A variavel a vale 2.5 \n");
    } 
    printf("valor de c: %d, ou melhor, %c\n", c);
    /*CONDICIONAL COMPOSTA*/
    if(opcao == 1) {
        printf("A variavel opcao vale 1 \n");
    } 
    else if(opcao == 2) {
        printf("A variavel opcao vale 2 \n");
    } else {
        printf("Nao sei entao fi, %d, sla", opcao);
    }
    return 0;
}
