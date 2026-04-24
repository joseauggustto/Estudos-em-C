#include <stdio.h>

int main(){
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40; 

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB; 

    int resultadoA, resultadoB;

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("\nO produto %s tem estoque total de %u e valor unitário de %.2f.\n\n", produtoA, estoqueA, valorA);
    printf("\nO produto %s tem estoque total de %u e valor unitário de %.2f.\n\n", produtoB, estoqueB, valorB);

    printf("\nSituação do %s é: %d\n\n", produtoA, resultadoA);
    printf("\nSituação do %s é: %d\n\n", produtoB, resultadoB);

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? Resultado: %d\n\n", valorA * estoqueA, valorB * estoqueB, (valorA * estoqueA) > (valorB * estoqueB));

    return 0;




}