#include <stdio.h>
int main(){
    float peso, altura;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    float imc = peso / (altura * altura);

    
    if(imc < 18.5){
        printf("O seu IMC é %.2f é: ", imc);
        printf("Abaixo do normal");
        
    } else if(imc >= 18.5 && imc < 25){
        printf("O seu IMC é %.2f é: ", imc);
        printf("Normal");
       
    } else if(imc >= 25 && imc < 30){
        printf("O seu IMC é %.2f é: ", imc);
        printf("Sobreimc");
      
    } else if(imc >= 30 && imc < 35){
        printf("O seu IMC é %.2f é: ", imc);
        printf("Obesidade leve");
        
    } else if(imc >= 35 && imc < 40){
        printf("O seu IMC é %.2f é: ", imc);
        printf("Obesidade moderada");
       
    } else{
        printf("O seu IMC é %.2f é: ", imc);
        printf("Obesidade Mórbida");
        
    }
return 0;
}
