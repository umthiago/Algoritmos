
#include <stdio.h>

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

//Exemplo de uso:
int main() {
    int numbers[] = {12, 11, 13, 5, 6};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    
    insertion_sort(numbers, n);
    
    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}





#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

// 1. Insertion Sort Crescente
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// 2. Insertion Sort Decrescente
void insertionSortDesc(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// 3. Insertion Sort para Strings
void insertionSortStrings(char arr[][100], int n) {
    for (int i = 1; i < n; i++) {
        char key[100];
        strcpy(key, arr[i]);
        int j = i - 1;
        while (j >= 0 && strcmp(arr[j], key) > 0) {
            strcpy(arr[j + 1], arr[j]);
            j--;
        }
        strcpy(arr[j + 1], key);
    }
}

// 4. Ordenação de Structs
typedef struct {
    char nome[100];
    int idade;
} Pessoa;

void insertionSortStruct(Pessoa arr[], int n) {
    for (int i = 1; i < n; i++) {
        Pessoa key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j].idade > key.idade) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// 5. Insertion Sort para Float
void insertionSortFloat(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// 6. Contagem de Trocas
int insertionSortCount(int arr[], int n) {
    int trocas = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            trocas++;
        }
        arr[j + 1] = key;
    }
    return trocas;
}

// 7. Verificação de Ordem
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

// 8. Ordenação de Intervalo
void insertionSortInterval(int arr[], int start, int end) {
    for (int i = start + 1; i <= end; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= start && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// 9. Comparação com Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 10. Inserção de Novo Elemento
void insertSorted(int arr[], int *n, int newElement) {
    int i = *n - 1;
    while (i >= 0 && arr[i] > newElement) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = newElement;
    (*n)++;
}

// Shell Sort
void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void shellSortDesc(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] < temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void shellSortStrings(char arr[][100], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            char temp[100];
            strcpy(temp, arr[i]);
            int j;
            for (j = i; j >= gap && strcmp(arr[j - gap], temp) > 0; j -= gap) {
                strcpy(arr[j], arr[j - gap]);
            }
            strcpy(arr[j], temp);
        }
    }
}

void shellSortFloat(float arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            float temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}



#include <stdio.h>
#include <stdlib.h>

// Função que intercala dois subvetores ordenados
void intercala(int inicio, int meio, int fim, int vetor[]){
    // Aloca um vetor temporário para armazenar os elementos ordenados
    int *ponteiro;
    ponteiro = malloc((fim - inicio) * sizeof(int));
    
    // Índices para percorrer os subvetores
    int indiceEsquerda = inicio, indiceDireita = meio;
    int indiceTemp = 0;
    
    // Compara elementos dos dois subvetores e insere no vetor temporário
    while(indiceEsquerda < meio && indiceDireita < fim){
        if(vetor[indiceEsquerda] <= vetor[indiceDireita]){
            ponteiro[indiceTemp++] = vetor[indiceEsquerda++];
        } else{
            ponteiro[indiceTemp++] = vetor[indiceDireita++];
        }
    }
    
    // Copia os elementos restantes do lado esquerdo, se houver
    while(indiceEsquerda < meio){
        ponteiro[indiceTemp++] = vetor[indiceEsquerda++];
    }
    
    // Copia os elementos restantes do lado direito, se houver
    while(indiceDireita < fim){
        ponteiro[indiceTemp++] =
