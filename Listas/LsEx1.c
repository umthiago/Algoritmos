#include <stdio.h>

int main() {
    int numeros[5] = {1, 3, 5, 7, 9};
    int numespec;
    int i;

    printf("Digite o valor que quer verificar a posicao: ");
    scanf("%d", &numespec);

    for (i = 0; i < 5; i++) {
        if (numeros[i] == numespec) {
            printf("Número encontrado na posição %d\n", i);
            return 0;
        }
    }

    printf("Número não encontrado na lista.\n");
    return 0;
}
