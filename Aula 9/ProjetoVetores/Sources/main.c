#include <stdio.h>
#include <stdlib.h>
// #define TAM 3


//função principal do programa .-.
void main()
{
    //declarar vetor
    int tam;
    printf("************************************\n");
    printf("*        EXEMPLO DE VETOR          *\n");
    printf("************************************\n\n");
    printf("Defina o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam], cont;
    //Imprime na tela
    for (cont = 0;cont < tam;cont ++) {
        printf("Digite val da pos %d: ",cont);
        scanf("%d", &vetor[cont]);
    }

    //SEMPRE USAR MENOR NO INTERVALO PRA ITERAR UM ARRAY (DÃÃÃ)
    for (cont = 0; cont < tam; cont ++) {
        printf("valor do vetor: %d\n", vetor[cont] +1);
    }
    system("pause");
    return 0;
}
