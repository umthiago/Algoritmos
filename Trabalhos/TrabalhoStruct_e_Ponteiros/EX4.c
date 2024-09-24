#include <stdio.h>

struct dados{
    char nome[40];
    int matricula;
    double nota1, nota2, nota3;
};

int main(){
    
    double maiornotaprova1 = 0;
    int aux, aux1, aux2;
    double media, maiormedia = 0, menormedia = 10;
    

    struct dados aluno[5];

    for(int i = 0; i < 2; i++){
        printf("\nNome: ");
        scanf("%[^\n]", aluno[i].nome);
        getchar();
        
        printf("Número de matrícula: ");
        scanf("%d", &aluno[i].matricula);
        getchar();
        
        printf("Nota da Primeira Prova: ");
        scanf("%lf", &aluno[i].nota1);
        getchar();
        
        printf("Nota da Segunda Prova: ");
        scanf("%lf", &aluno[i].nota2);
        getchar();
        
        printf("Nota da Terceira Prova: ");
        scanf("%lf", &aluno[i].nota3);
        getchar();
    }

    
    
    for(int i = 0; i < 5; i++){
        if(aluno[i].nota1 > maiornotaprova1){
            maiornotaprova1  = aluno[i].nota1;
            aux = i;
        }
    }
    printf("\n");

    
    for(int i = 0; i < 5; i++){
        media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
        if(media >= 6){
            printf("%s foi APROVADO com Média: %.1lf\n", aluno[i].nome, media);
        } else{
            printf("%s foi REPROVADO com Média: %.1lf\n", aluno[i].nome, media);
        }

        if(media > maiormedia){
            maiormedia = media;
            aux1 = i;
        }
        if(media < menormedia){
            menormedia = media;
            aux2 = i;
        }
    }

    printf("\nO aluno com maior nota da primeira prova foi: %s com a nota de: %.1lf\n", aluno[aux].nome, maiornotaprova1);
    printf("O aluno com maior média geral foi: %s com a média de: %.1lf\n", aluno[aux1].nome, maiormedia);
    printf("O aluno com menor média geral foi: %s com a média %.1lf\n", aluno[aux2].nome, menormedia);

    return 0;
}
