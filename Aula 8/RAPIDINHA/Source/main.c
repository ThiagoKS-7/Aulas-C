#include <stdio.h>

/*nome cargo e salario de 5 func*/

int main()
{
    // declaração de matrizes
    char nomes[5][20];
    char cargos[5][20];
    float salarios[5];

    // itera para cada func
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", &nomes[i]);
        printf("Digite o cargo %d: ", i + 1);
        scanf("%s", &cargos[i]);
        printf("Digite o salario %d: ", i + 1);
        scanf("%f", &salarios[i]);

        printf("Nome %d: %s, Cargo %d: %s, Salario %d : %.2f\n", i, nomes[i], i, cargos[i], i, salarios[i]);
    }

    return 0;
}
