#include <stdio.h>


    //#include <stdio.h>

int main(){
    //Faça um software que realize cadastro de pessoas, e que peça os
    //dados do usuário (Nome, Idade e Profissão). Ao final, mostrar quantos cadastros
   // foram realizados e qual a idade da pessoa mais velha. 
    char nome[10];
    int idade;
    char profissao[20];
    int pessoas_cadastradas = 0;
    int pessoas_qtdade;
    int maior_idade = 0;

    printf("Bem -vindo ao cadastro de pessoas!\n");
    printf("Digite quantas pessoas quer cadastrar: ");
    scanf("%d", &pessoas_qtdade);
    int i = 0;
    while (i < pessoas_qtdade){
        // Leitura do nome
        printf("Nome: ");
        scanf("%9s", nome); // %19s garante que não ocorra overflow

        // Leitura da idade
        printf("Idade: ");
        scanf("%d", &idade);
        if(idade > maior_idade){
            maior_idade = idade;
        }


        // Leitura da profissão
        printf("Profissão: ");
        scanf("%19s", profissao);
    
        i++;
       
    }
    printf("Seus resultados\n");
    printf("Número total de pessoas cadastradas: %d\n", pessoas_qtdade);
    printf("Pessoa mais velha: %d\n", maior_idade);

    
    return 0;
}
