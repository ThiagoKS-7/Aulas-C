#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int qtd = 1;
  bool repete = true;
  while (repete) {
    printf ("%c", qtd);
    qtd += 1;
    if(qtd > 100) {
        repete = false;
    }

  } 
 
  return 0;
}