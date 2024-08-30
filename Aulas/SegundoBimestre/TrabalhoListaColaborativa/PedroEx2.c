#include <stdio.h>
#include <string.h>

int main() {
    double valor = 0;
    char nacionalidade[20];

    printf("Insira o valor da sua compra: ");
    scanf("%lf", &valor);
    printf("Insira se a compra é Internacional ou Nacional: ");
    scanf("%s", nacionalidade);

    if (strcmp(nacionalidade, "Internacional") == 0){
        double valor_final = valor + (valor * 0.30);
        printf("O valor da sua compra é: %.2lf", valor_final);
    } else{
        double valor_final = valor + (valor * 0.15);
        printf("O valor da sua compra é: %.2lf", valor_final);
    }




    return 0;
}
