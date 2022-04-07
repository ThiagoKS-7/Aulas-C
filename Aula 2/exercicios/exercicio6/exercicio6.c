#include <stdio.h>

int main(void)
{
    /*
    O coração humano bate em média uma vez por segundo. 
    Desenvolver um programa para calcular e escrever quantas vezes o coração de uma
     pessoa baterá se viver X anos. 
    */
    printf("Calcular batimentos de coração em determinado tempo\n");
    float anos, batimentos;
    printf("Digite a quantidade de anos: ");
    scanf("%f", &anos);
    batimentos = 31536000 * anos;
    printf("Resuldado: %.2f batimentos", batimentos);
    return 0;
}


// 86400 x 365 = 31536000
//60x60x24 =  86400 