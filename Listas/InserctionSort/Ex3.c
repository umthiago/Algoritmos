//  Ordenação de Strings: Modifique o Insertion Sort para ordenar um vetor de strings em ordem alfabética.

#include "stdio.h"
#include "string.h"

void insertionSort(char vetor[][50], int n){ 
    int i, j; 
    char key[50]; 
    for(i = 1; i < n; i++){ 
        strcpy(key, vetor[i]); 
        j = i-1; 
        while(j >= 0 && strcmp(vetor[j], key) > 0){ 
            strcpy(vetor[j+1], vetor[j]); 
            j--; 
        } 
        strcpy(vetor[j+1], key); 
    } 
}
int main(void) {
  char vetor[5][50] = {};
  for(int i = 0; i < 5; i++){
    scanf("%s", vetor[i]);
  }
  int n = sizeof(vetor)/sizeof(vetor[0]);
  insertionSort(vetor, n);
  for(int i = 0; i < n; i++){
    printf("%s ", vetor[i]);
  }
  return 0;
}
