#include <stdio.h>

int main(){
    
    int lista[5] = {7, 3, 5, 7, 9};
    int numero, encontrado = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    for(int i = 0; i < 5; i++){
        if(lista[i] == numero){
            encontrado = 1;
            printf("Valor encontrado na posicao %d\n", i);
            break;
        }
    }
    
    if(!encontrado){
        printf("Valor nao encontrado\n");
    }
    
    return 0;
}
