#include <stdio.h>

int main(){

    int qntdnum = 0;
    int aux = 0;
    int sequencia = 0;
    int numant = 1;
    printf("Digite a quantidade de números para aparecer na sequência de Fibonacci:\n");
    scanf("%d", &qntdnum);
    
    while(aux < qntdnum){
        
        printf("%d\t", sequencia);
        sequencia = sequencia + numant;
        numant = sequencia - numant;
        
        if(aux == 0){
            numant = 0;
        }   
        aux++;
        
    }

    return 0;
}
