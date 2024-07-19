#include <stdio.h>
int main(){
    float peso;


    printf("informe o peso do competidor de boxe: ");
    scanf("%f", &peso);

    if(peso <= 50.80){
        printf("a categoria que o comepetidor se enquadra é a Peso Mosca");
    } else if(peso <= 57.15){
        printf("a categoria que o comepetidor se enquadra é a Peso Pena");
    } else if(peso <= 61.23){
        printf("a categoria que o comepetidor se enquadra é a Peso Leve");
    } else if(peso <= 72.58){
        printf("a categoria que o comepetidor se enquadra é a Peso Médio");
    } else{
        printf("a categoria que o comepetidor se enquadra é a Peso Pesado");
    }
return 0;
}
