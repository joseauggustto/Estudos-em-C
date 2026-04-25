# include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){

    int opcoes, escolhajogador, escolhapc; 

    printf("\nMenu principal\n\n");
    printf("1 - Iniciar Jogo.\n");
    printf("2 - Saindo do Jogo.\n");
    printf("\n\nEscolha uma das opções acima: ");
    scanf("%d", &opcoes);

    switch (opcoes){
    case 1:
        printf("\n\n---Iniciando jogo.---\n");
        srand(time(NULL));
        escolhapc = rand() % 3;   //Esse código serve pra o computador randomizar um número com o resto 

        printf("\nEscolha o seu!\n\n");
        printf(" | 0 - Pedra\n | 1 - Papel\n | 2 - Tesoura\n");
        printf("\nSua escolha é: ");
        scanf("%d", &escolhajogador);  

            printf("\nO computador escolheu...   -   ");

            if (escolhapc == 0){
                printf("Pedra!\n\n");
            } else if (escolhapc == 1)
                printf("Papel!\n\n");
                else printf("Tesoura!\n\n");

        if (escolhajogador == escolhapc){
            printf("---Empate, vai de novo!---\n");
        } else if ((escolhajogador == 0 && escolhapc == 2) || 
                    (escolhajogador == 1 && escolhapc == 0) || 
                    (escolhajogador == 2 && escolhapc == 1)) {
            printf("Você venceu! Parabéns.\n\n");
        } else {
            printf("Você perdeu!\n");
        }

        break;

    case 2:
        printf("\nSaindo do jogo. Até logo!\n\n");
        break;

    default:
        printf("Opção inválida, Adeus.\n");
        break;
    }

return 0;

}