#include <stdio.h>

int main() {
    double velocidade = 0;
    
    

    printf("Insira a velocidade de um carro em km/h: ");
    scanf("%lf", &velocidade);

    if (velocidade > 200) {
        printf("Multa Gravíssima\n");
    }
    else if(velocidade > 150){
        printf("Multa Grave\n");
    }
    else if(velocidade > 120){
        printf("Multa Média\n");
    }
    else if(velocidade > 100){
        printf("Multa Leve\n");
    } else{
        printf("Nenhuma multa aplicada\n");
    }
        return 0;
}
