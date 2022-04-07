#include <stdio.h>

/*
Para que um cidadão possa fazer doação de sangue é necessário que ele tenha entre 16 e 69 anos.
Com base nesta regra, desenvolva um programa C que pergunte a idade do cidadão e informe se ele
pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).
*/

int main()
{
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if (idade >= 16 && idade <= 69) {
        printf("Pode doar");
    } else {
        printf("Nao pode");
    }
    system("pause");
    return 0;
}
