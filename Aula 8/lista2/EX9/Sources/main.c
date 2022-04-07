#include <stdio.h>
/*
Desenvolva um algoritmo que calcule e imprima
na tela o salário reajustado de um funcionário
de acordo com as seguintes regras:

• Salário de até R$2.000,00 reajuste de 50%;

• Salário maiores que R$2.000,00 reajuste de 30%;
*/

int main()
{
    float salario, reajuste;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    if (salario > 2000) {
        reajuste = (0.3 * salario) + salario;
    }
    else {
        reajuste = 0.5 * salario;
    }
    printf("o salario rajustado vale %.2f", reajuste);
    system("pause");
    return 0;
}
