#include <stdio.h>

int main(){
    
    int lista[5] = {2, 6, 2, 4, 2};
    int numero, contagem = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    for(int i = 0; i < 5; i++){
        if(lista[i] == numero){
            contagem++;
        }
    }
    
    printf("Seu numero aparece %d vezes na lista\n", contagem);
    
    return 0;
}
