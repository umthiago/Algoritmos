#include <stdio.h>
#include <stdlib.h>

int main() {
  int qntdalunos = 0;
  int aux = 1;
  double nota = 0;
  double notafinal = 0;
  
  printf("Digite a quantidade de alunos: ");
  scanf("%d", &qntdalunos);  

  while ( aux <= qntdalunos){
    printf("Digite a nota do aluno %d: ", aux);
    scanf("%lf", &nota); 

    notafinal = nota + notafinal;
    aux++;
  }
  notafinal = notafinal / qntdalunos;
  printf("A média aritmética da turma é: %.1lf", notafinal);
  return 0;
}
