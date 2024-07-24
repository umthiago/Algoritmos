#include <stdio.h>

int main() {

  int codigo;
  printf("Insira o código de um determinado produto\n");
  scanf("%d" ,&codigo);
  switch(codigo){
    case 1:
      printf("Alimento não-perecível\n");
    break;
    case 2:
      printf("Alimento perecível\n");
    break;
    case 3:
      printf("Vestuário\n");
    break;
    
    default:
      printf("Limpeza");
    
  }
  return 0;
}
