#include <stdio.h>

void shakersort(float lista[], int tam){
    for(int i = 0; i < tam / 2; i++){
        for(int j = i; j < tam - i - 1; j++){
            if(lista[j] > lista[j+1]){
                float temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
            
        for(int j = tam - i - 2; j > i; j--){
            if(lista[j] < lista[j-1]){
                float temp = lista[j];
                lista[j] = lista[j-1];
                lista[j-1] = temp;
            }
        }
    }
}

int main(){
    float vetor[] = {3.2, 1.4, 5.6, 0.9};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    shakersort(vetor, tamanho);

    printf("Vetor ordenado:\n");
    for (int i = 0 ; i < tamanho; i++){
        printf("%.1f\t", vetor[i]);
    }
    printf("\n");

    return 0;
}