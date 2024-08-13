#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor = 0;
  int aux = 1;
  int numpar = 1;
  int numimpar = 1;
  
  printf("Digite um inteiro: ");
  scanf("%d", &valor);  

  while (aux <= valor){

    if (aux % 2 > 0){
      printf("%d\t", numimpar);
    } else{
      printf("%d\n", numpar);
    }

    numimpar++;
    numpar++;
    aux++;
  }
  return 0;
}
