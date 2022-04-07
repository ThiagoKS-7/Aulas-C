#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Digite A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);
    printf("Digite C: ");
    scanf("%d", &c);

    if (b < a && c < a) {
        printf("A eh o maior: %d\n",a);
    }
    else if (a < b && c < b) {
        printf("B eh o maior: %d\n",b);
    }
    else if (b < c && a < c) {
        printf("C eh o maior: %d\n",c);
    }

    if (b > a && c > a) {
        printf("A eh o menor: %d\n",a);
    }
    else if (a > b && c > b) {
        printf("B eh o menor: %d\n",b);
    }
    else if (b > c && a > c) {
        printf("C eh o menor: %d\n",c);
    }
    system("pause");
    return 0;
}
