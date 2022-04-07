#include <stdio.h>

int main(void)
{
    /*
    Escrever um algoritmo que lê a taxa de consumo de potência elétrica de um refrigerador,
    o tempo em horas que permaneceu ligado e o valor do quilowatt hora e calcular e escrever
    a energia total gasta pelo refrigerador, bem como, o valor a ser pago à companhia de Energia Elétrica.
     */
    float  tempoLigado, potencia, tempoMes,EnTotal;


    printf("Digite o tempo (em horas) que o refrigerador ficou ligado: ");
    scanf("%f", &tempoLigado);

    printf("Digite a potencia do refrigerador em Kwh: ");
    scanf("%f", &potencia);


    tempoMes = (tempoLigado * 365)/12;
    EnTotal = potencia * tempoMes;

    printf("A energia total gasta %.2f foi de R$%.2f", tempoMes, EnTotal);

    return 0;
}
