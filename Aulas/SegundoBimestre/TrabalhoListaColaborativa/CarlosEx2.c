#include <stdio.h>

int main(){

    int n1,n2,n3;
    printf("Insira o primeiro número: ");
    scanf("%d",&n1);
    printf("Insira o segundo número: ");
    scanf("%d",&n2);
    printf("Insira o terceiro número: ");
    scanf("%d",&n3);
    int maiorAB,maior,menorAB,menor;
    maiorAB = (n1>n2) ? n1 : n2;
    maior = (n3>maiorAB) ? n3 : maiorAB;

    menorAB = (n1<n2) ? n1 : n2;
    menor = (n3<menorAB) ? n3 : menorAB;
    printf("O menor valor é %d\n",menor);
    printf("O maior valor é %d\n",maior);
    
    

    
    return 0;
}
