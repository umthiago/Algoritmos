#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
  int id;
  char nome[50];
  float preco;
  struct Produto *next;
};

void InserirProduto(struct Produto **ponteiro, int id, char *nome,
                    float preco) {
  struct Produto *novoProduto =
      (struct Produto *)malloc(sizeof(struct Produto));
  novoProduto->id = id;
  strcpy(novoProduto->nome, nome); // copia nome para o novo produto
  novoProduto->preco = preco;
  novoProduto->next = *ponteiro;
  *ponteiro = novoProduto;
}

// Function to display the products in the linked list
void mostrarProdutos(struct Produto *ponteiro) {
  struct Produto *temp = ponteiro;
  while (temp != NULL) {
    printf("Id: %d\n", temp->id);
    printf("Nome: %s\n", temp->nome);
    printf("Preco: %.2f\n", temp->preco);
    temp = temp->next;
  }
}

int main() {
  struct Produto *lista_de_produtos = NULL;
  InserirProduto(&lista_de_produtos, 1, "Pepsi", 2.59);
  InserirProduto(&lista_de_produtos, 2, "Coca", 3.59);
  InserirProduto(&lista_de_produtos, 3, "Guarana", 3.33);

  mostrarProdutos(lista_de_produtos);

  return 0;
}
