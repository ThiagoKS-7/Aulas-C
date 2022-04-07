#include <stdio.h>
#include <conio.h>
#define NUM_PESSOAS 3

int main(void)
{
   float mediaI, mediaP;
    char nome[50];
    /* LIMPAR BUFFER*/
    setbuf(stdin, 0);
    fgets(nome,255,stdin);
    nome[strlen(nome) -1] ='\0';
    typedef struct
    {
        nome;
        float idade;
        float peso;
    } PESSOA;

    PESSOA* pessoas = malloc(NUM_PESSOAS * sizeof *pessoas);

    printf("\n---------- Idade e peso medio de 3 pessoas -----------\n\n\n");
    for (int i = 1; i <= NUM_PESSOAS; i ++) {
        printf("\n---------- Pessoa %d -----------\n\n", i);
        printf("Digite o nome da pessoa %d.... ", i);
        scanf("%s", &pessoas[i].nome);
        printf("Digite a idade da pessoa %d... ", i);
        scanf("%f", &pessoas[i].idade);
        printf("Digite o peso da pessoa %d....", i);
        scanf("%f", &pessoas[i].peso);
    }
 
    mediaI = (pessoas[1].idade + pessoas[2].idade + pessoas[3].idade)/NUM_PESSOAS;
    mediaP = (pessoas[1].peso + pessoas[2].peso + pessoas[3].peso)/NUM_PESSOAS;
    printf("\n---------- Media final -----------\n\n");
    printf("A idade media resultou em %.2f e o peso medio foi de %.2f", mediaI, mediaP);
    printf("\n\n---------- Fim do programa -----------\n\n");
    return (0);
}
