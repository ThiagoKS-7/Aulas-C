#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
tendo a, b e c, calcular:
-b +- raiz quadrada de b ao quadrado vezes a vezes c dividido por 2a
*/

float calculaDelta(float a, float b, float c) {
    return (b*b) - (4*a*c);
}

void calculaRaizes(float x1, float x2, float delta, float b, float a) {
    x1 = (-b + sqrt(delta))/ (2 * a);
    x2 = (-b - sqrt(delta))/ (2 * a);
    if (delta < 0) {
        printf("Nao existem raizes reais\n");
    }
    else if (delta == 0) {
        printf("x vale %.2f\n", x1);
    }
    else {
        printf("x vale %.2f\n", x1);
        printf("x' vale %.2f\n", x2);
    }
}

void calculaBhaskara(float a, float b, float c,
 float delta,float x1, float x2 )
{
    printf("Digite A: ");
    scanf("%f", &a);
    printf("Digite B: ");
    scanf("%f", &b);
    printf("Digite C: ");
    scanf("%f", &c);
    delta = calculaDelta(a,b,c);
    calculaRaizes(x1,x2,delta,b,a);
    system("pause");
}

int main()
{
    float a, b, c, delta, x1, x2;
    calculaBhaskara(a,b,c,delta,x1,x2);
    return 0;
}
