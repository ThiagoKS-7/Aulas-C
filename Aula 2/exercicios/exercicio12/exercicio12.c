#include <stdio.h>

int main(void)
{
    /*
        Uma autolocadora aluga seus carros com uma taxa fixa por dia,
        uma taxa por Km rodado e desconto de 10% na taxa fixa de aluguel por dia.
        Escrever um algoritmo que lê a taxa fixa por dia, a taxa por Km rodado, o número de dias,
        o número de quilômetro rodado e calcular e escrever o valor total do aluguel, o valor do desconto,
        o numero de dias, e a quilometragem rodada.
    */
    printf("calcular aluguem do carro\n");

    float taxaFixa, taxaKm, nDias, nKm, aluguel, desconto, taxaKmTotal;

    printf("Digite a taxa fixa: ");
    scanf("%f", &taxaFixa);

    printf("Digite a taxa por km rodado: ");
    scanf("%f", &taxaKm);

    printf("Digite o numero de km rodado: ");
    scanf("%f", &nKm);

    printf("Digite o numero de dias: ");
    scanf("%f", &nDias);

    desconto = 0.1 * taxaFixa;
    taxaKmTotal = taxaKm * nKm;
    aluguel = taxaKmTotal - desconto;

    printf("O total do aluguel foi de R$ %.2f, o valor do desconto foi de R$ %.2f,\n foi alugado por %.2f dias e rodado por %.2f quilometros.", aluguel, desconto, nDias,nKm);


    return 0;
}
