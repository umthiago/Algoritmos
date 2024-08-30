#include <stdio.h>

int main() {
  int opcao;
  
  do{
    printf("Calculadora de Áreas\n");
    printf("Insira o número da Área que deseja calcular\n");
    printf("1 - Quadrado/Retângulo\n");
    printf("2 - Triângulos\n");
    printf("3 - Circunferência\n");
    printf("4 - Fechar calculadora\n");
    scanf("%d", &opcao);
    
    if(opcao == 1){
        double lado, altura, area;
        printf("Insira o valor do lado:\n");
        scanf("%lf", &lado);
        printf("Insira o valor da altura:\n");
        scanf("%lf", &altura);
        area = lado * altura;
        printf("A área do quadrado/retângulo é: %.2lf\n", area);
    }
    if(opcao == 2){
        int opcaotriangulo = 0;
        printf("Selecione se é um Triangulo retangulo ou Triangulo equilatero\n");
        printf("1 - Triangulo Retangulo\n");
        printf("2 - Triangulo Equilatero\n");
        scanf("%d", &opcao);
        if(opcao == 1){
          double base, altura, area;
          printf("Insira o valor da base:\n");
          scanf("%lf", &base);
          printf("Insira o valor da altura:\n");
          scanf("%lf", &altura);
          area = (base * altura) / 2;
          printf("A área do triângulo Retangulo é: %.2lf\n", area);
        } else{
          double lado, area;
          printf("Insira o valor do lado:\n");
          scanf("%lf", &lado);
          area = ((lado * lado) * 1.73 )/ 4;
          printf("A área do triângulo Equilatero é: %.2lf\n", area);
        }
    }
    if(opcao == 3){
        double raio, area;
        printf("Insira o valor do raio:\n");
        scanf("%lf", &raio);
        area = 3.14 * (raio * raio);
        printf("A área do Circulo é: %.2lf\n", area);
    }
  } while (opcao != 4);
      
  
  
  return 0;
}
