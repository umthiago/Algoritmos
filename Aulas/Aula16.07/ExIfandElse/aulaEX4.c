#include <stdio.h>

int main(){

   int qntdlaranja;
   float precolaranja = 0.25;

   printf("Quantidade de laranjas compradas: ");
   scanf("%d", &qntdlaranja);


   if (qntdlaranja < 12){
    float precolaranja = 0.30;
    float valortotal = precolaranja*qntdlaranja;

    printf("Valor total da compra: %.2f\n", valortotal);

   } else{
    float valortotal = precolaranja*qntdlaranja;
    printf("Valor total da compra: R$ %.2f\n", valortotal);
   }
   
   


    return 0;
}
