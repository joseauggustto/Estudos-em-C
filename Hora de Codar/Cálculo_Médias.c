// Cálculo média alunos. 

#include <stdio.h>

int main(){

    float nota1, nota2, media;
    int opcoes;
    
    
    do{
        printf("\n\n---Programa Status Aluno.---\n\n");
        printf("  Escolha uma opcão:\n\n");
        printf("| 1 - Cálculo Média.\n");
        printf("| 2 - Status Estudante.\n");
        scanf("%d", &opcoes);

        
            switch (opcoes){
                case 1:
                    printf("\n---Cálculo Média Aluno.---\n\n");
                    printf("Digite sua primeira nota: "),
                    scanf("%f", &nota1);
                    printf("\nDigite sua segunda nota: ");
                    scanf("%f", &nota2);

                    media = (nota1 + nota2) / 2;

                    printf("\n--- Sua média é: %.1f", media);
                break;

                case 2:
                    printf("\n---Status Aluno.---\n");
                    if (media >= 7){
                        printf("\nVocê está aprovado!\n");
                    } else if (media >= 6 || media < 7){
                        printf("\nAluno em Recuperação!\n");
                    } else {
                        printf("\nAluno Reprovado!\n");
                    }
                    break;
                    
                default:
                    printf("Opção Inválida!");
                    break;
                }
    } while (opcoes == 1);{
        printf("\n\nFim do programa, até logo!\n\n");
    }
        
return 0;

}
