#include <stdio.h>

int main(){
    
    int lista[5] = {5, 2, 9, 1, 3};
    int menor = lista[0];
    
    for(int i = 0; i < 5; i++){
        if(lista[i] < menor){
            menor = lista[i];
        }
    }
    
    printf("O menor valor da lista e %d\n", menor);
    
    return 0;
}
