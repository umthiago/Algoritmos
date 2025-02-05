#include <stdio.h>

int main(){
    
    int lista[5] = {1, 8, 3, 7, 2};
    int maior = lista[0];
    
    for(int i = 0; i < 5; i++){
        if(lista[i] > maior){
            maior = lista[i];
        }
    }
    
    printf("O maior valor da lista e %d\n", maior);
    
    return 0;
}
