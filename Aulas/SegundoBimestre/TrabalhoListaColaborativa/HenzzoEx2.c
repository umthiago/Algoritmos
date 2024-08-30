#include <stdio.h>
#include <string.h>

//Escrever um programa em C que apresenta um menu usando caso escolha
//(switch case) ao usuário sobre o funcionamento de um cinema e permite que ele
//escolha entre duas opções: "Cliente" e "Moderador". O programa deve exibir
//menus diferentes de acordo com a opção escolhida, use sua criatividade para
//fazer os menus seguintes como catálogo de filme ou comidas etc. O menu deve
//ser exibido novamente se o usuário escolher uma opção inválida.
int main(){
    char menu_filmes[100];
    char novo_menuFilmes[100];
    char menu_bomboniere[100];
    char novo_menuBomboniere[100];
    int alteracao;
    strcpy(menu_filmes, "Homem-Aranha, Vingadores, Mulher-Maravilha, Batman, Super-Homem, Twitsters, Ferrari, Titatnic" );

    strcpy(menu_bomboniere, "Pipoca, pipoca doce, Coca cola, Doces, salgados, Nachos");
    
    int opcao;
    printf("Escolha uma opcao:\n");
    printf("1 - Moderador\n");
    printf("2 - Cliente\n");
    scanf("%d",&opcao);
    //Limpa o buffer de entrada
    while (getchar() != '\n');
    switch(opcao){
        case 1:
            
            printf("Seja bem-vindo moderador!\n");
            printf("Deseja alterar o menu da Bomboniere?\n");
            printf("1 - Sim\n");
            printf("2 - Não\n");
            scanf("%d",&alteracao);
            while (getchar() != '\n');
            if (alteracao == 1 ){
                printf("Digite o novo menu da Bomboniere:\n");
                fgets(novo_menuBomboniere, 100, stdin);
                // Remove o caractere de nova linha, se presente
                novo_menuBomboniere[strcspn(novo_menuBomboniere, "\n")] = '\0';
                //scanf("%99s",novo_menuBomboniere);
                strcpy(menu_bomboniere,novo_menuBomboniere);
                printf("Digite o novo catalágo de filmes:\n");
                //scanf("%99s",novo_menuFilmes);
                fgets(novo_menuFilmes, 100, stdin);
                // Remove o caractere de nova linha, se presente
                novo_menuFilmes[strcspn(novo_menuFilmes, "\n")] = '\0';
                strcpy(menu_filmes,novo_menuFilmes);
                printf("Menu alterado");
                
            } else{
                printf("FIM DO PROGRAMA!\n");
                break;
            }
        case 2:
            printf("Seja bem-vindo!\n");
            printf("MENU DE FILMES: %s\n",menu_filmes);
            printf("MENU BOMBONIERE: %s\n",menu_bomboniere);
            break;
    }
  

    
    return 0;
}
