#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cliente {
    int idCliente;
    char Nome[50];
    char Sobrenome[50];
    char dataNasc[11]; // Formato "dd/mm/yyyy" + '\0'
    char email[50];
    int telefone;
    struct Cliente *proximo;
    struct Cliente *anterior;
};

struct Cliente *inicio = NULL;
struct Cliente *fim = NULL;

void inserirInicio(int id, char nome[], char sobrenome[], char dataNasc[], char email[], int telefone);
void inserirFim(int id, char nome[], char sobrenome[], char dataNasc[], char email[], int telefone);
void removerInicio();
void removerFim();
struct Cliente* buscar(int id);
void editar(int id, char novoNome[], char novoSobrenome[], char novaDataNasc[], char novoEmail[], int novoTelefone);
void excluir(int id);
void imprimirLista();


int main() {
    int opcao, idCliente, telefone;
    char Nome[50], Sobrenome[50], dataNasc[11], email[50];
    char add;

    do {
        printf("\nEscolha uma operacao:\n");
        printf("1. Inserir Cliente no inicio\n");
        printf("2. Inserir Cliente no fim\n");
        printf("3. Imprimir Lista de Clientes\n");
        printf("4. Buscar Cliente\n");
        printf("5. Editar Cliente\n");
        printf("6. Excluir do Inicio\n");
        printf("7. Excluir do fim\n");
        printf("8. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                do {
                    printf("Insira o ID do cliente: ");
                    scanf("%d", &idCliente);
                    printf("Insira o nome do cliente: ");
                    scanf(" %[^\n]", Nome);
                    printf("Insira o sobrenome do cliente: ");
                    scanf(" %[^\n]", Sobrenome);
                    printf("Insira a data de nascimento (dd/mm/yyyy): ");
                    scanf(" %[^\n]", dataNasc);
                    printf("Insira o email do cliente: ");
                    scanf(" %[^\n]", email);
                    printf("Insira o telefone do cliente: ");
                    scanf("%d", &telefone);
                    inserirInicio(idCliente, Nome, Sobrenome, dataNasc, email, telefone);
                    printf("Deseja inserir outro cliente no inicio? (s/n): ");
                    scanf(" %c", &add);
                } while (add == 's');
                break;

            case 2:
                do {
                    printf("Insira o ID do cliente: ");
                    scanf("%d", &idCliente);
                    printf("Insira o nome do cliente: ");
                    scanf(" %[^\n]", Nome);
                    printf("Insira o sobrenome do cliente: ");
                    scanf(" %[^\n]", Sobrenome);
                    printf("Insira a data de nascimento (dd/mm/yyyy): ");
                    scanf(" %[^\n]", dataNasc);
                    printf("Insira o email do cliente: ");
                    scanf(" %[^\n]", email);
                    printf("Insira o telefone do cliente: ");
                    scanf("%d", &telefone);
                    inserirFim(idCliente, Nome, Sobrenome, dataNasc, email, telefone);
                    printf("Deseja inserir outro cliente no fim? (s/n): ");
                    scanf(" %c", &add);
                } while (add == 's');
                break;

            case 3:
                printf("\nLista de Clientes:\n");
                imprimirLista();
                break;

            case 4:
                printf("Insira o ID do cliente que deseja buscar: ");
                scanf("%d", &idCliente);
                struct Cliente *cliente = buscar(idCliente);
                if (cliente != NULL) {
                    printf("Cliente encontrado - ID: %d, Nome: %s %s, Nascimento: %s, Email: %s, Telefone: %d\n",
                           cliente->idCliente, cliente->Nome, cliente->Sobrenome, cliente->dataNasc, cliente->email, cliente->telefone);
                } else {
                    printf("Cliente com ID %d não encontrado.\n", idCliente);
                }
                break;

            case 5:
                printf("Insira o ID do cliente que deseja editar: ");
                scanf("%d", &idCliente);
                printf("Insira o novo nome do cliente: ");
                scanf(" %[^\n]", Nome);
                printf("Insira o novo sobrenome do cliente: ");
                scanf(" %[^\n]", Sobrenome);
                printf("Insira a nova data de nascimento (dd/mm/yyyy): ");
                scanf(" %[^\n]", dataNasc);
                printf("Insira o novo email do cliente: ");
                scanf(" %[^\n]", email);
                printf("Insira o novo telefone do cliente: ");
                scanf("%d", &telefone);
                editar(idCliente, Nome, Sobrenome, dataNasc, email, telefone);
                break;

            case 6:
                removerInicio();
                break;

            case 7:
                removerFim();
                break;

            case 8:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 8);

    return 0;
}


void inserirInicio(int id, char nome[], char sobrenome[], char dataNasc[], char email[], int telefone) {
    struct Cliente *novo = (struct Cliente*) malloc(sizeof(struct Cliente));
    novo->idCliente = id;
    strcpy(novo->Nome, nome);
    strcpy(novo->Sobrenome, sobrenome);
    strcpy(novo->dataNasc, dataNasc); 
    strcpy(novo->email, email);
    novo->telefone = telefone;
    novo->proximo = inicio;
    novo->anterior = NULL;
    if (inicio != NULL)
        inicio->anterior = novo;
    inicio = novo;
    if (fim == NULL)
        fim = novo;
}

void inserirFim(int id, char nome[], char sobrenome[], char dataNasc[], char email[], int telefone) {
    struct Cliente *novo = (struct Cliente*) malloc(sizeof(struct Cliente));
    novo->idCliente = id;
    strcpy(novo->Nome, nome);
    strcpy(novo->Sobrenome, sobrenome);
    strcpy(novo->dataNasc, dataNasc);
    strcpy(novo->email, email);
    novo->telefone = telefone;
    novo->proximo = NULL;
    novo->anterior = fim;
    if (fim != NULL)
        fim->proximo = novo;
    fim = novo;
    if (inicio == NULL)
        inicio = novo;
}

void removerInicio() {
    if (inicio == NULL) {
        printf("A lista esta vazia!\n");
        return;
    }
    struct Cliente *temp = inicio;
    inicio = inicio->proximo;
    if (inicio != NULL)
        inicio->anterior = NULL;
    else
        fim = NULL;
    free(temp);
    printf("Cliente removido do inacio.\n");
}

void removerFim() {
    if (fim == NULL) {
        printf("A lista esta vazia!\n");
        return;
    }
    struct Cliente *temp = fim;
    fim = fim->anterior;
    if (fim != NULL)
        fim->proximo = NULL;
    else
        inicio = NULL;
    free(temp);
    printf("Cliente removido do fim.\n");
}

struct Cliente* buscar(int id) {
    struct Cliente *atual = inicio;
    while (atual != NULL) {
        if (atual->idCliente == id)
            return atual;
        atual = atual->proximo;
    }
    return NULL;
}

void editar(int id, char novoNome[], char novoSobrenome[], char novaDataNasc[], char novoEmail[], int novoTelefone) {
    struct Cliente *cliente = buscar(id);
    if (cliente != NULL) {
        strcpy(cliente->Nome, novoNome);
        strcpy(cliente->Sobrenome, novoSobrenome);
        strcpy(cliente->dataNasc, novaDataNasc);
        strcpy(cliente->email, novoEmail);
        cliente->telefone = novoTelefone;
        printf("Cliente editado com sucesso.\n");
    } else {
        printf("Cliente com ID %d nao encontrado.\n", id);
    }
}

void excluir(int id) {
    struct Cliente *cliente = buscar(id);
    if (cliente == NULL) {
        printf("Cliente com ID %d nao encontrado.\n", id);
        return;
    }
    if (cliente->anterior != NULL)
        cliente->anterior->proximo = cliente->proximo;
    else
        inicio = cliente->proximo;
    if (cliente->proximo != NULL)
        cliente->proximo->anterior = cliente->anterior;
    else
        fim = cliente->anterior;
    free(cliente);
    printf("Cliente com ID %d excluido.\n", id);
}

void imprimirLista() {
    struct Cliente *atual = inicio;
    while (atual != NULL) {
        printf("ID: %d, Nome: %s %s, Nascimento: %s, Email: %s, Telefone: %d\n",
               atual->idCliente, atual->Nome, atual->Sobrenome, atual->dataNasc,
               atual->email, atual->telefone);
        atual = atual->proximo;
    }
}
