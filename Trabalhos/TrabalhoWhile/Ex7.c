#include <stdio.h>
#include <stdlib.h>

int main() {
    double jose = 1.1;
    double joao = 1.7;
    int aux = 0;

    while(jose <= joao){
        jose = jose + 0.03;
        joao = joao + 0.02;

        aux++;
    }

    printf("Será necessário %d anos, para que José seja maior que João\n", aux);

    return 0;
  return 0;
}
