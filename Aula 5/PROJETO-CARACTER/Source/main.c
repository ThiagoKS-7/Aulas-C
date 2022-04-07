#include <stdio.h>


int main()
{
    /* code */
    char palavra[10];

    printf("Digite uma palavra: ");

    /* LIMPAR BUFFER*/
    setbuf(stdin, 0);
    fgets(palavra,255,stdin);
    //limpa casas não utilizadas
    palavra[strlen(palavra) -1] ='\0';

    printf("Beleza, tu escreveu %d", palavra);
    return 0;
}
