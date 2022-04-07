#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

*/
void mostraMatriz (int matriz[2][2]) 
{
    printf("\n\n%d %d \n%d %d\n\n",
       matriz[0][0],
       matriz[0][1],
       matriz[1][0],
       matriz[1][1]
    );
}

void populaMatriz (int matriz[2][2],int i, int j)
{
    for (i = 0; i <=1; i ++) {
        for (j = 0; j <=1; j ++) {
            printf("Digite um valor para a matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void main()
{
    //pra usar acentos
    setlocale(LC_ALL, "");
    //variáveis de matriz [coluna][linha]
    /*
        Preencha uma matriz lendo os valores do usuário
        Dps troque os valores entre a primeira e a segunda
        linha
    */
    int minhaMatriz[2][2], aux1, aux2, i, j;
    populaMatriz(minhaMatriz, i, j);

    mostraMatriz(minhaMatriz);
    //auxiliares
    aux1 = minhaMatriz[0][0];
    aux2 = minhaMatriz[0][1];

    //invertendo valores usando auxilares
    minhaMatriz[0][0] =  minhaMatriz[1][1];
    minhaMatriz[0][1] =  minhaMatriz[1][0];
    minhaMatriz[1][0] = aux1;
    minhaMatriz[1][1] = aux2;
    mostraMatriz(minhaMatriz);
    system("pause");
    return 0;
}
