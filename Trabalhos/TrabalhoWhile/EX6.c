#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor = 0;
  int aux = 0;

  printf("Digite um valor para fazer contagem regressiva de 5 em 5\n");
  scanf("%d", &valor);

  aux = valor;

  while ( aux >= 0){
    printf("%d\n", valor);

    valor = valor - 5;
    aux = valor;
  }

  return 0;
}
