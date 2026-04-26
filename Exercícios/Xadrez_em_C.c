#include <stdio.h>

int main(){

    char opcoes, lados, cima, direita, esquerda;
    int movimentos; 
    int i = 1;

    printf("\n---Bem vindo ao Xadrez!---\n\n");
    printf(" - Escolha uma peça: - \n\n");
    printf("| T - Torre \n");
    printf("| B - Bispo \n");
    printf("| R - Rainha \n");
    printf("| C - Cavalo \n");
    printf("\nDigite aqui: ");
    scanf(" %c", &opcoes);

        switch (opcoes){
        case 'T':
        case 't':

            printf("\n - Escolha para que lado a Torre irá: -\n\n");
            printf("| C - Cima\n| B - Baixo\n| D - Direita\n| E - Esquerda\n");
            scanf(" %c", &lados);

            printf(" Quanto movimentos ela irá?  \n");
            scanf("%d", &movimentos);
                
                i = 1;

                while (i <= movimentos){ 

                    if (lados == 'C'|| lados == 'c') printf("Cima\n");
                    if (lados == 'B'|| lados == 'b') printf("Baixo\n");
                    if (lados == 'D'|| lados == 'd') printf("Direita\n");
                    if (lados == 'E'|| lados == 'e') printf("Esquerda\n");
                    i++;
                }                 

            break;

        case 'B':
        case 'b':  

            printf("\n - Escolha para que lado o Bispo irá: -\n\n");
            printf("| D - Cima e Direita\n| E - Cima e Esquerda\n");
            scanf(" %c", &lados);

            printf("Quantos movimentos ela irá? \n");
            scanf("%d", &movimentos);

            i = 1;

            do
            {
                if (lados == 'D' || lados == 'D') printf("Cima e Direita\n");
                if (lados == 'E' || lados == 'e') printf("Cima e Esquerda\n");
                i++;   
                
            } while (i <= movimentos);
    
            break;
            
        case 'R':
        case 'r':

            printf("\n - Escolha para que lado a Rainha irá: -\n\n");
            printf("| C - Cima\n| B - Baixo\n| D - Direita\n| E - Esquerda\n");
            scanf(" %c", &lados);

            printf(" Quanto movimentos ela irá?  \n");
            scanf("%d", &movimentos);

                 for (i = 1; i <= movimentos; i++)
                 {
                    if (lados == 'C'|| lados == 'c') printf("Cima\n");
                    if (lados == 'B'|| lados == 'b') printf("Baixo\n");
                    if (lados == 'D'|| lados == 'd') printf("Direita\n");
                    if (lados == 'E'|| lados == 'e') printf("Esquerda\n");
                 }               

            break;
        case 'C':
        case 'c':

            printf("\n - Movimento do Cavalo - \n\n");

            int j = 1;

            while (i <= 1)  // O código vai rodar até dar meno ou igual a 1. O i já é igual 1, então ele só roda uma vez.
            {
                for (j ; j <= 2; j++)  // Esse loop vai rodar até dar menor igual a dois, vai imprimir duas vezes e sair fora para o while.
                {
                    printf("Baixo\n");  
                }
             printf("Esquerda\n");  

             i++; // Esse incremento serve pra o código não entrar em loop.  
                  // Se não tivesse ele, ia ser sempre 1 e o loop ia quebrar em infinito.  
                  // Como tem ele, após o fim do loop, ele tentar subir pra 2, mas a condição do while não permite e o código termina.
            }
            
            break;

        default:
                 printf("Fim do programa.\n");

            break;
    }

return 0;

}