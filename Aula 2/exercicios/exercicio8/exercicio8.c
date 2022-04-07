#include <stdio.h>
#define milimetro_pol 25.4
int main(void)
{
    /*
    Faça um programa para executar as seguintes conversões:
    – Ler uma temperatura em Fahrenheit e imprimir o equivalente em Celsius C=(5F-160)/9.
    – Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada = 25,4 mm).
    Declare uma constante para valor de 1 polegada em mm (#define milimetro_pol 25.4)

     */
    float C, F, quantidade, chuva;
    printf("Exibir temperatura e quantidade de chuva\n");
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);
    printf("Digite a quantidade de chuva em polegadas: ");
    scanf("%f", &quantidade);
    C=(5 * F-160)/9;
    chuva = quantidade * milimetro_pol;
    printf("A temperatura em celsius foi %.2f e a quantidade de chuva em milimetros foi %.2f", C, chuva);
    return 0;
}
