#include <stdio.h>
#include <math.h>



int main() {
    int valor;
    printf("Digite um valor maior que 3: ");
    scanf("%d", &valor);

    for (int i = 4; i <= valor; i++){
        int primo = 1;
        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                primo = 0;
                break;
            }
            
        }
        if(i == 4){
            printf("%d ", 2);
        }
        if (primo == 1){
            printf("%d ", i);
        }
        
        
    }

    return 0;


}
