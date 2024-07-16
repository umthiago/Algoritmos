#include <stdio.h>

int main(){

   int senha;

   printf("insira a senha: ");
   scanf("%d", &senha);


   if (senha == 1234){
    printf("acesso permitido");

   } else{
    printf("acesso negado");
   }
   
   


    return 0;
}
