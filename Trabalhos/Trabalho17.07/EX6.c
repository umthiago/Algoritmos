#include <stdio.h>
int main(){
    double valor1, valor2, valor3;
   

    printf("informe o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("informe o segundo valor: ");
    scanf("%lf", &valor2);

    printf("informe o terceiro valor: ");
    scanf("%lf", &valor3);

    double soma = valor1 + valor2 + valor3;

    if(soma >= 1000){
        printf("Foi concedido um desconto de 8%% sobre os R$%.2lf\n", soma);
        printf("a soma de tudo, com o desconto ficaria: R$%.2lf\n", soma - (soma * 0.08));
    } else{
        printf("Foi concedido um desconto de 5%% sobre os R$%.2lf\n", soma);
        printf("a soma de tudo com o desconto ficaria: R$%.2lf\n",soma - (soma * 0.05));
    }

    
return 0;
}
