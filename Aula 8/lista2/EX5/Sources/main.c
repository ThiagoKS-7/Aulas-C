#include <stdio.h>

/*
Desenvolva um programa em que o usuário informe o salário recebido no mês e o valor total
gasto no mês. Após a inserção dos valores, o programa deverá exibir na tela as seguintes mensagens:
“Gastos dentro do orçamento” caso o valor gasto não tenha ultrapassado o valor do salário mensal e
“Orçamento estourado” se o valor gasto ultrapassou o valor do salário mensal. Caso os gastos estejam
dentro do orçamento, o programa deverá informar o valor que o usuário poderá guardar, e caso os gastos
tenham ultrapassado o orçamento, o programa deverá informar quanto o usuário ficará devendo no mês.
*/
int main()
{
    float salario, gastoMensal;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o seu gasto mensal: ");
    scanf("%f", &gastoMensal);
    if (gastoMensal > salario) {
        printf("Estourou o orcamento");
    }
    else {
        printf("Gastos dentro do orcamento");
    }
    system("pause");
    return 0;
}
