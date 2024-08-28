#include <stdio.h>

int main() {
    int vetorInteiros[10];

    for (int i = 0; i < 10; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetorInteiros[i]);
        
    }
    for (int i = 10-1; i >= 0; i--){
        printf("%d", vetorInteiros[i]);

    }
    return 0;
}
