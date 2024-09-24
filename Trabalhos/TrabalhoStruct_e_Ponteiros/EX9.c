#include <stdio.h>

int main(){

    double matriz[3][3] = { 95.4, 43.8, 17.1, 11.4, 51.2, 22.7, 52.4, 77.6, 16.7};
    double *ponteiro;
    

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            ponteiro = &matriz[i][j];
            printf("Posicao [%d][%d]: endereco %p\n", i + 1, j + 1, (void*)(ponteiro));
        }
    }

    return 0;
}
