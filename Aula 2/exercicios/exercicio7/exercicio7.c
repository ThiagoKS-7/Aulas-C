#include <stdio.h>
#define PI 3.1415

int main(void)
{
    /*
    Um fabricante de latas deseja desenvolver um programa para calcular o custo de uma lata
    cilíndrica de alumínio, sabendo-se que o custo do alumínio por m² é R$ 100,00. 
    Leia o raio e a altura e escreva o valor do custo.
    Declare uma constante para o valor de PI e outra para o valor do metro quadrado.
     */
    //a área do alumínio é o perímetro x a altura
    printf("ler raio e altura e responder custo\n");
    float raio, altura, perimetro, areaAl, volume, custo;
    printf("Digite o raio do cilindro em metros: ");
    scanf("%f", &raio);
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    perimetro = 2 * PI * raio;
    areaAl = perimetro * altura;
    custo = areaAl * 100;
    printf("O custo total foi de: %.2f", custo);
    return 0;
}
