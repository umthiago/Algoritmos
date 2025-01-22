#include <stdio.h>

int main() {
    int lista[] = {2, 4, 2, 6, 2};
    int numero = 2;
    int ocorrencias = 0;
    int i;

    for (i = 0; i < 5; i++) {
        if (lista[i] == numero) {
            ocorrencias++;
        }
    }

    printf("O número %d aparece %d vezes na lista.\n", numero, ocorrencias);

    return 0;
}
