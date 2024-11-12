#include <stdio.h>
#include <stdlib.h>

// Criando uma struct, um nó Lista
struct Lista {
    int valor;
    struct Lista *proximo; //ponteiro para o próximo
    struct Lista *anterior; //ponteiro para o anterior
};

void inserir_no_final(struct Lista **Ponteiro, int valor) {
    // Espaço para alocar o nó
    struct Lista *newLista = (struct Lista*)malloc(sizeof(struct Lista));
    newLista->valor = valor; //Define valor do nó
    newLista->proximo = NULL; // o próximo é null

    if (*Ponteiro == NULL) { 
        newLista->anterior = NULL; // o nó anteriro é null
        *Ponteiro = newLista; // define como primeiro nó
        return;
    }

    struct Lista *temp = *Ponteiro; //ponteiro temporario para percorrer o nó
    while (temp->proximo != NULL) {
        temp = temp->proximo; //percorre até o ultimo nó
    }
    temp->proximo = newLista; //o ultimo nó aponta para um novo nó
    newLista->anterior = temp; // o novo nó aponta para o anterior
}

void remover_do_final(struct Lista **Ponteiro) {
    if (*Ponteiro == NULL) {
        printf("A lista está vazia.\n");
        return;
    }

    struct Lista *temp = *Ponteiro;
    if (temp->proximo == NULL) {
        *Ponteiro = NULL;
        free(temp);
        return;
    }

    while (temp->proximo != NULL) {
        temp = temp->proximo;
    }
    temp->anterior->proximo = NULL;
    free(temp);
}

void inserir_no_comeco(struct Lista **Ponteiro, int valor) {
    struct Lista *newLista = (struct Lista*)malloc(sizeof(struct Lista));
    newLista->valor = valor;
    newLista->anterior = NULL;
    newLista->proximo = *Ponteiro;

    if (*Ponteiro != NULL) {
        (*Ponteiro)->anterior = newLista;
    }

    *Ponteiro = newLista;
}

void remover_do_comeco(struct Lista **Ponteiro) {
    if (*Ponteiro == NULL) {
        printf("A lista está vazia.\n");
        return;
    }

    struct Lista *temp = *Ponteiro;
    *Ponteiro = (*Ponteiro)->proximo;

    if (*Ponteiro != NULL) {
        (*Ponteiro)->anterior = NULL;
    }

    free(temp);
}

void imprimeLista(struct Lista *Ponteiro) {
    struct Lista *temp = Ponteiro;
    while (temp != NULL) {
        printf("%d <-> ", temp->valor);
        temp = temp->proximo;
    }
    printf("NULL(a lista esta vazia): \n");
}

int main() {
    struct Lista *Ponteiro = NULL;

    printf("Lista original: \n");
    imprimeLista(Ponteiro);

    inserir_no_final(&Ponteiro, 10);
    inserir_no_final(&Ponteiro, 20);
    inserir_no_final(&Ponteiro, 30);

    printf("Lista apos inserir no final: \n");
    imprimeLista(Ponteiro);

    inserir_no_comeco(&Ponteiro, 5);
    inserir_no_comeco(&Ponteiro, 1);

    printf("Lista apos inserir no inicio: \n");
    imprimeLista(Ponteiro);

    remover_do_final(&Ponteiro);
    printf("Apos remover o ultimo elemento: \n");
    imprimeLista(Ponteiro);

    remover_do_comeco(&Ponteiro);
    printf("Apos remover o primeiro elemento: \n");
    imprimeLista(Ponteiro);

    return 0;
}
