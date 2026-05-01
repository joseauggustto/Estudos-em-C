// Exercícios em C para praticar: 
//          Variables and Types, Arrays, Multidimensional, Arrays Conditions, Strings, For loop, While loops, Functions, Static, Pointers, Structures. 

// Let's go.

#include <stdio.h>

void medianotas(float nota){

    float media, notas; 

    media = (nota += notas) / 5; 
}

int main(){

    float notas[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%.1f ", notas[i]);
    }

    printf("\nSua média é: %.1f\n", medianotas);

    return 0;
}