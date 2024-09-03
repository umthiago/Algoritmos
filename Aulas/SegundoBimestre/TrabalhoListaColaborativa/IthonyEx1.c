#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    char letraromana[5]; 
    int numromano[5];
    int I = 1;
    int V = 5;
    int X = 10;
    int L = 50;
    int C = 100;
    int D = 500;
    int M = 1000;

    printf("Insira um número romano: ");
    scanf("%s", letraromana);

    printf("%s\n", letraromana);
    

    
    

    for (int i = 0; i < strlen(letraromana); i++){
        printf("%c\n", letraromana[i]);
        switch (letraromana[i]){
            case 'I':
                numromano[i] = I;
                break;
            case 'V':
                numromano[i] = V;
                break;
            case 'X':
                numromano[i] = X;
                break;
            case 'L':
                numromano[i] = L;   
                break;
            case 'C':
                numromano[i] = C;
                break;
            case 'D':
                numromano[i] = D;
                break;
            case 'M':
                numromano[i] = M;
                break;
        }
        printf("%d\n", numromano[i]);
    }
    
    for (int i = 0; i < strlen(letraromana); i++){
        printf("%c\n", numromano[i]);
    }
   
    
}
