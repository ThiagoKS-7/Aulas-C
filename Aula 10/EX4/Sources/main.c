#include <stdio.h>
#include <stdlib.h>
#define TAM  20


void passaParaMaiusculo(char texto[], int tam)  {
    for (int i = 0; i < tam; i ++) {
        if (texto[i] >= 97 && texto[i] < 122) {
            texto[i] = texto[i] - 32;
            printf("%c", texto[i]);
        } else {
            printf("%c", texto[i]);
        }
    }
}

void soma(int a, int b) {
    // *a == ponteiro para o endereço x
    printf("a soma de %d e %d eh %d\n",a,b, a+b);
}

void somaReferencia(int *a, int *b) {
    printf("a soma de %d e %d eh %d\n",*a,*b, *a+*b);
}

int pot(int base, int pot) {
    int valor = base;
    if (base == 0) {
        return 1;
    } else if (base < 0) {
        return 0;
    } else {
        for (int i=0; i < pot -1; i ++) {
            printf("valor: %d\n", valor);
            valor = valor * base;
        }
        return valor;
    }
}

int main()
{
    // declarar vars
    int x = 10;
    int y = 20;
    int base = 2;
    int potencia = 5;
    long resultado;

    //func soma normal
    soma(x, y);
    soma(x*2, y);
    printf("antes: %d e %d\n\n", x, y);

    /*func soma referencia*/
    somaReferencia(&x, &y); // referencia (ponteiro) de x e y
    printf("depois: %d e %d\n\n", x, y);

    /*func potencia*/
    resultado = pot(base,potencia);
    printf("O resultado eh %d\n", resultado);

    /*FUNC TRANSFORMA P/ MAIUSCULO */
    char nome[20]= {'t','h','i','a','g','o',' ','k','a','s','p','e','r'}; 
    // chars passam automaticamente por referencia
    passaParaMaiusculo(nome, TAM);

    return 0;
}

