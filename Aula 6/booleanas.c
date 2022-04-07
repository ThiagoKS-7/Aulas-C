#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int qtd = 0;
    bool repete = true;
    while (repete == true) {
        qtd += 1;
        if (qtd > 100) {
            repete = false;
        }

    }
    return 0;
}
