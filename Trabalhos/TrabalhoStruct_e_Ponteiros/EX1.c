#include <stdio.h>
#include <string.h>

struct Evento {
  char horario[20]; 
  char data[20];
  char compromisso[100];
};

int main() { 
    struct Evento eventos [5];
    for (int i = 0; i < 5; i++){
      printf("\nEvento %d: \n", i + 1);

      printf("Digite o Horário do compromisso %d: ", i + 1);
      fgets(eventos[i].horario, sizeof(eventos[i].horario), stdin);
      eventos[i].horario [strcspn (eventos[i].horario, "\n")] = 0; // Remove o '\n' do final

      printf("Digite a Data %d: ", i + 1);
      fgets(eventos[i].data, sizeof(eventos[i].data), stdin);
      eventos[i].data[strcspn(eventos[i].data, "\n")] = 0; // Remove o '\n' do final

      printf("Descreva o compromisso %d: ", i + 1);
      fgets(eventos[i].compromisso, sizeof(eventos[i].compromisso), stdin);
      eventos[i].compromisso [strcspn (eventos[i].compromisso, "\n")] = 0; // Remove o '\n' 
    }

  printf("\nEventos salvos na Agenda:\n");
  for (int i = 0; i < 5; i++){
    printf("\nEvento %d:\n", i + 1);
    printf("Horário: %s\n", eventos[i].horario);
    printf("Data: %s\n", eventos[i].data);
    printf("Compromisso: %s\n", eventos[i].compromisso);
  }
}
