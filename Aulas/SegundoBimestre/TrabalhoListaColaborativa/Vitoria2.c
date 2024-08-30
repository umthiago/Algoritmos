#include <stdio.h>

int main(){
    int cont_nums=0;
    int nums=0;
    int impares = 0;
    int pares = 0;
    int soma_pares= 0;
    int soma_impares=0;
    float media;
    while (1){
        int numero;
        
        scanf("%d" , &numero);
        cont_nums+=1;
        nums+=numero;
        if (numero%2 ==0){
            pares+=1;
            soma_pares+=numero;
        }
        else{
            impares+=1;
            soma_impares+=numero;    
        }
        if (numero == 0) break; 
    }
    printf("Quantidade de Números Impares: %d\n", impares);
    printf("Quantidade de Números pares: %d\n", pares);
    printf("Média números impares: %d\n", soma_impares/impares);
    printf("Média números pares: %d\n", soma_pares/pares);
    printf("Média geral: %d\n", nums/cont_nums);
    return 0;
}
