// Let's go

#include <stdio.h> 
#include <string.h>

//Biblioteca do printf

// int main() {   // Aqui é o comando que inicia todo o código.
//     printf("Olá Mundo!\n");
//     return 0;
// }

 // ----------------------------------

// int main(){

//     int x = 10;   // Isso aqui serve para ver em que parte da memória o dado está.
//     printf("%d\n", x);  
//     printf("%p\n", &x); 

// }

// ---------------------------------------

// OPERADORES MATEMÁTICOS ---

// int main(){

//     int numero1, numero2; 
//     int soma, subtracao, multiplicacao, divisao;

//     printf("Entre com o número 1: ");
//     scanf("%d", &numero1);

//     printf("Entre com o número 2: ");
//     scanf("%d", &numero2);

//     soma = numero1 + numero2; 

//     subtracao = numero1 - numero2;

//     multiplicacao = numero1 * numero2;

//     if (numero2 != 0) {
//         divisao = numero1 / numero2;
//     } else {
//         divisao = 0;
//         printf("O número não pode ser dividido por!\n");
//     }

//     printf("A soma é: %d\n", soma);
//     printf("A subtração é: %d\n", subtracao);
//     printf("A multiplicação é: %d\n", multiplicacao);

//     return 0;

// }

// ---------------------------------


// OPERADORES DE ATRIBUIÇÃO ---

// int main(){
//     int numero1 = 10, numero2, resultado;

//     resultado = 10;
//     printf("Resultado: %d\n", resultado);

//     resultado +- numero1;
//     printf("Novo resultado: %d\n", resultado);

//     resultado -= numero1;
//     printf("Novo resultado: %d\n", resultado);

//     resultado /= numero1;
//     printf("Novo resultado: %d\n", resultado);


// }

// --------------------------------------

// OPERADORES DE INCREMENTO E DECREMENTO ---

// ++ vai dar o número mais 1.
// -- vai dar o número menos 1. 
// o pós intremento, o número inicial vai permanecer e depois aumenta um. O PC usa o valor atual e soma depois.
// o pré incremento o computador soma primeiro e usa o novo valor depois.

// int main(){

//     int x = 10;
//     int y = x++;

//     printf("%d %d\n", x, y);

//     int w = 11;
//     int o = w--;

//     printf("%d %d\n", w, o);

//     int a = 12;
//     int b = ++a;

//     printf("%d %d\n", a, b);

//     int n = 13;
//     int m = --n;

//     printf("%d %d\n", n, m);

// }

// -------------------------------------------

// MANIPULAÇÃO E CONVERSÃO DE TIPOS DE DADOS. ---

// Para que eu possa forçar um dado a sair de um forma específica, é só colocar (tipo de dado) antes da equação. 

// int main(){
//     int a = 10;
//     int b = 3;

//     float quociente =  a / b;

//     printf("quociente %.2f\n", quociente);
// // ----------------------------

//     int a = 10;
//     int b = 3;

//     float quociente = (float) a / b; // add isso aqui

//     printf("quociente %.2f\n", quociente);


