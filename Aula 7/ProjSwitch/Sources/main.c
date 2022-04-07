#include <stdio.h>
int main()
{
    printf("*******************************\n");
    printf("**       SWITCH CASE         **\n");
    printf("*******************************\n");
    // Declarando variavel
    int opcao;
    char texto = 'x';
    printf("[INPUT] Digite um numero: ");
    scanf("%d", &opcao);

    printf("\n\n[INFO] NUM IF ENCADEADO: \n");
    if(opcao == 1) {
        printf("\n[OUT] Opcao escolha: 1\n");
    } 
    else if (opcao == 2)
    {
        printf("[OUT] Opcao escolha: 2\n");
    }
     else if (opcao == 3)
    {
        printf("[OUT] Opcao escolha: 3\n");
    }
    else
    {
        printf("[OUT] Num sei do if\n");
    }
    printf("\n\n[INFO] NO SWITCH DO INT:\n");
    switch (opcao)
    {
    case 1:
        printf("[OUT] Opcao escolha: 1\n");
        break;
    case 2:
        printf("[OUT] Opcao escolha: 2\n");
        break;
    case 3:
        printf("[OUT] Opcao escolha: 3\n");
        break;
    default:
        printf("[OUT] ERR: Valor inválido\n");
        break;
    }

    printf("\n\nNO SWITCH DO CHAR:\n");
     switch (texto)
    {
    case 'x':
        printf("[OUT] eh x");
        break;
    case 'b':
        printf("[OUT] eh b");
        break;
    default:
        printf("[OUT] Num sei");
        break;
    }
    return 0;
}
