#include <stdio.h>
#include <string.h>

struct Cliente {
  int id;
  char nome[50]; 
  char email[50];
  int idade;
};

int main() {
    // Declaração de um array de 2 clientes    
    struct Cliente clientes [2];
    for (int i = 0; i < 2; i++){
      printf("Digite o ID do cliente %d: ", i + 1);
      scanf("%d", &clientes[i].id);
      getchar(); // Limpa o buffer do teclado

      printf("Digite o nome do cliente %d: ", i + 1);
      fgets(clientes[i].nome, sizeof(clientes[i].nome), stdin);
      clientes[i].nome [strcspn (clientes[i].nome, "\n")] = 0; // Remove o '\n' do final

      printf("Digite o email do cliente %d: ", i + 1);
      fgets(clientes[i].email, sizeof(clientes[i].email), stdin);
      clientes[i].email[strcspn(clientes[i].email, "\n")] = 0; // Remove o '\n' do final

      printf("Digite a idade do cliente %d: ", i + 1);
      scanf("%d", &clientes[i].idade);
    }
  printf("\nInformações dos clientes:\n");
  for (int i = 0; i < 2; i++){
    printf("Cliente %d:\n", i + 1);
    printf("ID: %d\n", clientes[i].id);
    printf("Nome: %s\n", clientes[i].nome);
    printf("Email: %s\n", clientes[i].email);
    printf("Idade: %d\n", clientes[i].idade);
  }
}
