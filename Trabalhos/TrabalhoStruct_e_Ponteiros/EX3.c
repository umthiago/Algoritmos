#include <stdio.h>

struct aluno{
    char nome[40];
    int matricula;
    char curso[40];
};

int main(){
    struct aluno alunos[5];

    for(int i = 0; i < 5; i++){
        printf("Nome: ");
        scanf("%[^\n]", alunos[i].nome);
        getchar();
        
        printf("Número de matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();
        
        printf("Curso: ");
        scanf("%[^\n]", alunos[i].curso);
        getchar();
    }
    printf("\nDados dos alunos:\n");
    for(int i = 0; i < 5; i++){
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].matricula);
        printf("Endereco: %s\n", alunos[i].curso);
    }

    return 0;
}
