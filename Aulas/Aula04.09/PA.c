#include <stdio.h>


int main() {
    int numinicial = 0;
    int razao = 2;
    int termos[10];

    printf("Digite um número inicial: ");
    scanf("%d", &numinicial);

    for (int i = 0; i < 10 ; i++){
        if(i == 0){
            termos[0] = numinicial;
        } else{
            termos[i] = termos[i-1] + razao;
        }
        
        printf("%d\t", termos[i]);
        
    }

    return 0;
}
