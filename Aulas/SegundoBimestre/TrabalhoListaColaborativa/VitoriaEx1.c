#include <stdio.h>

int main(){
    int ano;

    printf("Insira o ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        printf("O ano %d é bissexto.\n", ano);
        printf("Teve Olimpiadas nesse ano");
        
        
    } else{
        printf("O ano %d não é bissexto.\n", ano);
        printf("Não teve Olimpiadas nesse ano");
    }
    



    return 0;
}
