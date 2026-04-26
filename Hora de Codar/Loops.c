#include <stdio.h>

// int main(){

//     int num = 0;

//     while (num <= 10)
//     {
//         printf("%d\n", num);
//         num += 2; 
//     }
// return 0; 
// }


// #####################################

// int main(){

//     int i = 0;

//     while (i <= 10)
//     {
//         if (i % 2 == 0){
//             printf(" %d ", i);
//         }

//     i++;

//     }

// return 0;

// }

// #####################################

// int main(){

//     int numero;

//     do
//     {
//         printf("Digite um número par para sair.  ");
//         scanf("%d", &numero);

//         if (numero % 2 == 0)
//         {
//             printf("É par.\n");
//         } else {
//             printf("É impar.\n");
//         }
        
        
//     } while (numero % 2 != 0);
    
// return 0;

// }

// #####################################

// int main(){

//     int numero, i; 

//     printf("Digite um número para a tabuada. ");
//     scanf("%d", &numero);

//     for (i = 0; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n", numero, i, numero*i);
   
//     }
    
// return 0; 
// } 

// #######################################

// Loops aninhados. 
/*
Pense em loops aninhados como um relógio. 
Um só vai fazer a volta quando o outro terminar a volta dele.
*/

int main (){

    for (int i = 1; i <= 2; i++){

                    for(int j = 1; j <= 5; j++)
                        {
                    printf("%d \n", i * j);
                    }  
    printf("\n");
    } 
    return 0;
}
