//  Ordenação Decrescente: Modifique o Insertion Sort para ordenar um vetor em ordem decrescente.

#include "stdio.h"

void insertionSort(int vetor[], int n){ 
    int i, key, j; 
    for(i = 1; i < n; i++){ 
        key = vetor[i]; 
        j = i-1; 
        while(j >= 0 && vetor[j] < key){ 
            vetor[j+1] = vetor[j]; 
            j--; 
        } 
        vetor[j+1] = key; 
    } 
}
int main(void) {
  int vetor[5] = {};
  for(int i = 0; i < 5; i++){
    scanf("%d", &vetor[i]);
  }
  int n = sizeof(vetor)/sizeof(vetor[0]);
  insertionSort(vetor, n);
  for(int i = 0; i < n; i++){
    printf("%d ", vetor[i]);
  }
  return 0;
}
