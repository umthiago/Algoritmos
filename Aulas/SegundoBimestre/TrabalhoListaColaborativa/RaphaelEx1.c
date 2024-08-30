#include <stdio.h>

int main(){
    int num;
    int fatorial = 1;

    printf("Insira o número, para calcular a fatorial: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        fatorial = fatorial * i;
        
        
    }
    printf("Fatorial: %d", fatorial);

    
    



    return 0;
}
