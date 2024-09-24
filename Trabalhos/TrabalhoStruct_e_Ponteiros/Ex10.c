#include <stdio.h>

int main(){

    int vetor[5], *ponteiro;
   

    for(int i = 0; i < 5; i++){
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n");
    for(int i = 0; i < 5; i++){
        vetor[i] = vetor[i] *2;
        ponteiro = &vetor[i];
        printf("Endereco com o dobro do valor %p: \n", ponteiro );
    }

    return 0;
}
