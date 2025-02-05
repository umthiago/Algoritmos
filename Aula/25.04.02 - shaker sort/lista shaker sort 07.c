#include <stdio.h>

typedef struct{
    char nome[50];
    float nota;
} aluno;

void shakersort(aluno lista[], int tam){
    for(int i = 0; i < tam / 2; i++){
        for(int j = i; j < tam - i - 1; j++){
            if(lista[j].nota > lista[j+1].nota){
                aluno temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
            
        for(int j = tam - i - 2; j > i; j--){
            if(lista[j].nota < lista[j-1].nota){
                aluno temp = lista[j];
                lista[j] = lista[j-1];
                lista[j-1] = temp;
            }
        }
    }
}

int main(){
    aluno vetor[] = {
        {"Vinicius", 6.0},
        {"Miotto", 9.0},
        {"Thiago", 7.5},
        {"Samuel", 5.5}
    };
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    shakersort(vetor, tamanho);

    printf("Ordem crescente de notas:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%s - %.2f\n", vetor[i].nome, vetor[i].nota);
    }

    return 0;
}