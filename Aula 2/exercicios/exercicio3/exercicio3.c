#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Crie um programa que leia o valor do dólar e faça a conversao em reais. O usuario devera inserir o valor da cotação atual do dólar (em reais) e o valor do produto (em dolar). O programa devera imprimir o valor em reais.\n");
    float dolar, reais;
    printf("Digite um valor em dolar: ");
    scanf("%f", &dolar);
    reais = dolar * 5.06;
    printf("Resultado: %.2f", reais);
    return 0;

}
