#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void main()
{
    // imprimir const na tela
    printf("%d\n",TAM );
    int i;
    for (i = 1; i <= TAM ; i++) {
        printf("Valor de i: %d\n", i);
    }
    system("pause");
    return 0;
}
