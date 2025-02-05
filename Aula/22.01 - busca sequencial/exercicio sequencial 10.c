#include <stdio.h>

int main(){

    int vetor[6] = {1, 3, 3, 7, 7, 2};
    int naorep[6], repetido = 0, posicao = 0;

    for(int v = 0; v < 6; v++){
        repetido = 0;

        for (int i = 0; i < v; i++){
            if(vetor[v] == vetor[i]){
                repetido = 1;
            }
        }

        if(repetido == 0){
            naorep[posicao] = vetor[v];
            posicao++;
        }
    }

    printf("Vetor sem numeros repetidos:\n");
    for(int i = 0; i < posicao; i++){
        printf("%d\t", naorep[i]);
    }
    printf("\n");

    return 0;
}
