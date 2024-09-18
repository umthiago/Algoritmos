#include <stdio.h>
#include <string.h>

struct Aluno {
  char nome[20]; 
  int idade;
  char endereco[30];
};

int main() { 
    struct Aluno alunos [5];
    for (int i = 0; i < 5; i++){
      printf("\nAluno %d: \n", i + 1);

      printf("Digite o nome do aluno: ");
      fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
      alunos[i].nome [strcspn(alunos[i].nome, "\n")] = 0; // Remove o '\n' do final

      printf("Digite a idade do aluno: ");
      scanf("%d",&alunos[i].idade);

      printf("Digite o endereco: ");
      fgets(alunos[i].endereco, sizeof(alunos[i].endereco), stdin);
      alunos[i].endereco [strcspn (alunos[i].endereco, "\n")] = 0; // Remove o '\n' 
    }

  printf("\nAlunos salvos na Agenda:\n");
  for (int i = 0; i < 5; i++){
    printf("Aluno: %s\n", alunos[i].nome);
    printf("Idade: %d\n", alunos[i].idade);
    printf("Endereço: %s\n", alunos[i].endereco);
  }
}
