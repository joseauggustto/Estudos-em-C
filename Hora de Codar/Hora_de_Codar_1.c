// Cadastro de Alunos

#include <stdio.h>
#include <string.h>

int main(){
    float media1, media2, media3;
    char nome[50], matricula[20];   // Matrícula foi colocado como string devido ao uso de traços e pontos que normalmente aparecem em matrículas oficiais.  
    int idade;

    printf("Digite sua matrícula: ");
    scanf("%s", matricula);

    getchar();        // Limpeza do 'Enter' anterior para não afetar o próximo scanf.

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);      // fgets - semelhante ao scanf, mas aceita espaços. "stdin" - recebe entradas do teclado padrão.
    nome[strcspn(nome, "\n")] = 0;   // Esse comando vai ler a variável "nome", procurar o "\n" e colocar um caractere nulo. Fazendo isso, o código passa sem erros. 

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua média 1: ");
    scanf("%f", &media1);

    printf("Digite sua média 2: ");
    scanf("%f", &media2);

    printf("Digite sua média 3: ");
    scanf("%f", &media3);

    float calculo_media = (media1 + media2 + media3) / 3;

    printf("---Cadastro Aluno---\n Matrícula: %s\n Nome Completo: %s\n Idade: %d\n Sua média atual é: %.1f\n", matricula, nome, idade, calculo_media);

    return 0;


}
