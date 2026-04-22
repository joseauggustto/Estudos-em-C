// Cálculo média alunos. 

#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4;
    float media;

    printf("---Vamos Calcular Sua Média!---\n\n");

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite sua quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Sua média geral é: %.1f\n\n Até a Próxima!\n\n", media);

    return 0;

}