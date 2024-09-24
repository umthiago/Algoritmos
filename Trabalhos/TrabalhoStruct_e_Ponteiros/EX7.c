#include <stdio.h>

struct dados{
    char endereco[40];
    int idade;
    char nome[40];
};

int main(){
    struct dados alunos[3];

    for(int i = 0; i < 3; i++){
        printf("\nNome: ");
        scanf("%[^\n]", alunos[i].nome);
        getchar();
        
        printf("\nIdade: ");
        scanf("%d", &alunos[i].idade);
        getchar();
        
        printf("\nEndereco: ");
        scanf("%[^\n]", alunos[i].endereco);
        getchar();
    }
    
    printf("\n- Os dados armazenados -\n");
   
    for(int i = 0; i < 3; i++){
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Endereco: %s\n", alunos[i].endereco);
    }

    return 0;
}
