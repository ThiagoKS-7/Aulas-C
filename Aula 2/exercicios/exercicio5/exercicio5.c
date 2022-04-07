#include <stdio.h>

int main(void)
{
    /*
        Escreva um programa para ler o salário mensal atual de um funcionário e
        o percentual de reajuste. Calcular e escrever o valor do novo salário.
    */

    printf("Ler salario atual e percentual de reajuste\n");
    float salario, reajuste, salarioNovo, desconto;
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &reajuste);
    desconto = (salario * reajuste) / 100;
    salarioNovo = salario - desconto;
    printf("O salario novo resultou em: %.2f", salarioNovo);
    return 0;
}
