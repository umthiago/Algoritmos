#include <stdio.h>
int main(){
    float raio;

    printf("Digite um valor para o raio do circulo:\n");
    scanf("%f", &raio);

    if(raio < 0 ){
        printf("Erro, o raio precisa ser um dígito positivo");
        
    } else {
        printf("A área do circulo é: %.2fcm", 3.14*(raio*raio));
        
    }


return 0;
}
