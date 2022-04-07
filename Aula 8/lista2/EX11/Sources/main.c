#include <stdio.h>

/*
Uma determinada empresa concederá uma aumento de salário aos seus funcionários.
Esse aumento será variável de acordo com o cargo, conforme a tabela abaixo. Desenvolva um
programa que receba o salário e o cargo de um funcionário e calcule o novo salário.
Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de aumento.
Mostre o salário antigo , o novo salário e a diferença.

Reajuste:

CARGO REAJUSTE
GERENTE 10% - g
ENGENHEIRO 20% - e
TECNICO 30% - t
DEMAIS CARGOS 5% - d
*/
int main()
{
    char cargo[20];
    float salario, reajuste;
    printf("Digite o cargo: ");
    scanf("%c", &cargo[0]);
    printf("Digite o salario: ");
    scanf("%f",&salario);
    switch (cargo[0])
    {
    case 'g':
        reajuste = (0.1 * salario) + salario;
        break;
    case 'e':
        reajuste = (0.2 * salario) + salario;
        break;
    case 't':
        reajuste = (0.3 * salario) + salario;
        break;
    default:
        reajuste = (0.05 * salario) + salario;
        break;
    }
    printf("O salario reajustado vale %.2f", reajuste);
    return 0;
}
