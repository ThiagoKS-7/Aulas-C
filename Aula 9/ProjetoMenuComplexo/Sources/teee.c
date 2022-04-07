#include <stdio.h>

int main()
{
    //declarar variaveis
    int opcao;
    printf("****************************\n");
    printf("*     Digite um valor:     *\n");
    printf("****************************\n\n");
    printf("n1: a\n");
    printf("n2: b\n");
    printf("n3: c\n");
    scanf("%d", &opcao);
    //tem q pedir algo antes do laco
    while (opcao < 1 || opcao > 3) {
       //interface do menu
       printf("****************************\n");
       printf("*     Digite um valor:     *\n");
       printf("****************************\n\n");
       printf("n1: a\n");
       printf("n2: b\n");
       printf("n3: c\n");
       scanf("%d", &opcao);

       switch (opcao)
       {
       case 1:
           printf("Opcao 1 foi escolhida\n\n");
           break;
       
       case 2:
           printf("Opcao 2 foi escolhida\n\n");
           break;
       
       case 3:
           printf("Opcao 3 foi escolhida\n\n");
           break;
       
       default:
           printf("Opcao invalida\n\n");
           break;
       }
    }
    printf("\n\nFIM");
    return 0;
}
