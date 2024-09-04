#include <stdio.h>
#include <string.h>


int main() {
    char palavra[20];
    char letrasub, letranova;



    printf("Digite uma palavra: ");
    scanf(" %s", palavra);

    printf("Digite uma letra para ser substituida da palavra: ");
    scanf(" %c", &letrasub);

    printf("Digite a nova letra: ");
    scanf(" %c", &letranova);

    for(int i = 0; i < strlen(palavra); i++){
        if(letrasub == palavra[i]){
            palavra[i] = letranova;
        }
        printf("%c", palavra[i]);
    }




    return 0;
}
