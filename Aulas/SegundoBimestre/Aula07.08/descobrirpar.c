#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;
  int num;
  
  printf("Insira um valor:  \n\n");
  scanf("%d", &num);
  while (i <= num){
     if( i % 2 == 0){
       printf("%d\n", i);
     }
    i++;
  }
  return 0;
}
