#include <stdio.h>

int main(){
    int var1 = 1;
    int var2 = 2;
    int *endereco1, *endereco2;

    endereco1 = &var1;
    endereco2 = &var2;

    if((void*)endereco1 < (void*)endereco2){
        printf("O maior endereço dos dois é o: %p \n", (void*)endereco1);
    } else{
        printf("O maior endereço dos dois é o: %p \n", (void*)endereco2);
    }

    return 0;
}
