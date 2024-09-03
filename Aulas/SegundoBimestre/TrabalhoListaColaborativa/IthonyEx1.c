#include <stdio.h>
#include <string.h>

int main() {
    char letraromana[100]; 
    int numromano[100]; 
    int soma = 0; 
   
    int anterior = 0; 

 
    int I = 1;
    int V = 5;
    int X = 10;
    int L = 50;
    int C = 100;
    int D = 500;
    int M = 1000;

    printf("Insira um número romano: ");
    scanf("%s", letraromana);


    for (int i = 0; i < strlen(letraromana); i++) {
        switch (letraromana[i]) {
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
    }

   
    for (int i = strlen(letraromana) - 1; i >= 0; i--) {
        int aux = numromano[i];

      
        if (aux < anterior) {
            soma -= aux;
        } else {
            soma += aux;
        }

       
        anterior = aux;
    }

    printf("O valor inteiro é: %d\n", soma);

    return 0;
}
