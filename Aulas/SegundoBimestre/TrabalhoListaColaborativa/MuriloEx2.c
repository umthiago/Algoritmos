#include <stdio.h>

int main(){

    int a, b;
    printf("Insira dois inteiros: ");
    scanf("%d %d", &a, &b);

    if(a > b){
        int temp = b;
        b = a;
        a = temp;
    }

    printf("\nMultiplos de %d ate %d:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (i % a == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
