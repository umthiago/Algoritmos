#include <stdio.h>
int main(){
    int idade;
   

    printf("informe a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("O nadador é classificado como Adulto");
    } else if(idade >= 14){
        printf("O nadador é classificado como Juvenil");
    } else if(idade >= 9){
        printf("O nadador é classificado como Infantil");
    } else{
        printf("O nadador é classificado como Mirim");
    }
return 0;
}
