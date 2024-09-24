#include <stdio.h>

int main(){

    double vetor[10] = { 95.4, 43.8, 17.1, 11.4, 51.2, 22.7, 52.4, 77.6, 16.7, 33.8};
    double *ponteiro;
    
    for(int i = 0; i < 10; i++){
        ponteiro = &vetor[i];
        printf("Posicao %d: endereco %p\n", i , (ponteiro ));
        

    }

    return 0;
}
