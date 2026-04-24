// Cadastro Cartas Super Trunfo. 

#include <stdio.h>
#include <string.h>

int main(){
    float area, pib, dens_popul, pib_per_capita, area2, pib2, dens_popul2, pib_per_capita2;
    signed long int populacao, populacao2;
    int numerospt, numerospt2;
    char estado[10], codigo_carta1[10], codigo_carta2[10], nome_cidade[30];

   printf("Digite o Código da Carta entre 1 e 4: ");
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
                                                                                                 // Entretanto, eu devo fazer isso após a coleta de dados inicial, enquanto os dados estãos frescos.
                                                                                     
//###########################  CARTA 2 ################################


   printf("\n\n Agora vamos para o cadastro da Segunda Carta!\n\n");
   
   printf("Digite o Código da Carta entre 1 e 4: ");
   scanf("%s", codigo_carta2);

//    printf("Digite o Estado com uma letra de A até H: ");
//    scanf("%s", estado);

   getchar(); 

//    printf("Digite o nome da cidade: ");
//    fgets(nome_cidade, 30, stdin);
//    nome_cidade[strcspn(nome_cidade, "\n")] = 0;

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

   printf("\n---Primeira Carta Cadastrada com Sucesso!--- \n |");
   printf(" Carta 1: \n | Estado: %s\n | Código: %s0%s\n | Nome da Cidade: %s\n |", codigo_carta2, estado, codigo_carta2, nome_cidade);  
   printf(" População: %ld\n | Área: %.2fKM²\n | PIB: R$%.2f bilhões\n | Números pontos turísticos: %d\n | Densidade Populacional: %.2f\n | PIB  per Capita: %.2f\n",
                                                                                                         populacao2, area2, pib2, numerospt2, dens_popul2, pib_per_capita2);

   float super_poder_carta2 = populacao2 + area2 + pib2 + (float)numerospt2 + (dens_popul2 * -1) + pib_per_capita2;



   // ######################  DUELO ############################



   printf("\n\n --- Agora vamos para o duelo! --- \n");


    int comp_pop = populacao > populacao2;
    int comp_area = area > area2; 
    int comp_pib = pib > pib2;
    int comp_npt = numerospt > numerospt2;
    int comp_densi = dens_popul < dens_popul2;
    int comp_ppc = pib_per_capita > pib_per_capita2;
    int comp_super = super_poder_carta1 > super_poder_carta2;

    printf("\n\n População: %d\n | Área: %d\n | PIB: %d\n | Pontos Turísticos: %d\n | Densidade Populacional: %d\n | PIB per Capta: %d\n | SUPER: %d\n \n\n", 
    comp_pop, comp_area, comp_pib, comp_npt, comp_densi, comp_ppc, comp_super); 


// se for igual a 1 a carta 1 venceu, de for 0 a carta 2 venceu

//    printf("\n\n ----Fim do programa, até logo!----\n\n");

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