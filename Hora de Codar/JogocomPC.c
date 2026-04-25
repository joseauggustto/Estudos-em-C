// Jogo de Maior, Menor e Igual. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int numeropc, numero;
    char opcoes;
    float M, N, I; 


        srand(time(NULL)); // Gerador de Número Aleatório. Ele tem que ficar fora do loop pra não prejudicar a aleatoriedade. 
       
        printf("\n\n--- Bem Vindo ao Jogo Maior, Menor, Igual. ---\n\n");
        
    do{   

        numeropc = rand() % 100 + 1; // Número de 1 até 100.
       
        printf(" | Digite um número de 1 até 100:  ");
        scanf("%d", &numero);

        printf("\n Escolha uma das opções: \n\n");
        printf(" M - Maior.\n");
        printf(" N - Menor.\n");
        printf(" I - Igual.\n");
        printf(" S - Sair do Jogo.\n");
        scanf(" %c", &opcoes);

        switch (opcoes){
            case 'M':
            case 'm':
                printf("\n - Sua aposta foi em: MAIOR. - \n\n");
                printf(" Resultado: %s\n", (numero > numeropc) ? "Você ganhou!\n" : "O PC ganhou!\n");
                printf("O número do PC foi: %d\n\n", numeropc);
               break;
            case 'N':
            case 'n':
                printf("\n - Sua aposta foi em: MENOR. - \n\n");
                printf(" Resultado: %s\n", (numero < numeropc) ? "Você ganhou!\n" : "O PC ganhou!\n");
                printf("O número do PC foi: %d\n\n", numeropc);
                break;
            case 'I': 
            case 'i':
                printf("\n - Sua aposta foi em: IGUAL. - \n\n");
                printf(" Resultado: %s\n", (numero == numeropc) ? "Você ganhou!\n" : "O PC ganhou!\n"); 
                printf("O número do PC foi: %d\n\n", numeropc);
                break;
            case 'S':
            case 's':
                printf("Saindo do jogo. Até logo!\n\n");
                break;
            default:
                printf("Opção inválida.");
                break;
        }
    } while (opcoes != 'S' && opcoes != 's');
}




/*
O jogo começa com a geração de um número aleatório entre 1 e 100 e oferece ao jogador três opções: apostar se seu número é maior, menor ou igual ao número do computador. 
Após a escolha, o jogador digita um número, e o programa compara as duas entradas. 
Se a previsão do jogador estiver correta, ele vence; caso contrário, perde.
*/





