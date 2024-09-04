#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int contador = -1;

    printf("Digite uma palavra: \n");
    scanf("%s", palavra);

    for (int i = 0; i < strlen(palavra); i++){
        contador++;
    }
    printf("A palavra ao contrario fica: ");
    for(int i = contador; i < strlen(palavra); i--){
        printf("%c", palavra[i]);
    }
    return 0;
}
