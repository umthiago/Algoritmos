#include <stdio.h>
int main(){
    int nota1;
    int nota2;
    int nota3;
    int nota4;

    printf("informe a primeira nota ");
    scanf("%d", &nota1);

    printf("informe a segunda nota ");
    scanf("%d", &nota2);

    printf("informe a terceira nota ");
    scanf("%d", &nota3);

    printf("informe a quarta nota ");
    scanf("%d", &nota4);

    int media = (nota1+ nota2 + nota3 + nota4)/4;

    if(media >= 7){
        printf("ALUNO APROVADO");
    } else{
        printf("ALUNO REPROVADO");
    }
    
}
