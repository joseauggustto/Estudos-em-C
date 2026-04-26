
#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &num);

    printf("\n--- Tabuada de %d ---\n", num);

    for (int i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}