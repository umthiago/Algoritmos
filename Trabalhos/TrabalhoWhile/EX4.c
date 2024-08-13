#include <stdio.h>
#include <stdlib.h>

int main() {
  double valor = 0;
  int aux = 1;
  double maior = 0;
 
  
  printf("Digite 10 números, para mostrar qual o maior deles:\n");

  while ( aux <= 10){
    scanf("%lf", &valor);

    if(maior < valor){
      maior = valor;
    }
    aux++;
  }
  printf("Dos números digitados, o maior foi: %.2lf", maior);
  
  return 0;
}
