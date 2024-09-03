#include <stdio.h>

int main() {
    int num = 10;
    int vetorInteiros[num];
    int aux = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetorInteiros[i]);
        
    }
    for (int i = 0; i < 10; i++){
        for (int i = 0; i < 10; i++){
            if (aux == vetorInteiros[i]){
                vetorInteiros[i] = 0;
                num--;
            }

        }
        printf("%d ", vetorInteiros[i]);
        aux = vetorInteiros[i];
        
        
        

    }
    printf("Vetor sem repetições: ");
    for (int i = 0; i < 10; i++){
        if (vetorInteiros[i] != 0){
            printf("%d ", vetorInteiros[i]);
        }
    }
    return 0;
}
