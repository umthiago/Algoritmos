#include <stdio.h>

int main() {
    int var1 = 0, var2 = 0;

    printf("Digite o primeiro inteiro: ");
    scanf("%d", &var1);

    printf("Digite o segundo inteiro: ");
    scanf("%d", &var2);
    
    int *pont1 = &var1; 
    int *pont2 = &var2; 


    if (var1 > var2) {
        printf("Maior endereco: %p (ponteiro 1)\n", (void*)pont1);
    } else {
        printf("Maior endereco: %p (ponteiro 2)\n", (void*)pont2);
    }

    return 0;
}
