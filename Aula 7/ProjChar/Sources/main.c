#include <stdio.h>
#include <stdlib.h>
/* - Alfanumérico: sistema capaz de codificar letras e números:
o teclado do computador é alfanumérico. O que se codifica ou pode ser
utilizado nesse sistema: código alfanumérico ou dispositivo alfanumérico
*/
// Usar função void (pra ñ retornar dados inteiros)
void main()
{
    // Declarando variáveis 
    char letra = 'x';
    /*CONDICIIONAL SIMPLES*/
    if(letra == 'x') {
        printf("A letra em char vale %c\n", letra);
        printf("Mas em valor decimal vale %d\n", letra);  // Valor na tabela ASCII
        /*
        // Tentar rodar isso quebra tudo
            printf("Se eu invento de imprimir como string, vale %s\n", letra);
            printf("Float então, vale %f\n", letra);
        */
    }
    if (letra == 120) {
        printf("Veio true, logo value 120 memo.");
    }
    return 0;
}
