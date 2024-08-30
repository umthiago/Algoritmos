#include <stdio.h>

int main() {
    int valor = 0;

    printf("Insira um valor para ser mostrar os quadrados perfeitos: ");
    scanf("%d", &valor);

    for (int i = 1; i <= valor; i++){
       int resultado = i * i;
        printf("%d * %d = %d, ", i, i, resultado);
        
    }

   
    return 0;
}
