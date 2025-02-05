#include <stdio.h>   
#include <stdlib.h>  

struct node { // Estrutura de um nó da árvore binária.
    int conteudo; 
    struct node *esquerda, *direita; 
};
struct pilha { //estrutura da pilha    //estrutura para representar uma pilha
    int items[10];
    int topo;
};
void iniciaPilha(struct pilha *ponteiro){
    ponteiro->topo = -1;

}
int estaCheia(struct pilha *ponteiro){
    return ponteiro->topo == 10 - 1;
}

int estaVazia(struct pilha *ponteiro){
    return ponteiro->topo == -1;
}

void push(struct pilha *ponteiro, int valor){
    if(estaCheia(ponteiro)){
        printf("Pilha cheia! Nao foi possivel inserir o valor %d\n", valor);
        return;
    }

    ponteiro->items[++ponteiro->topo] = valor;
    printf("Elemento %d inserido\n", valor);
}

int pop(struct pilha *ponteiro){
    if(estaVazia(ponteiro)){
        printf("Pilha vazia! Nao ha elementos para remover\n");
        return -1;
    }

    return ponteiro->items[ponteiro->topo--];
}

// Função para inserir um valor na árvore binária.
struct node* inserir(struct node *raiz, int valor) {
    if (raiz == NULL) { // Verifica se o nó atual (raiz) é NULL. Se for, cria um novo nó.
        // Aloca memória para um novo nó.
        struct node *novo = (struct node*)malloc(sizeof(struct node)); 
        novo->conteudo = valor;// Armazena o valor no novo nó.
        novo->esquerda = NULL; // Define o "filho" esquerdo como NULL.
        novo->direita = NULL;  // Define o "filho" direito como NULL.
        return novo; // Retorna o novo nó, que será a raiz ou um "filho".
    }
    // Se o valor a ser inserido é menor que o conteúdo do nó atual...
    if (valor < raiz->conteudo) {
        raiz->esquerda = inserir(raiz->esquerda, valor); 

    } else if (valor > raiz->conteudo) {
        raiz->direita = inserir(raiz->direita, valor);   
    }
    return raiz; // Retorna o nó atual (sem alterações se o valor já existir).
}

// Função para imprimir os valores da árvore em ordem crescente.
void imprimir(struct node *raiz) {
    if (raiz != NULL) { // Verifica se o nó atual não é NULL (caso base da recursão).
        imprimir(raiz->esquerda); // Chama recursivamente para o "filho" esquerdo.
        printf("%d ", raiz->conteudo); // Imprime o conteúdo do nó atual.
        imprimir(raiz->direita); // Chama recursivamente para o "filho" direito.
    }
}



void empilhar_pares_impares(struct node *raiz,struct pilha *pilhaPar, struct pilha *pilhaImpar){
    if (raiz == NULL){
        return;
    }
    empilhar_pares_impares(raiz->esquerda, pilhaPar,pilhaImpar);
    if (raiz->conteudo % 2 ==0){
        push(pilhaPar, raiz->conteudo);
    }
    else{
        push(pilhaImpar,raiz->conteudo);
    }
    empilhar_pares_impares(raiz->direita,pilhaPar,pilhaImpar);

};
void imprimir_pilha_par(struct pilha *pilhaPar){
    for (int i = pilhaPar->topo; i>=0; i++){
        printf("%d",pilhaPar->items[i]);
    }
    printf("\n");
    pop(pilhaPar);
    printf("PILHA IMPARES DESIMPILHADA! \n");


}
void imprimir_pilha_impares(struct pilha *pilhaImpar){
    for (int i = pilhaImpar->topo; i >=0; i++){
        printf("%d\n",pilhaImpar->items[i]);
    }
    printf("\n");
    pop(pilhaImpar);
    printf("PILHA PARES DESIMPILHADA! \n");

}


int main() {
    struct node *arvore = NULL; //arvore vazia
    int x, valor,valor_proc; //menu e valor a ser inserido
    struct pilha pilha_impares, pilha_pares;
    iniciaPilha(&pilha_impares);
    iniciaPilha(&pilha_pares);

    do {
        printf("\n1 - Inserir\n");
        printf("2 - Imprimir\n");
        printf("3 - Empilhar Pares e Ímpares\n");
        printf("4 - Imprimir Pilha de Pares (desimpilhar)\n");
        printf("5 - Imprimir Pilha de Ímpares (desimpilhar)\n");
        printf("6 - Sair do programa!\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &x);
        switch (x) {
            case 1: 
                printf("Digite um valor para ser inserido na árvore: ");
                scanf("%d", &valor);             
                arvore = inserir(arvore, valor);   
                break;
            case 2:
                printf("Imprimindo sua arvore: \n");
                 //imprime a árvore em ordem crescente.
                imprimir(arvore); 
                printf("\n");
                break;
            case 3:
                empilhar_pares_impares(arvore,&pilha_pares,&pilha_impares);
                break;
            case 4:
                imprimir_pilha_par(&pilha_pares);
                break;
            case 5:
                imprimir_pilha_impares(&pilha_impares);
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (x != 6);
    return 0;
}
