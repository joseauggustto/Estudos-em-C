// Cadastro Cartas Super Trunfo. 

#include <stdio.h>
#include <string.h>

int main(){
    float area, pib;
    int populacao, numerospt;
    char estado[10], codigo_carta[10], nome_cidade[30];

   printf("Digite o Código da Carta entre 1 e 4: ");
   scanf("%s", codigo_carta);

   printf("Digite o Estado com uma letra de A até H: ");
   scanf("%s", estado);

   getchar(); 

   printf("Digite o nome da cidade: ");
   fgets(nome_cidade, 30, stdin);
   nome_cidade[strcspn(nome_cidade, "\n")] = 0;

   printf("Digite a população: ");
   scanf("%d", &populacao);

   printf("Digite a Área em Km²: ");
   scanf("%f", &area);

   printf("Digite o PIB dessa cidade: ");
   scanf("%f", &pib);

   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &numerospt);

   printf("\n---Primeira Carta Cadastrada com Sucesso!--- \n |");
   printf(" Carta 1: \n | Estado: %s\n | Código: %s0%s\n | Nome da Cidade: %s\n |", codigo_carta, estado, codigo_carta, nome_cidade);  
   printf(" População: %d\n | Área: %.2fKM²\n | PIB: R$%.2f bilhões\n | Números pontos turísticos: %d\n", populacao, area, pib, numerospt);  


//------------------------------------------


   printf("\n\n Agora vamos para o cadastro da Segunda Carta!\n\n");
   
   printf("Digite o Código da Carta entre 1 e 4: ");
   scanf("%s", codigo_carta);

   printf("Digite o Estado com uma letra de A até H: ");
   scanf("%s", estado);

   getchar(); 

   printf("Digite o nome da cidade: ");
   fgets(nome_cidade, 30, stdin);
   nome_cidade[strcspn(nome_cidade, "\n")] = 0;

   printf("Digite a população: ");
   scanf("%d", &populacao);

   printf("Digite a Área em Km²: ");
   scanf("%f", &area);

   printf("Digite o PIB dessa cidade: ");
   scanf("%f", &pib);

   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &numerospt);

   printf("\n---Segunda Carta Cadastrada com Sucesso!--- \n |");
   printf(" Carta 2: \n | Estado: %s\n | Código: %s0%s\n | Nome da Cidade: %s\n |", codigo_carta, estado, codigo_carta, nome_cidade);  
   printf(" População: %d\n | Área: %.2fKM²\n | PIB: R$%.2f bilhões\n | Números pontos turísticos: %d\n", populacao, area, pib, numerospt); 



   printf("\n\n ----Fim do programa, até logo!----\n\n");

   return 0; 
}

/*
#include <stdio.h>

int main() {
    char opcao;

    do {
        printf("Digite uma letra de A ate H: ");
        scanf(" %c", &opcao); // O espaço antes do %c limpa o buffer (Enter)

        if (opcao < 'A' || opcao > 'H') {
            printf("Erro! Letra invalida. Tente novamente.\n");
        }

    } while (opcao < 'A' || opcao > 'H');

    printf("Voce digitou a letra valida: %c\n", opcao);

    return 0;
}

*/