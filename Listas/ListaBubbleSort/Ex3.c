#include <stdio.h>
void bubbleSort(int vetor[], int n){
    int temp;
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if(vetor[j] > vetor[j+1]){
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}
int main() {
    int vetor[] = {10, 20, 5, 8, 15};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    bubbleSort(vetor, n);
    printf("O menor numero e: %d\n", vetor[0]);
    return 0;
}
