#include <stdio.h>

int main(){
    int idade, tempocont;
    char sexo;

    printf("Digite sua idade: "); 
    scanf("%d", &idade);
    printf("Digite seu tempo de contribuição: ");
    scanf("%d", &tempocont);
    printf("Digite seu sexo (F/M): ");
    scanf(" %c", &sexo);
    

    

    if(sexo == 'M'){
        int soma = idade + tempocont;
        if(soma >= 101){
            printf("Parabéns! Você possui %d pontos e pode se aposentar!", soma);
        } else{
            printf("Não possui pontos suficientes para se aposentar!");
        }
    } else {
        int soma = idade + tempocont;
        if(soma >= 91){
            printf("Parabéns! Você possui %d pontos e pode se aposentar!", soma);
        } else{
            printf("Não possui pontos suficientes para se aposentar!");
        }
    }
    



    return 0;
}
