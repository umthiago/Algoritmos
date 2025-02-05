#include <stdio.h>
#include <stdlib.h>

struct node{
    int conteudo;
    struct node *esquerda, *direita;
};

struct node* inserir(struct node *raiz, int valor){
    if(raiz == NULL){
        struct node *novo = (struct node*)malloc(sizeof(struct node));

        novo -> conteudo = valor;
        novo -> esquerda = NULL;
        novo -> direita = NULL;

        return novo;
    }

    if(valor < raiz -> conteudo){
        raiz -> esquerda = inserir(raiz -> esquerda, valor);
    } else if(valor > raiz -> conteudo){
        raiz -> direita = inserir(raiz -> direita, valor);
    }
    return raiz;
}

void imprimirOrd(struct node *raiz){
    if(raiz != NULL){
        imprimirOrd(raiz -> esquerda);
        printf("%d\t", raiz -> conteudo);
        imprimirOrd(raiz -> direita);
    }
}

void imprimirPre(struct node *raiz){
    if(raiz != NULL){
        printf("%d\t", raiz -> conteudo);
        imprimirPre(raiz -> esquerda);
        imprimirPre(raiz -> direita);
    }
}

void imprimirPos(struct node *raiz){
    if(raiz != NULL){
        imprimirPos(raiz -> esquerda);
        imprimirPos(raiz -> direita);
        printf("%d\t", raiz -> conteudo);
    }
}

int main(){
    struct node *arvore = NULL;
    int x, valor;

    do{
        printf("\n1 - Inserir\n");
        printf("2 - Imprimir\n");
        printf("3 - Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &x);

        switch(x){
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                arvore = inserir(arvore, valor);
                system("CLS");
                break;
            case 2:
                system("CLS");
                printf("Imprimindo arvore:\n");
                printf("Ordem crescente: ");
                imprimirOrd(arvore);
                printf("\n");

                printf("Pre-ordem:       ");
                imprimirPre(arvore);
                printf("\n");

                printf("Pos-ordem:       ");
                imprimirPos(arvore);
                printf("\n");
                break;
            case 3:
                printf("\nSaindo...\n");
                break;
            default:
                system("CLS");
                printf("\nOpcao invalida!\n");
        }
    } while(x != 3);

    return 0;
}