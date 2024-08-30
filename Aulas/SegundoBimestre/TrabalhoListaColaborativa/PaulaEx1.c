#include <stdio.h>

int main(){
    //Editora Companhia das Letras: R$ 55,00 por livro com 30% de desconto.
    //Editora Intrínseca: R$ 64,00 por livro com 20% de desconto.
    //Editora Darkside: R$ 70,00 por livro com 5% de desconto
    //Crie um software que peca ao usuário:
    //A editora dos livros desejados (1 para Companhia das Letras, 2 para intrínseca e 3
    //para Darkside).
    //Exemplo de Entrada:
    //Editora: 1
    //Quantidade de livros: 3
    //Exemplo de Saída:
    //Valor total a ser pago com o desconto: R$ 115,50
    int editora,qtd_livros;
    float desconto;
    float preco_total;
    printf("Editora: ");
    scanf("%d",&editora);
    printf("Quantidade de livros: ");
    scanf("%d",&qtd_livros);

    if(editora == 1){
        desconto = 0.3;
        preco_total = qtd_livros * 55.00 - ( ( qtd_livros * 55.00) *0.3) ;
        
    }
    else if (editora == 2){
        desconto = 0.20;
        preco_total = qtd_livros * 55.00 - (( qtd_livros * 55.00)*0.20 );
        
    }
    else if(editora == 3) {
        desconto = 0.05;
        preco_total = qtd_livros * 55.00 - (( qtd_livros * 55.00)*0.05 );
    }
    
    printf("Valor total a ser pago com desconto: R$ %.2f\n",preco_total );

    return 0;
}
