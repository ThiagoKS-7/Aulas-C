#include <stdio.h>

int main(void)
{

    /*
    Crie um programa que leia o número de horas trabalhadas no mês e o valor da hora.
    O programa deverá imprimir o salário que o funcionário deverá receber, calculando o desconto de 6%
    do vale transporte do funcionário.
    */
    printf("Calcular salario com desconto a partir de valor/hora e horas trabalhadas\n");
    float desconto, horas, valorH, salario;
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o valor da hora: ");
    scanf("%f", &valorH);
    desconto = 0.06 * (horas * valorH);
    salario = (horas * valorH) - desconto;
    printf("Resultado do salario: %.3f", salario);
    return 0;

}