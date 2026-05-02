// Exercícios em C para praticar: 
//          Variables and Types, Arrays, Multidimensional, Arrays Conditions, Strings, For loop, While loops, Functions, Static, Pointers, Structures. 

// Let's go.

// #include <stdio.h>

// float calcularMedia(float notas_recebidas[], int tamanho){   // Essas variáveis só se usam aqui, são apelidos dados para que elas funcionem na função.

//     float soma = 0; // Isso aqui vai zerar a variável soma se ela estiver com algum número sujo.

//     for (int i = 0; i < tamanho; i++){   // Aqui está um loop que vai somar as notas durante o número de vezes específicado. 
//         soma += notas_recebidas[i];
//     }
    
//     return soma / tamanho; // E aqui ele vai pegar a soma feita e dividir pelo tamanho especificado.
// }

// int main(){

//     float notas[5]; 

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Digite a nota %d: ", i + 1);
//         scanf("%f", &notas[i]);
//     }

//     float resultado = calcularMedia(notas, 5);  // Aqui é onde eu chamo a função. Eu defino uma variável de nome resultado e ela vai chamar a função.
//                                                     // A função foi construída pra receber dois dados,
//                                                       //o array de notas e o número de casas, como foi dito na função lá em cima. 

//     printf("Sua média é: %.1f\n", resultado);

//     if (resultado >= 7)
//     {
//         printf("Parabéns, aprovado.");
//     } else {
//         printf("Reprovado!\n"); 
//     }

//     return 0;
// }

// ####################################################################

// Tabela 10x10 

// #include <stdio.h>

// int main() {
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
//             printf("%3d ", tabela[i][j]);  // O %3d serve para alinhar os números
//         }
        
//         printf("\n");
//     }

//     return 0;
// }