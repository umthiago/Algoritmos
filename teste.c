#include <stdio.h>

int main()
{
    int numeros[10];
    int sem_repitcoes[10];




	
	for (int i=0; i<10; i++){
		printf("Insira o número %d do vetor: ",i);
		scanf("%d",&numeros[i]);
	}

	int aux;
    for (int i=0; i<10; ++i){
        for (int j=i; j<10; j++){
            if (numeros[i]>numeros[j]){
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
    
    for (int i=0; i<10; i++){
		if (numeros[i] == numeros[i+1]){
            sem_repitcoes[i] = numeros[i];
        }
        else{
            sem_repitcoes[i] = 0;
        }
	}
    

	for (int i=0; i<10; i++){
        if (numeros[i] == sem_repitcoes[i]){
            numeros[i]=0;
        }
		//printf("Insira o número %d do vetor: ",i);
		printf("\nVETOR %d",numeros[i]);
	}
	
	

	


	


}
