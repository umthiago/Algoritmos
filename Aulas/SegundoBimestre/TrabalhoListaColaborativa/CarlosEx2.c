#include <stdio.h>

int main(){

    int tamanho;
    printf("Insira o tamanho do triangulo: ");
    scanf("%d", &tamanho);

    for(int i = 1; i <= tamanho; i++){
        for(int i2 = 1; i2 <= i; i2++){
            printf("%d ",i2);
        }
        printf("\n");
    }

    return 0;
}
