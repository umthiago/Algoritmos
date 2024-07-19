#include <stdio.h>
int main(){
    int numero1;
    int numero2;
    int numero3;
   

    printf("informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("informe o segundo numero: ");
    scanf("%d", &numero2);

    printf("informe o terceiro numero: ");
    scanf("%d", &numero3);

    if(numero1 > numero2){
        if(numero1 > numero3){
            printf("o maior numero e: %d", numero1);
        } else{
            printf("o maior numero e: %d", numero3);
        }
    } else if(numero2 > numero3){
        printf("o maior numero e: %d", numero2);
    } else{
        printf("o maior numero e: %d", numero3);
    }

    
return 0;
}
