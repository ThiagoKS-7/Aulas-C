#include <stdio.h>

int main()
{
    int menor;
    int maior = 0, valor = 0;
    for (int i = 1; i <= 3; i++) {
        printf("Digite o valor %d :", i);
        scanf("%d", &valor);
        if (valor < menor) {
            menor = valor;
        } 
        else if (valor > maior) {
            maior = valor;
        } 
    }
    printf("O maior numero vale %d e o menor vale %d", maior, menor);
    system("pause");
    return 0;
}
