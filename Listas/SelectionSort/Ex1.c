#include <stdio.h>
#include <stdlib.h>

void selectionSort(int vetor[], int n){  
    
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++){
        min = i;
        for (j = i + 1; j < n; j++){
            if (vetor[j] < vetor[min]){
                min = j;
            }
        }
        temp = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = temp;
    }
}

int main(){
    int vetor[10];
    int i;
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    selectionSort(vetor, 10);
    printf("Vetor ordenado:\n");
    for (i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
