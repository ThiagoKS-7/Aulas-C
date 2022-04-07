#include <stdio.h>

/*
Desenvolva um programa que calcule a média aritmética
das 3 notas de um aluno e mostre, além do valor da média,
uma mensagem de “Aprovado”, caso a média seja igual ou superior a 6,
ou a mensagem “reprovado”, caso contrário.
*/
int main()
{
    float media;
    float notas[6], soma = 0;
    int length = (int)( sizeof(notas) / sizeof(notas[0]));

    for (int i = 1; i <= length; i ++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    media = soma / length;
    printf("A media das notas vale %.2f", media);
    return 0;
}
