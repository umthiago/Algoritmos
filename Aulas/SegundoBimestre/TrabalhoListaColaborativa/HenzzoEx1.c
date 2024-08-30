#include <stdio.h>

int main(){
    int numsecreto = 93;
    int chute;

    printf("Tente adivinhar o número secreto de 1 a 100\n");

    for(int i = 1; i <= 5; i++){
        printf("Tentativa %d de 5\n", i);
        printf("Digite o número: ");
        scanf("%d", &chute);

        if(numsecreto < chute){
            printf("O número secreto é menor que o seu chute\n");
        } else if(numsecreto > chute){
            printf("O número secreto é maior que o seu chute\n");
        } else{
            printf("Parabéns! Você acertou o número secreto!\n");
            break;
        }
        
        if(i == 5){
            printf("Você perdeu! O número secreto era %d\n", numsecreto);
        }
    }
    

    
        
    return 0;
}
