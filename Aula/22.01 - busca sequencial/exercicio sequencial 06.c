#include <stdio.h>

int main(){

    int lista[4] = {2, 4, 6, 8};
    int media = 0;

    for(int i = 0; i < 4; i++){
        media += lista[i];
    }

    printf("Media = %d\n", media / 4);

    return 0;
}
