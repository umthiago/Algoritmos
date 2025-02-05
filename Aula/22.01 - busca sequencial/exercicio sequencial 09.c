#include <stdio.h>

int main(){

    int lista[4] = {1, 2, 3, 4};
    int crescente = 1;

    for(int i = 1; i < 4; i++){
        if(lista[i] < lista[i - 1]){
            crescente = 0;
            break;
        }
    }

    crescente ? printf("A lista esta em ordem crescente\n") : printf("A lista nao esta em ordem crescente\n");

    return 0;
}
