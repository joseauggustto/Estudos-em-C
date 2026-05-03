// Variables and Types, Arrays, Multidimensional, Arrays Conditions, Strings, For loop, While loops, Functions, Static, Pointers, Structures.
// Let's...

#include <stdio.h>

// int main(){


//     int array[5];

//     for (int i = 0; i < 5; i++)
//     { 
//         printf("Digite o número %d: ", i + 1);
//         scanf("%d", &array[i]);
//     }

//     for (int i = 4; i >= 0; i--)
//     {
//         printf("%d ", array[i]);
//     }

//     return 0;
// }

//###################################################################

// int main(){

//     float precos[5];
    

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Digite o preço %d: ", i + 1);
//         scanf("%f", &precos[i]);
//     }

//     float maiorPreco = precos[0];

//     for (int i = 0; i < 5; i++)
//     {
//         if (precos[i] > maiorPreco) 
//         {
//             maiorPreco = precos[i];
//         }
        
//     } printf("O maior preço é: %.1f\n", maiorPreco);

//     return 0;
// }

//###################################################################

// int main(){

//     int estacionamento[5][5];

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             estacionamento[i][j] = 1; 
//         }
        
//     }

//     estacionamento[2][2] = 0; 

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("%3d", estacionamento[i][j]);
//         }
//      printf("\n");
//     } 
    
//     return 0;
// }

// ##################################################################

// int main(){


//     float array[5];

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Digite o preço %d:", i + 1);
//         scanf("%f", &array[i]);
//     }

//     float total = 0; 

//     for (int i = 0; i < 5; i++)
//     {
//         total += array[i];
//     }
//     printf("total: %.1f\n", total);
    

    
//     return 0;
// }

// ##################################################################

// int main(){

//     float array[2][3]; // duas linhas e 4 colunas 
    
//     for (int i = 0; i < 2 ; i++){ // Esse aqui vai dar uma volta só quando o de dentro der 3. 
//         for (int j = 0; j < 3; j++){  // Esse aqui vai dar 3 voltas pra o de fora dar 1.
//             printf("Digite a quantidade: ");
//             scanf("%f", &array[i][j]); 
//         } 
//     }
//     float total = 0; 
//     for (int i = 0; i < 2; i++){  // Esse aqui vai dar uma volta só quando o de dentro der 3. 
//         float somaDia = 0;
//         for (int j = 0; j < 3; j++){  // Esse aqui vai dar 3 voltas pra o de fora dar 1.
//             total += array[i][j];
//             somaDia += array[i][j];  
//         } 
//         float media = somaDia / 3;

//         printf("\nA média do dia %d é: %.1f\n", i + 1, media); 
//     } 

//     printf("\nO total é %f\n", total);
    
//     return 0;
// }

// ##################################################################

// int main(){

//     float tabelaAlunos[3][2];

//     for (int i = 0; i < 3; i++)
//     {
//     printf("\n -- Notas Aluno: %d\n", i + 1);

//         for (int j = 0; j < 2; j++)
//         {
//             printf("Digite a nota %d: ", j + 1);
//             scanf("%f", &tabelaAlunos[i][j]);
//         }
        
//     }

//     for (int i = 0; i < 3; i++)
//     { 
//         float soma = 0; 

//         for (int j = 0; j < 2; j++)
//         {
//          soma += tabelaAlunos[i][j]; 
//         } 
//         float mediaaluno = soma / 2;

//         printf("\nMédia aluno %d: %.1f\n", i + 1, mediaaluno); 

//         if (mediaaluno >= 7.0)
//         {
//             printf("Aluno %d com média %.1f está: Aprovado!\n", i + 1, mediaaluno);
//         } else {
//             printf("Aluno %d com média %.1f está: Reprovado!\n", i + 1, mediaaluno);
//         }
        
        
//     }

//     return 0;
// }
// ##################################################################

// int main(){

//     int tabela[10][10];

//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             tabela[i][j] = (i + 1) * (j + 1);
//         }
        
//     }
    
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             printf("%4d", tabela[i][j]);
//         }
//         printf("\n");
//     }
    

//     return 0;
// }