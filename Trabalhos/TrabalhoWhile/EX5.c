#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor = 0;
  int aux = 0;
 
  printf("Digite um número para saber sua tabuada\n");
  scanf("%d", &valor);
  
  while ( aux <= 10){
    printf("%d x %d = %d\n", valor, aux, valor * aux);
    
    aux++;
  }
  
  return 0;
}
