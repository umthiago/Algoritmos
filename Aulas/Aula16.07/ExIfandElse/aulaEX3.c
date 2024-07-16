#include <stdio.h>

int main(){

   int anonasc;

   printf("insira o ano de nascimento: ");
   scanf("%d", &anonasc);


   if (anonasc < 2006){
    printf("Você é maior de idade");

   } else{
    printf("Você é menor de idade");
   }
   
   


    return 0;
}
