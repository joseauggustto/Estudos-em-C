// Let's go

#include <stdio.h> //Biblioteca do printf

// int main() {   // Aqui é o comando que inicia todo o código.
//     printf("Olá Mundo!\n");
//     return 0;
// }

// -----------------------

// int main() {
//     int idade = 22;
//     int quantidade = 1;
//     float altura = 1.89;
//     float peso = 79.8;
//     char nome[20] = "José";


//     printf("A idade é: %d\n", idade);
//     printf("A quantidade é: %d\n", quantidade);
//     printf("A altura é: %.2f\n", altura);
//     printf("O peso é: %.3f\n", peso);
//     printf("O nome é: %s\n", nome);

//     return 0;

// }


int main(){
    int idade;
    float peso;
    char nome[20]; 

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Seu peso é: %.3f\n", peso);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    return 0; 
}