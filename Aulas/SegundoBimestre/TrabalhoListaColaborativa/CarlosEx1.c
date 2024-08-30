#include <stdio.h>

int main() {
    int n;
    
 
    printf("Digite o número de linhas do triângulo: ");
    scanf("%d", &n);
    

    for (int i = 1; i <= n; i++) {

        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
    
    return 0;
}
