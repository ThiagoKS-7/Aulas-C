#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
int main(void) {
  int a;
  float c;
  printf("Qual o número? ");
  scanf("%d", &a); // te deixa digitar o valor
  c=(pow(a,2));
  printf("Hello World\n");
  printf("Quadrado = %.0f\n", c);
  return 0;
}
*/

int main(void) {
float a, b, c, d, e, f;

printf("Digite o primeiro valor: ");
scanf("%f", &a);

printf("Digite o segundo valor: ");
scanf("%f", &b);

c = a + b;
d = a * b;
e = a / b;
f = pow(a, 2);

 printf("Resultado da soma = %.2f\n", c);
 printf("Resultado da multiplicação = %.2f\n", d);
 printf("Resultado da divisão = %.5f\n", e);
 printf("Resultado da potência = %.5f", f);
  
  return 0;
}
