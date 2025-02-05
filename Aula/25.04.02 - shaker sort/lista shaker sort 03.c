#include <stdio.h>

void shakersort(char lista[], int tam){
    for(int i = 0; i < tam / 2; i++){
        for(int j = i; j < tam - i - 1; j++){
            if(lista[j] > lista[j+1]){
                char temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
            
        for(int j = tam - i - 2; j > i; j--){
            if(lista[j] < lista[j-1]){
                char temp = lista[j];
                lista[j] = lista[j-1];
                lista[j-1] = temp;
            }
        }
    }
}

int main(){
    char vetor[] = {'z', 'a', 'd', 'b'};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    shakersort(vetor, tamanho);

    printf("Vetor ordenado:\n");
    for (int i = 0 ; i < tamanho; i++){
        printf("%c\t", vetor[i]);
    }
    printf("\n");

    return 0;
}