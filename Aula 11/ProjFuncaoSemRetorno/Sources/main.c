#include <stdio.h>
#include <stdlib.h>

//função sem retorno p/ desenhar borda
void desenhaBorda()
{
    printf("|------------------------------|\n");
}

void desenhaCaixa(char palavra[40])
{
    desenhaBorda();
    printf("|              %s              |\n", palavra);
    desenhaBorda();
}

int retornaDez()
{
    return 10;
}

int main()
{
    char palavra[20] = "hi";
    int num;
    desenhaCaixa(palavra);
    num = retornaDez();
    printf("num vale %d", num);
    return 0;
}
