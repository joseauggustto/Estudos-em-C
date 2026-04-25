// Let's go

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <time.h>


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

// ########################################


// int main(){

//     int a, b, num;
    
//     printf("Digite um número: ");
//     scanf("%d", &a);

//     printf("Digite um número: ");
//     scanf("%d", &b);

//         if (a >= b) {
//             printf("A é maior que B\n");  
//         } else {
//             printf("A não é maior que B\n");
//         }

//     printf("Digite um número: ");
//     scanf("%d", &num);

//         if (num % 2 == 0) { 
//             printf("O número é par\n"); 
//         } else { 
//             printf("O número é impar\n");
//         }
    
//     return 0;

// }

// ##########################################################

// int main(){
    
    // int a, b, c, d;

    // printf("Digite um número A: ");
    // scanf("%d", &a);

    // printf("Digite um número B: ");
    // scanf("%d", &b);

    // if (a > 0 && b > 0){
    //     printf("A e B são positivos.\n");
    // }
    
    // if (a > 0 || b > 0){
    //     printf("Algum deles é positivo\n");
    // }
    
    // if (!a){
    //     printf("A é zero\n");
    // }
    
    // float altura = 1.89;
    // float idade = 22;
    
    // if (idade >= 18 && idade <= 30 && altura >= 1.80){
    //     printf("Vocẽ atende os requisitos.\n");
    // } else {
    //     printf("Você não atende os requisitos.\n");

    // }

// ##################################################

/*
Estruturas de decisão aninhadas.

Nessa estrutura uma decisão só será executada se a de cima foi verdadeira 

Assim:

if (condition){
    if (condition){
    }
}

*/
// int main(){

//     int idade, dependente;
//     float salario;

//     printf("Qual a sua idade? ");
//     scanf("%d", &idade);

//     printf("Qual o seu salário? "); 
//     scanf("%f", &salario); 

//     printf("Quantos dependentes? ");
//     scanf("%d", &dependente);

//     if (idade >= 18 && idade <= 50){
//         if (salario <= 2000){
//             if (dependente > 2){ 
//                 printf("Você está qualificado para o desconto.");
//             } else {
//                 printf("Você não atende ao critério dependentes.");
//             }        
//         } else {
//             printf("Você não atende o critério salário."); 
//         }
//     } else {
//         printf("Você não atende ao critério Idade.");
//     }


// return 0;

//}
//############################################


/* 
Estruturas de Decisão Encadeadas.

Uma só será executada se a outra for falsa. 
E se todas forem falsas, a última será executada.
Assim: 

if (condição){

} else if (condição) {
 
} else {
 
}

*/
// int main(){
    
//     int num = 0;

//     if (num < 0){
//         printf("Esse número é negativo\n");
//     } else if (num == 0){
//         printf("Esse número é 0.");
//         } else {
//             printf("Esse número é positivo.");
//         }

// return 0;

// }

// ########################################################

/*
Uso do Switch.

Ele funciona como um menu de variáveis onde você escolhe qual quer.
A estrutura é mais ou menos assim:

switch (varivavel){
    case valor1:
        break;
    case valor2:
        break;
    default:
}
*/

// int main(){

//     int opcao;
//     float saldo = 1000;

//     printf("Escolha uma opção: \n\n");
//     printf("1 - Verificar saldo\n");
//     printf("2 - Fazer depósito\n");
//     scanf("%d", &opcao);


//     switch (opcao){
//     case 1:
//         printf("Seu saldo é: %.2f", saldo);
//         break;
//     case 2:
//         printf("Qual a conta? rsrsrs");
//         break;
//     default:
//         printf("Até logo.\n");
//     }

// }

// #############################################################

/*

Menus interativos usando Switch. ---

*/

// int main(){

//     int opcoes;

//     printf("\nMenu principal\n");
//     printf("1 - Iniciar Jogo.\n");
//     printf("2 - Regras do Jogo.\n");
//     printf("3 - Saindo do Jogo.\n");
//     scanf("%d", &opcoes);

//     switch (opcoes){
//     case 1:
//         printf("Iniciando jogo.");
//         break;
//     case 2:
//         printf("Regras do Jogo.");
//         break;
//     case 3:
//         printf("Saindo do jogo. Até logo!");
//         break;
//     default:
//         printf("Opção inválida, Adeus.");
//         break;
//     }
//}
// =============================================




/*
Estruturas de Repetição.

São ferramentas essenciais na programação, permitindo a execução repetida de um conjunto de instruções até que uma condição específica seja satisfeita.
Elas são cruciais para criar programas eficazes e fáceis de manter. 
Sem essas estruturas, os desenvolvedores teriam que duplicar manualmente o código para cada repetição necessária, 
resultando em scripts longos, redundantes e propensos a erros.


*/

int main(){





}