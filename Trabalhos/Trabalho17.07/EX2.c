#include <stdio.h>
int main(){

    char nome[25];
    double salario;
    int qntdvendas;

    printf("informe o seu nome: ");
    scanf("%24s", nome);

    printf("informe seu salario: ");
    scanf("%lf", &salario);

    printf("informe a quantidade de vendas: ");
    scanf("%d", &qntdvendas);

    double resultado = 0.3 *qntdvendas;

    if(resultado >= salario){
        printf("Recebeu um dia bonus de folga");
    } else{
        printf(" Nao recebera um dia bonus de folga");
    }


   

return 0;
    
}
