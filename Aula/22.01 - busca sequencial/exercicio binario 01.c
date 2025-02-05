#include <stdio.h>
#define tam 4

int main(){

    int direita = tam - 1, esquerda = 0, meio;
    int encontrado = 0;

    int vetor[tam] = {1, 3, 5, 7};
    int valor;
    printf("Valor para pesquisar: ");
    scanf("%d", &valor);

    while(esquerda <= direita && !encontrado){
        meio = (esquerda + direita) / 2;

        if(vetor[meio] == valor){
            encontrado = 1;
        } else if(vetor[meio] > valor){
            direita = meio - 1;
        } else{
            esquerda = meio + 1;
        }
    }

    if(encontrado){
        printf("Valor encontrado na posicao %d\n", meio);
    } else{
        printf("Valor nao encontrado!\n");
    }

    return 0;
}
