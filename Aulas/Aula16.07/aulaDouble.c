#include <stdio.h>
#include <stdbool.h>//importar biblioteca completa
int main(){

    float pi = 3.1415926535; //4 bytes
    double pidouble = 3.1415926535;  //8 bytes
    printf("Valor de pi %.f\n",pi);
    printf("Valor mais preciso de pi %lf\n", pidouble);    
    return 0;
}
