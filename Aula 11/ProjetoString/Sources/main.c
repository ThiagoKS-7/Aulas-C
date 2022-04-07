#include <stdio.h>
#include <stdlib.h>

/*
LIVRO LOGICA DE PROGRAMAÇÃO  - PAG 73 - 
cap 6 Estruturas estáticas de dados

VETOR = |0|1|2|3|4|5|6|7|8|9|
guarda conjunto de variaveis
*/
void dizerString(char palavra[40] ) 
{
    printf("R: %s", palavra);
}

void limpaBuffer(char palavra[40])
{
    //limpar buffer
    setbuf(stdin, 0);

    //lê string
    fgets(palavra, 255, stdin);

    //limpa as casas não utilizadas
    palavra[strlen(palavra) -1] - '\0'; // strlen - lê array e capa a ultima casa
}

void getPalavra(char palavra[40]) {
    //introdução
    printf("Digite um palavra: ");
    limpaBuffer(palavra);
    dizerString(palavra);
    system("pause");
}


void main()
{
    //variáveis
    char palavra[10];
    getPalavra(palavra);
    return 0;
}
