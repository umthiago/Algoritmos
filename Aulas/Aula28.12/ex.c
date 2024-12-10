#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um nó da árvore binária
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Estrutura para representar uma pilha
struct Stack {
    int data;
    struct Stack *next;
};

// Função para criar um novo nó da árvore
struct Node *newNode(int data) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Função para inserir um novo nó na árvore binária de busca
struct Node *insert(struct Node *root, int data) {
    if (root == NULL) {
        return newNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Função para imprimir a árvore em ordem crescente
void inorderTraversal(struct Node *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Função para criar uma nova pilha
struct Stack *createStack() {
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->next = NULL;
    return stack;
}

// Função para empilhar um elemento na pilha
void push(struct Stack **stack, int data) {
    struct Stack *newNode = (struct Stack *)malloc(sizeof(struct Stack));
    newNode->data = data;
    newNode->next = *stack;
    *stack = newNode;
}

// Função para desempilhar um elemento da pilha
int pop(struct Stack **stack) {
    if (*stack == NULL) {
        return -1;
    }

    struct Stack *temp = *stack;
    int data = temp->data;
    *stack = temp->next;
    free(temp);
    return data;
}

// Função para empilhar os valores pares e ímpares em pilhas separadas
void stackEvenOdd(struct Node *root, struct Stack **evenStack, struct Stack **oddStack) {
    if (root == NULL) {
        return;
    }

    stackEvenOdd(root->left, evenStack, oddStack);
    if (root->data % 2 == 0) {
        push(evenStack, root->data);
    } else {
        push(oddStack, root->data);
    }
    stackEvenOdd(root->right, evenStack, oddStack);
}

int main() {
    struct Node *root = NULL;
    struct Stack *evenStack = createStack();
    struct Stack *oddStack = createStack();

    int choice, data;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir na Árvore\n");
        printf("2. Imprimir Árvore\n");
        printf("3. Empilhar Pares e Ímpares\n");
        printf("4. Imprimir Pilha de Pares\n");
        printf("5. Imprimir Pilha de Ímpares\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Digite o número a ser inserido: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("Árvore em ordem crescente: ");
                inorderTraversal(root);
                printf("\n");
                break;
            case 3:
                stackEvenOdd(root, &evenStack, &oddStack);
                printf("Pares e ímpares empilhados!\n");
                break;
            case 4:
                printf("Pilha de Pares: ");
                while ((data = pop(&evenStack)) != -1) {
                    printf("%d ", data);
                }
                printf("\n");
                break;
            case 5:
                printf("Pilha de Ímpares: ");
                while ((data = pop(&oddStack)) != -1) {
                    printf("%d ", data);
                }
                printf("\n");
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (choice != 6);

    return 0;
}
