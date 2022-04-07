#include <stdio.h>
int main()
{
    //Declarando variaveis
    int a = 1, b = 10;
    while (a <= b) {
        printf("%d \n", a);
        a ++; //incrementando
    }
    //contagem até 10
    printf("WHILE \n\n");
    while (a < 100) {
        printf("%d\t", a); // /t = tabulação
        a ++;
        if (a == 100) {
            a = 1000; 
            //a --; = decrementando
        }
    }
    //do while
    printf("WHILE \n\n");
    do {
        printf("%d\t", a); // /t = tabulação
        a ++;
        if (a == 100) {
            a = 1000; 
            //a --; = decrementando
        }

    } while(a < 100); 
    return 0;
}
