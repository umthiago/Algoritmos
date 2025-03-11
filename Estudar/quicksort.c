#include <stdio.h>
#include <stdlib.h>

// Função para trocar dois valores
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Função para dividir o array e retornar o índice do pivo
int dividir(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim];  // Escolhe o último elemento como pivo
    int i = inicio - 1;  // Índice do menor elemento
    // Percorre os elementos do vetor
    for (int j = inicio; j < fim; j++) {
        if (vetor[j] < pivo) { // Se o elemento for menor que o pivo
            i++;
            trocar(&vetor[i], &vetor[j]); // Troca os elementos
        }
    }
    // Coloca o pivo na posição correta
    trocar(&vetor[i + 1], &vetor[fim]);
    return (i + 1); // Retorna o índice do pivo
}
// Função recursiva do Quick Sort
void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) { // Verifica se há mais de um elemento
        // Encontra a posição do pivo
        int indicePivo = dividir(vetor, inicio, fim); 
        // Chama recursivamente para as partes antes e depois do pivo
        quickSort(vetor, inicio, indicePivo - 1);
        quickSort(vetor, indicePivo + 1, fim);
    }
}

void imprimirVetor(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// Função principal
int main() {
    int vetor[] = {2, 7, 5, 3, 8, 4, 1, 6};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original: ");
    imprimirVetor(vetor, n);

    quickSort(vetor, 0, n - 1);

    printf("Vetor ordenado: ");
    imprimirVetor(vetor, n);

    return 0;
}
