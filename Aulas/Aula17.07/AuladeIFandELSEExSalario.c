#include <stdio.h>
int main(){
    double salario;
    printf("informe seu salario");
    scanf("%lf", &salario);
    if (salario <= 2112){
        printf("isento de impostode renda");
        
    } else if( salario > 2112 && salario <= 2826.65){
        printf("Você PAGA 7,5%% DE IMPOSTO DE RENDA\n");

    } else if(salario > 2826.65 && salario <= 3751.05){
        printf("Você paga 15%% de imposto de renda\n");

    } else if(salario > 3751.05 && salario <= 4664.68){
        printf("Você paga 22,5%% de imposto de renda\n");

    } else {
        printf("Você paga 27,5%% de imposto de renda");
    }

    return 0;
    

    
}
