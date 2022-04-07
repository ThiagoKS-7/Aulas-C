#include <stdio.h>

int main(void) {
  /*
  Enquanto o valor não estiver entre dois e dez,     
  repetir
  */
  int val;
  printf("digite um valor entre 2 e 10: ");
  scanf("%d", &val);
  
  while (val < 2 || val > 10 ) { //TEM Q SER UM OR, PQ SE FIZESSE COM AND UMA DAS ALTERNATIVAS SERIA SEMPRE FALSO
    printf("Erro! Digite um valor entre 2 e 10\n");
    scanf("%d", &val);    
  }
  printf("Passou, ufa!\n");
}