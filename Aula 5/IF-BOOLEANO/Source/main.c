#include <stdio.h>
#include <stdbool.h>
/*SE TRABALHA COM BOOLEANO TEM Q SER VOID */
void main()
{
    /* code */
    bool a = true;
    bool b = false;

    if(a) {
        printf("Bombou o a fi\n");
    }
    if(!b) {
        printf("Bombou  o b fi\n");
    }
    else {
        printf("Deu ruim fi\n");
     }

    if(!a) {
        printf("\nNeh nao fi");
    }
}
