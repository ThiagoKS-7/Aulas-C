#include <stdio.h>

/*EXEMPLO PIKA - CALCULAR O SALÁRIO DE 500 FUNCIONARIOS COM BASE NUMA EQUAÇÃO*/

int main()
{
    int salario[600];
    int soma = 0;
    float media = 0.0;
    for (int i = 1; i <=500; i++) {
        salario[i] = 8 * i + 530;
        printf("salario[%d]: R$ %d, 00\n", i, salario[i]);
        soma = soma + salario[i];
    }
    // coisa útil: se calcula uma length com esses coisa:
    int length = (int)( sizeof(salario) / sizeof(salario[0]));
   // length = strlen(salario);
    
    media = soma / length; 
    printf("\nlength: %d\n", length);
    printf("A media vale %.2f", media);
    return 0;
}
