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




*/