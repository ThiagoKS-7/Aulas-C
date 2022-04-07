#include <stdio.h>
#define TAM 10


void montaVetor(int vetor[10]) {
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
}


void inverteVetor(int temp, int vetor[10], int j) {
    for (int i = 0; i < TAM; i++) {
        printf("%d - ",i);
        temp = vetor[i];
        temp = vetor[j -1];
        printf("%d\n",vetor[j -1]);
        j --;
    }
}

int main()
{
    int vetor[TAM], j = 10;
    int temp;
    inverteVetor(temp, vetor, j);

    return 0;
}
