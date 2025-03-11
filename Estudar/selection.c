#include <stdio.h>
#include <stdlib.h>

void selectionSort(){
    int menor, temp;
    for (int i = 0; i < n - 1; i++){
        menor = i;
        for (int j = i + 1; j < n; j++){
            if (vetor[j] < vetor[menor]){
            menor = j;
            }
        }
        if (menor != i){
            temp = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = temp;
        }
    } 
}

void printVetor(int vetor[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(){
    int vetor[] = {7, 4, 1, 2, 3, 5, 6};
    int tam = sizeof(vetor)/sizeof(vetor[0]);
    return 0;
}
