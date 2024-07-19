#include <stdio.h>
int main(){
    int nota1;
    int nota2;
    int nota3;

    printf("informe a primeira nota ");
    scanf("%d", &nota1);

    printf("informe a segunda nota ");
    scanf("%d", &nota2);

    printf("informe a terceira nota ");
    scanf("%d", &nota3);

    int media = (nota1+ nota2 + nota3)/3;

    printf("Sua media aritmetica foi: %d\n", media);

    if(media >= 7){
        printf("ALUNO APROVADO");
    } else if(media >= 5 && media < 7){
        printf("ALUNO EM RECUPERÇÃO");
    } else {
        printf("ALUNO REPROVADO");
    }
return 0;
}
