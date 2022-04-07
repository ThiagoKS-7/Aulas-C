#include <stdio.h>

int main(void)
{
    /*
    Escrever um algoritmo que lê o público total de futebol e fornecer a renda do jogo,
    sabendo-se que havia 4 tipos de ingressos assim distribuídos:
    popular 10% a R$1,00, geral 50% a R$5,00, arquibancada 30% a R$10,00 e cadeiras 10% a R$ 20,00.
     */

    printf("faturamento total do jogo\n");

    float total, popular, geral, arquibancada, cadeiras, faturamento;

    printf("Digite o total do publico que veio no jogo: ");
    scanf("%f", &total);

    popular = 0.1 * total;
    geral = 0.5 * total;
    arquibancada = 0.3 * total;
    cadeiras = 0.1 * total;

    faturamento = cadeiras + arquibancada + geral + popular;
    
    printf("O faturaturamento total do jogo foi de R$ %.2f", faturamento);
    return 0;
}
