#include <stdio.h>

int main(){

   double x, y;

   printf("insira o valor de x:");
   scanf("%lf", &x);

   printf("insira o valor de y:");
   scanf("%lf", &y);

   if (x > y){
    printf("maior valor é:%lf\n", x );

   } else{
    printf("maior valor é:%lf\n", y );
   }
   
   


    return 0;
}
