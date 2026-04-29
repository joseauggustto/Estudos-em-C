// Material referente ao curso de C do LearnC.org. 

/* 

Números Inteiros que podem ser positivos e negativos usa-se: char, int, short, long ou long long.

Números inteiros que só podem ser positivos: unsigned char, unsigned int, unsigned short, unsigned long, unsigned long long.

Números decimais de ponto flutuante: float e double.

Booleanos: bool. Em versões mais antigas: char.


O char varia de -128 até 127. 

Enquanto o long pode variar de -2.147.483,648 a 2.147.483,647
(long em outros tipos de dados numéricos podem ter outro intervalo em computadores diferentes, 
por exemplo - de –9,223.372.036.854.775.808 a 9.223.373.036.854.775.807 em computador de 64 bits).

*/

// ####################################################################

/*

Arrays - 

Imagine que você tem várias maçãs. Em vez de guardar cada maçã em um lugar diferente da loja, você usa uma caixa com divisórias. 
Um array em C é exatamente essa caixa: uma estrutura que armazena vários itens do mesmo tipo em sequência na memória do computador.

Para criar um array, você precisa dizer ao C: o tipo de dado, o nome da "caixa" e quantos espaços ela tem.

int notas[5];    - aqui uma "caixa" que guarda 5 números inteiros. 


*/
// Arrays simples

// #include <stdio.h>

// // int main(){

//     float medianotas[3]; // deifini um array com 3 casas {0, 1, 2}.
//     float soma = 0; 
//     int i; 

//     for (i = 0; i < 3; i++)     // ele vai dar um loop de 3 voltas pra coletar o dado do usuário. Se fosse "<=3", iam ser 4 loops.
//     {
//         printf("Digite 3 notas: ");
//         scanf("%f", &medianotas[i]);
//     }

//     for (i = 0; i < 3; i++)   // agora ele vai dar 3 loops para mostrar os dados coletados 
//     {
//         printf("Nota %d: %.2f\n", i + 1, medianotas[i]);
//         soma += medianotas[i];   // esse atalho vai pegar os dados salvos no array e somar, evitando o uso de muitos linhas só pra somar 3 números. 
//     }
//     printf("\nMedia final: %.2f\n", soma / 3);  // por último o printf mostrando a média de 3.


//     return 0;
// }



// ####################################################################

/*

Arrays Multidimencionais -

Basicamente, enquanto o Array simples era a caixa, os multidimencionais serão o armário inteiro de caixas. 

- Pode ser escrito assim: 

char vogais[1][5] = 
{
    {'a', 'e', 'i', 'o', 'u'}
};

--------------------------------

Array bidimensional: 

int nums =[x][y];

--------------------------------

*/

// Exercício para resolver:

// #include <stdio.h>

// 	int main() {
// 		/* TODO: declare the 2D array grades here */
//         int grades[2][5];            // não estava declarado a matriz bidimensional de 2 linhas e 5 colunas.
// 		float average;
// 		int i;
// 		int j;

// 		grades[0][0] = 80;
// 		grades[0][1] = 70;
// 		grades[0][2] = 65;
// 		grades[0][3] = 89;
// 		grades[0][4] = 90;

// 		grades[1][0] = 85;
// 		grades[1][1] = 80;
// 		grades[1][2] = 80;
// 		grades[1][3] = 82;
// 		grades[1][4] = 87;

// 		/* TODO: complete the for loop with appropriate terminating conditions */
// 		for (i = 0; i < 2; i++) {     // precisava determinar o fim do loop externo de linhas em 2 voltas 
// 			average = 0;
// 			for (j = 0; j < 5 ; j++) {           // precisava determinar o fim do loop interno de colunas em 5 voltas 
// 				average += grades[i][j];
// 			}

// 			/* TODO: compute the average marks for subject i */
// 			printf("The average marks obtained in subject %d is: %.2f\n", i, average / 5); // aqui era só colocar a divisão por 5 para dar a média
// 		}

// 		return 0;
// 	}


// ####################################################################

/*
Condicionais. 

O IF é uma declaração que nos permite saber se algo é true or false. Se sim, ele passa. 

== serve pra saber se duas coisas são iguais. E != serve pra saber se são... diferentes!


Em contrapartida ao IF, temos o ELSE. Ele executa o trabalho quando o if é falso. "Se não if, else!."

Ainda, temos o ELSE IF. Ele é um "meio termo". Quando não if, else if. Quando não if e else if, ELSE!

------------------------

Ainda mais à frente, temos os operadores lógicos! 
Eles servem pra verificar duas operações lógicas e definir o resultado final. 

Temos o && - "E", significa que ambas as operações DEVEM ser verdade. 1 && 1 saída = 1

Temos o || - "OU", significa que ao MENOS UMA deve ser verdade. Se for 0 || 0 saída = 0. Todo o resto vai ser = 1. 

E por último o != "NÂO", ele vai negar tudo. 1 vai ser 0 - 1 != saída 0. 

*/

// EXERCÍCIO PARA RESOLVER

// #include <stdio.h>

// void guessNumber(int guess) // função void, usada pra criar um "função" (???)
// {
//     int num = 555; // precisava definir o número correto pra o usuário saber como foi sua aposta, e eu consegui esquecer disso KKKKKKKKKKKKKKKKKKKKKKK
//     if (num == guess) {
//             printf("Correct, You guessed it!\n");
//         } 
//             else if (num > guess){
//                 printf("Your guess is too low.\n");
//             } 
//                 else {
//                     printf("Your guess is too high.\n");
//                 }
        
// }

// int main() {
//     guessNumber(500);
//     guessNumber(600);
//     guessNumber(555);
// }


// ####################################################################

/*
STRINGS! 

Strings em C são na verdade arrays de caracteres.

O segredo do array string é o caracterere nulo no fim: char nome[5] = {'J', 'o', 's', 'e', '\0'};
Esse caractere vai dizer ao computador onde parar de ler.

Se eu fizer: char nome[] = "José";  Ele vai colcoar o \0 automaticamente no fim.


*/

// #include <stdio.h>
// #include <string.h>

// int main(){

//     char nome[] = "Jose"; // se tiber acento, vai contar um byte a mais!

//     printf("%d\n", strlen(nome));
//  // -------------------------------
//     if (strncmp(nome, "Jose", 4) == 0)
//     {
//         printf("Yes\n");
//     } else {
//         printf("Não");
//     }
//   // ------------------------------ 
//     char dest[20]="Hello";
//     char src[20]="World";
    
//     strncat(dest,src,3);
//     printf("%s\n",dest);

//     strncat(dest,src,20);
//     printf("%s\n",dest);
// }


// EXERCÍCIO PARA RESOLVER

// #include <stdio.h>
// #include <string.h>

// int main() {

//   char first_name[] = "John";
//   char last_name[] = "Doe";
//   char name[100];

//   last_name[0] = 'B';
//   sprintf(name, "%s %s", first_name, last_name); // esse comando vai montar a palavra e armazenar na variável name
//   if (strncmp(name, "John Boe", 100) == 0) {           // Sempre que possível, use o snprintf. 
//       printf("Done!\n");                               // Ele tem um "n" no meio que permite você dizer o tamanho máximo da caixa. >>> snprintf(mensagem, 50, "Sensor: %d", valor);
//   }
//   name[0]='\0';
//   strncat(name,first_name,4);
//   strncat(name,last_name,20);
//   printf("%s\n",name);
//   return 0;
// }

// ####################################################################

/*
FOR LOOPS!

Esse comando tem a capacidade de criar um bloco de código que será executado quantas vezes for pré-definido. 

o formato básico é for(int i = 0; i < 0; i++) e logo após um printf.

*/

// EXEMPLO!

// #include <stdio.h>

// int main(){

//     int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int sum; 

//     for (int i = 0; i < 10; i++)
//     {
//         sum += array[i];
//     }

//     printf("%d\n", sum);

//     return 0;
// }

// EXERCÍCIO PARA RESOLVER 

// #include <stdio.h>

// int main() {
//   int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//   int factorial = 1;
//   int i;

//   for (i = 0; i < 10; i++)
//   {
//     factorial *= array[i];  // era só criar essa função pra gerar um fatorial do array de 10 números. 
//   }

//   printf("10! is %d.\n", factorial);
// }

// ####################################################################

/*

Loop com While. ---

Esse comando diz que: "Enquanto não chegar a isso, faça isso", mais ou menos assim. 

Ele pode executar infinitamente uma função assim: 

while (1) {  }   -   Enquanto não der 0, ele vai continuar infinitamente. 

Temos os comandos break; e continue; Eles servem pra parar ou prossegui a execução em determinado ponto. 

Adendo: o comando continue não vai adicionar nada na posição que ele está, vai pular e ignorar onde ele estava.
                
*/

// EXEMPLO:

// #include <stdio.h>

// int main() {

//     int n = 0;

//     while (n < 20)
//     { 
//         n++; // aquele velho incremento pra não quebrar o código...

//         if (n % 2 == 1) {   // todos os numeros ímpares serão "excluídos"
//             continue;
//       }
//      printf("número par: %d\n", n);   
//     } 

//     return 0;
// }

// EXERCÍCIO!

// #include <stdio.h>

// int main() {
//     int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
//     int i = 0;

//     while (i < 10) {

//         if (array[i] < 5)    // Tive que criar esse if e else if para cumprir os requisitos da atividade. 
//         { i++;     // É necessário esse incremento aqui pra que o código não fique travado na primeira tentativa.
//             continue;

//         }    else if (array[i] > 10)
//             {
//                 break;
//             }
        
//         printf("%d\n", array[i]);
//         i++;
//     }

//     return 0;
// }

// ####################################################################

/*
FUNÇÔES! (LEGAL DEMAIS)

As funções são maneiras de escrever códigos simples antes do código principal para que não fique algo repitivo e gigante.
Se for preciso usar, é só chamar as funções durante o código pra elas executarem suas funções.

*/

// EXERCÍCIO: 

// #include <stdio.h>

// void print_big(int number){

//     if (number > 10)
//     {
//         printf("%d is big\n", number);
//     } 
// }

// int main() {
//   int array[] = { 1, 11, 2, 22, 3, 33 };
//   for (int i = 0; i < 6; i++) {
//     print_big(array[i]);
//   }
//   return 0;
// }

