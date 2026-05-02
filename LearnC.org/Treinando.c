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

int main(){


    float array[2][3];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o preço %d:", i + 1);
            scanf("%f", &array[i][j]);
        }
    }



    // float total = 0; 

    // for (int i = 0; i < 5; i++)
    // {
    //     total += array[i];
    // }
    // printf("total: %.1f\n", total);
    

    
    return 0;
}