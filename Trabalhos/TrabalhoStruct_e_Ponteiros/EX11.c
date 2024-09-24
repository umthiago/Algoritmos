#include <stdio.h>

int main(){

    int vetor[5], *ponteiro;

    for(int i = 0; i < 5; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 5; i++){
        if(vetor[i] % 2 == 0){
            ponteiro = &vetor[i];
            printf("Os Enderecos dos valores pares sao: %p\n", (ponteiro));
        }
    }

    return 0;
}#include <stdio.h>

int main(){

    int vetor[5], *ponteiro;

    for(int i = 0; i < 5; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 5; i++){
        if(vetor[i] % 2 == 0){
            ponteiro = &vetor[i];
            printf("Os Enderecos dos valores pares sao: %p\n", (ponteiro));
        }
    }

    return 0;
}
