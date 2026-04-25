// Jogo de Maior, Menor e Igual. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int numeropc, opcoes, numero;
    char M, N, P;


    // do{

        srand(time(NULL)); // Gerador de Número Aleatório.
        numeropc = rand() % 100 + 1; // Número de 1 até 100.


        printf("\n\n--- Bem Vindo ao Jogo Maior, Menor, Igual. ---\n\n");

        printf(" | Digite um número de 1 até 100.");
        scanf("%d", &numero);

        printf("\n Escolha uma das opções: \n\n");
        printf(" M - Maior.\n");
        printf(" N - Menor.\n");
        printf(" I - Igual.\n");
        printf("| 2 - Sair do Jogo.\n");
        scanf("%d", &opcoes);

        switch (opcoes){
            case 'M':
                printf("\n - Sua aposta foi em: MAIOR. - \n");
                printf("Resultado: ", (numero > numeropc) ? "Você ganhou!" : "O PC ganhou!");                

                break;
            case 'N':
            

                break;
            case 'I':  
            

                break;


            case 2:
                printf("Saindo do jogo. Até logo!");
                break;
            default:
                printf("Opção inválida, Adeus.");
                break;
        }
    // } while (opcoes != 0);{
}




/*
O jogo começa com a geração de um número aleatório entre 1 e 100 e oferece ao jogador três opções: apostar se seu número é maior, menor ou igual ao número do computador. 
Após a escolha, o jogador digita um número, e o programa compara as duas entradas. 
Se a previsão do jogador estiver correta, ele vence; caso contrário, perde.
*/





