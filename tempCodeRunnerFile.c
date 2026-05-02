



#include <stdio.h>

float calcularMedia(float notas_recebidas[], int tamanho) {

    float soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += notas_recebidas[i]; // Soma cada nota do array
    }

    return soma / tamanho; // Retorna o resultado da conta
}

int main() {
    float notas[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Chamamos a função passando o array 'notas' e o valor 5
    float resultado = calcularMedia(notas, 5);

    printf("\nSua media e: %.1f\n", resultado);



}