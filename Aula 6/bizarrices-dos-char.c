#include <stdio.h>
#include<stdbool.h>

int main(void)
{
    char a = '1';
    char b = '1';
    printf("COLOCANDO '1'+'1', SAI: \n");
    printf("SE FOR PORCENTO C: %c\n",a+b);
    printf("SE FOR PORCENTO D: %d\n", a+b);

    printf("Isso acontece pq ele ta pegando o valor hexadecimal dos char\n");

    return 0;
}
