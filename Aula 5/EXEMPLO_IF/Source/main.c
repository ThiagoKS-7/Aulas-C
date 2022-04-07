#include <stdio.h>
#define MAX 10

int main()
{
    /* exemplo de if */
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while (num != MAX) {
        if(num > MAX) {
            printf("%d e maior que %d\n", num, MAX);
        } else if (num < MAX) {
            printf("%d e menor que %d\n", num, MAX);
        }
        printf("Digite um numero: ");
        scanf("%d", &num);
    }
    printf("Oba! %d e igual a %d", num, MAX);
    return 0;
}
