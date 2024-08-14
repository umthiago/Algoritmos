#include <stdio.h>

int main(){

    double saldo = 0;
    char codigo;
    double saque = 0;
    double deposito = 0;

    printf("   a   | consulta saldo\n");
    printf("   b   | saque\n");
    printf("   c   | depósito\n");
    printf("   d   | sair\n");
    
    
    while(codigo != 'd'){
        printf("\nDigite a opção que deseja realizar: ");
        scanf("%c", &codigo);

        if(codigo == 'a'){
            printf("O seu saldo é de: R$ %.2lf\n", saldo);
        }
        if(codigo == 'b'){
            printf("Digite o valor a ser sacado:\n");
            scanf("%lf", &saque);

            if(saque > saldo){
                printf("Não foi possivel sacar, saque maior que o saldo disponível\n");
            } else{
                saldo -= saque;
            }
        }
        if(codigo == 'c'){
            printf("Digite o valor a ser depositado: ");
            scanf("%lf", &deposito);

            saldo += deposito;
        }
        if(codigo == 'd'){
            break;
        }
        scanf("%c", &codigo);
    }

    return 0;
}
