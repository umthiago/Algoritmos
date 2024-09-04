#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int contador = -1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; i < strlen(palavra); i++){
        contador++;
    }
    
    for(int i = contador; i < strlen(palavra); i--){
        printf("%c", palavra[i]);
    }
    return 0;
}
