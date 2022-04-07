#include <stdio.h>
#define TAM 10

int main()
{
    int vetor[TAM];
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    vetor[5] = 60;
    vetor[6] = 70;
    vetor[7] = 80;
    vetor[8] = 90;
    vetor[9] = 100;
    vetor[10] = 110; // não existe controle pra colocar coisas no fim do array

    for (int i = 0; i < TAM +1; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
