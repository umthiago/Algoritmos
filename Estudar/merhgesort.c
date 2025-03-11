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
        ponteiro[indiceTemp++] = vetor[indiceDireita++];
    }
    
    // Copia os elementos ordenados do vetor temporário de volta ao vetor original
    for(indiceEsquerda = inicio; indiceEsquerda < fim; ++indiceEsquerda){
        vetor[indiceEsquerda] = ponteiro[indiceEsquerda - inicio];
    }
    
    // Libera a memória alocada para o vetor temporário
    free(ponteiro);
}

void mergeSort(int vetor[], int inicio, int fim){
    // Verifica se o intervalo contém mais de um elemento
    if(inicio < fim - 1){
        // Calcula o ponto médio do vetor
        int meio = (inicio + fim) / 2;

        // Chama recursivamente o Merge Sort para a primeira metade
        mergeSort(vetor, inicio, meio);
        
        // Chama recursivamente o Merge Sort para a segunda metade
        mergeSort(vetor, meio, fim);
    
        // Combina as duas metades ordenadas
        intercala(inicio, meio, fim, vetor);
    }
}

void printVetor(int vetor[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n");
}

int main(){
    int vetor[] = {2, 7, 5, 3, 8, 4, 1, 6};
    
    int n = sizeof(vetor)/sizeof(vetor[0]);

	printf("Vetor sem ordenacao: \n");
	printVetor(vetor, n);

	mergeSort(vetor, 0, n); //aqui eu coloquei n - 1 por isso só ordenava metade

	printf("Vetor ordenado: \n");
	printVetor(vetor, n);
	 
    return 0;
}
