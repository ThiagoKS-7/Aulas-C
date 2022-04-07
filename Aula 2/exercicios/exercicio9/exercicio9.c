#include <stdio.h>
#define NUM_PESSOAS 3

int main(void)
{
    /*
    Desenvolver um algoritmo para ler o nome, 
    idade e peso de três pessoas. 
    Calcular e imprimir idade e o peso médio das três pessoas.
     */
    char nome1,nome2,nome3;
    float idade1,idade2,idade3, peso1, peso2, peso3, mediaI, mediaP;
    char nomes[4] = {'-', nome1, nome2, nome3};
    float idades[4] = {'-', idade1,idade2,idade3};
    float pesos[4] = {'-', peso1, peso2, peso3};

    printf("**********************\n");
    printf("* Idade e peso medio *\n");
    printf("**********************\n");
    for (int i = 1; i <= NUM_PESSOAS; i ++) {
        printf("Digite o nome da pessoa %d: ", i);
        scanf("%s", &nomes[i]);
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%f", &idades[i]);
        printf("Digite o peso da pessoa %d: ", i);
        scanf("%f", &pesos[i]);
    }
 

    mediaI = (idades[1] + idades[2] + idades[3])/NUM_PESSOAS;
    mediaP = (pesos[1] + pesos[2] + pesos[3])/NUM_PESSOAS;

    printf("A idade media resultou em %.2f e o peso medio foi de %.2f", mediaI, mediaP);
    return 0;
}
