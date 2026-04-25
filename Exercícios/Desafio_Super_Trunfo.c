// Cadastro Cartas Super Trunfo. 

#include <stdio.h>
#include <string.h>

int main(){
   
    float area, pib, dens_popul, pib_per_capita, area2, pib2, dens_popul2, pib_per_capita2;
    signed long int populacao, populacao2;
    int numerospt, numerospt2, opcao;
    char estado[10], codigo_carta1[10], codigo_carta2[10], nome_cidade[30], nome_cidade2[30];


   printf("\n\nDigite o Código da Carta entre 1 e 4: ");
   scanf("%s", codigo_carta1);

//    printf("Digite o Estado com uma letra de A até H: ");
//    scanf("%s", estado);

   getchar(); 

//    printf("Digite o nome da cidade: ");
//    fgets(nome_cidade, 30, stdin);
//    nome_cidade[strcspn(nome_cidade, "\n")] = 0;

   printf("Digite a população: ");
   scanf("%ld", &populacao);

   printf("Digite a Área em Km²: ");
   scanf("%f", &area);

   printf("Digite o PIB dessa cidade: ");
   scanf("%f", &pib);

   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &numerospt);

   dens_popul = populacao / area; // No desafio Aventureiro, foi adicionado apenas isso aqui, o resto foi todo do nível iniciante.
   pib_per_capita =  (pib * 1000000000.0) / populacao;

   printf("\n---Primeira Carta Cadastrada com Sucesso!--- \n |");
   printf(" Carta 1: \n | Estado: %s\n | Código: %s0%s\n | Nome da Cidade: %s\n |", codigo_carta1, estado, codigo_carta1, nome_cidade);  
   printf(" População: %ld\n | Área: %.2fKM²\n | PIB: R$%.2f bilhões\n | Números pontos turísticos: %d\n | Densidade Populacional: %.2f\n | PIB  per Capita: R$%.2f\n",
                                                                                                         populacao, area, pib, numerospt, dens_popul, pib_per_capita);
    

   float super_poder_carta1 = populacao + area + pib + (float)numerospt + (dens_popul * -1) + pib_per_capita; // Eu estava tentando colocar esse cálculo no fim das duas coletas de dados.
//                                                                                                  // Entretanto, eu devo fazer isso após a coleta de dados inicial, enquanto os dados estãos frescos.
                                                                                     
//###########################  CARTA 2 ################################


   printf("\n\n Agora vamos para o cadastro da Segunda Carta!\n\n");
   
   printf("Digite o Código da Carta entre 1 e 4: ");
   scanf("%s", codigo_carta2);

//    printf("Digite o Estado com uma letra de A até H: ");
//    scanf("%s", estado);

   getchar(); 

//    printf("Digite o nome da cidade: ");
//    fgets(nome_cidade2, 30, stdin);
//    nome_cidade2[strcspn(nome_cidade, "\n")] = 0;

   printf("Digite a população: ");
   scanf("%ld", &populacao2);

   printf("Digite a Área em Km²: ");
   scanf("%f", &area2);

   printf("Digite o PIB dessa cidade: ");
   scanf("%f", &pib2);

   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &numerospt2);

   dens_popul2 = populacao2 / area2; // No desafio Aventureiro, foi adicionado apenas isso aqui, o resto foi todo do nível iniciante.
   pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

   printf("\n---Segunda Carta Cadastrada com Sucesso!--- \n |");
   printf(" Carta 1: \n | Estado: %s\n | Código: %s0%s\n | Nome da Cidade: %s\n |", codigo_carta2, estado, codigo_carta2, nome_cidade2);  
   printf(" População: %ld\n | Área: %.2fKM²\n | PIB: R$%.2f bilhões\n | Números pontos turísticos: %d\n | Densidade Populacional: %.2f\n | PIB  per Capita: %.2f\n",
                                                                                                         populacao2, area2, pib2, numerospt2, dens_popul2, pib_per_capita2);

   float super_poder_carta2 = populacao2 + area2 + pib2 + (float)numerospt2 + (dens_popul2 * -1) + pib_per_capita2;


   // ######################  DUELO ############################
   do { 
      
      // printf("\n\n --- Vamos para o duelo! --- \n\n"); 

      printf("\n\n---Escolha uma opção abaixo.---\n");
      printf(" | 1 - Duelo População. \n");
      printf(" | 2 - Duelo Área. \n");
      printf(" | 3 - Duelo PIB. \n");
      printf(" | 4 - Duelo Pontos Turísticos. \n");
      printf(" | 5 - Duelo Densidade Populacional. \n");
      printf(" | 6 - Duelo PIB per Capta. \n");
      printf(" | 7 - Duelo SUPER. \n");
      scanf("%d", &opcao);

         switch (opcao){
            case 1:
               printf("\nDuelo População!\n");
               if (populacao > populacao2){
                  printf("\nCarta 1 Venceu!\n");
               } else if (populacao < populacao2){
                  printf("\nCarta 2 Venceu!\n");
               } else {
                  printf("\nEmpate técnico!\n");
               }break;

            case 2:
               printf("\nDuelo Área!\n");
               if (area > area2){
                  printf("\nCarta 1 Venceu!\n");
               } else if (area < area2){
                  printf("\nCarta 2 Venceu!\n");
               } else {
                  printf("\nEmpate técnico!\n");
               }break;

            case 3:
               printf("\nDuelo PIB!\n");
               if (pib > pib2){
                  printf("\nCarta 1 Venceu!\n");
               } else if (pib < pib2){
                  printf("\nCarta 2 Venceu!\n");
               } else {
                  printf("\nEmpate técnico!\n");
               }break;

            case 4:
               printf("\nDuelo Pontos Turísticos!\n");
               if (numerospt > numerospt2){
                  printf("\nCarta 1 Venceu!\n");
               } else if (numerospt < numerospt2){
                  printf("\nCarta 2 Venceu!\n");
               } else {
                  printf("\nEmpate técnico!\n");
               }break;

            case 5:
               printf("\nDuelo Densidade Populacional!\n");
               if (dens_popul2 > dens_popul){
                  printf("\nCarta 1 Venceu!\n");
               } else if (dens_popul2 < dens_popul){
                  printf("\nCarta 2 Venceu!\n");
               } else {
                  printf("\nEmpate técnico!\n");
               }break;

            case 6:
               printf("\nDuelo PIB!\n");
               if (pib > pib2){
                  printf("\nCarta 1 Venceu!\n");
               } else if (pib < pib2){
                  printf("\nCarta 2 Venceu!\n");
               } else {
                  printf("\nEmpate técnico!\n");
               }break;

            case 7:
               printf("\nDuelo SUPER!\n");
               if (super_poder_carta1 > super_poder_carta2){
                  printf("\nCarta 1 Venceu!\n");
               } else if (super_poder_carta1 < super_poder_carta2){
                  printf("\nCarta 2 Venceu!\n");
               } else {
                  printf("\nEmpate técnico!\n");
               }break;

            default:
                  printf("Erro! Escolha Inválida.");
               break;
         }

   } while (opcao != 0); 
   

   printf("\n\n ----Fim do programa, até logo!----\n\n");


   return 0; 
}

/*
    Exibição do Resultado: Mostrar na tela, de forma clara, o resultado da comparação, incluindo:
     
        O nome dos dois países.
        O atributo usado na comparação.
        Os valores do atributo para cada carta.
        Qual carta venceu.
        Em caso de empate, exibir a mensagem "Empate!".
        
        
        
===========================================


printf("\n============================================\n");
printf("             RESULTADO DO DUELO             \n");
printf("============================================\n");

// 1. Nome dos dois países
printf(" CONFRONTO: %s VS %s\n", pais1, pais2);

// 2. Atributo usado
printf(" ATRIBUTO:  População\n");

// 3. Valores para cada carta
printf(" --------------------------------------------\n");
printf(" [Carta 1] %-15s: %lu\n", pais1, populacao1);
printf(" [Carta 2] %-15s: %lu\n", pais2, populacao2);
printf(" --------------------------------------------\n");

// 4. Lógica de quem venceu ou empate
if (populacao1 > populacao2) {
    printf(" VENCEDOR:  CARTA 1 (%s)!\n", pais1);
} else if (populacao2 > populacao1) {
    printf(" VENCEDOR:  CARTA 2 (%s)!\n", pais2);
} else {
    // 5. Caso de empate
    printf(" RESULTADO: EMPATE!\n");
}
printf("============================================\n");

*/










































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