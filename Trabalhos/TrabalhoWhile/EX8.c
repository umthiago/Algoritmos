#include <stdio.h>

int main(){

    int anos = 0;
    int maior = 0;
    int aux = 1;

     printf("Digite a idade de 10 pessoas, para ver se elas são maiores de idade\n");

    while(aux <= 10){
        printf("Pessoa %d: ", aux);
        scanf("%d", &anos);

        if(anos > 18){
            maior++;
        }

        aux++;
    }


    if( maior == 1){
         printf("\n%d pessoa é maior que 18 anos\n", maior);
    } else {
        printf("\n%d pessoas são maiores que 18 anos\n", maior);
    }
    
   

    return 0;
}
