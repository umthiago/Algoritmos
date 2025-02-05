#include <stdio.h>

///////////////////////////////////////////////////////////////////////
/////////////////////// BUSCA SEQUENCIAL //////////////////////////////
///////////////////////////////////////////////////////////////////////

int buscasequencial(int lista[], int tam, int valor){
    int encontrado = 0;
    for(int i = 0; i < tam; i++){
        if(lista[i] == valor){
            encontrado = 1;
            break;
        }
    }
    
    return encontrado;
}

//pra mostrar a posição q foi encontrado: return i;

///////////////////////////////////////////////////////////////////////
/////////////////////// BUSCA BINÁRIA /////////////////////////////////
///////////////////////////////////////////////////////////////////////


int buscabinaria(int lista[], int tam, int valor){
    int direita = tam - 1, esquerda = 0, meio;
    int encontrado = 0;

    while(esquerda <= direita && !encontrado){
        meio = (esquerda + direita) / 2;

        if(lista[meio] == valor){
            encontrado = 1;
        } else if(lista[meio] > valor){
            direita = meio - 1;
        } else{
            esquerda = meio + 1;
        }
    }

    return encontrado;
}

// OBS: Para mostrar a posição q foi encontrado: return meio;

///////////////////////////////////////////////////////////////////////
///////////////////// EXEMPLO DE STRUCT ///////////////////////////////
///////////////////////////////////////////////////////////////////////

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

/*

Declarando uma variável do tipo 'Pessoa'

-->   Pessoa pessoa1;

Atribuindo valores aos campos da struct

-->   snprintf(pessoa1.nome, sizeof(pessoa1.nome), "João Silva");
-->   pessoa1.idade = 25;
-->   pessoa1.altura = 1.75;

*/

///////////////////////////////////////////////////////////////////////
////////////////////// BUBBLE SORT (ORDENAÇÃO) ////////////////////////
///////////////////////////////////////////////////////////////////////

void bubbleSort(int lista[], int tam){
    for (int i = 0; i < tam - 1; i++){
        for (int j = 0; j < tam - i - 1; j++){
            if(lista[j] > lista[j+1]){
                int temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
    }
}


///////////////////////////////////////////////////////////////////////
//////////////////// SHAKER SORT (ORDENAÇÃO) //////////////////////////
///////////////////////////////////////////////////////////////////////


void shakersort(int lista[], int tam){
    
    for(int i = 0; i < tam / 2; i++){
        for(int j = i; j < tam - i - 1; j++){
            if(lista[j] > lista[j+1]){
                int temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            }
        }
            
        for(int j = tam - i - 2; j > i; j--){
            if(lista[j] < lista[j-1]){
                int temp = lista[j];
                lista[j] = lista[j-1];
                lista[j-1] = temp;
            }
        }
    }
}

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

int main(){

    return  0;
}
