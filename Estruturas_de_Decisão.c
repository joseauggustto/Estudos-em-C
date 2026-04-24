// Verificador de Condições de Segurança.

#include <stdio.h>

int main(){

    float temp, umid;
    int estoque;

    printf("Digite a Umidade do Ambiente: ");
    scanf("%f", &umid);

    printf("Digite a Temperatura desse ambiente: ");
    scanf("%f", &temp);

    printf("Digite a quantidade do seu estoque: ");
    scanf("%d", &estoque);

        if (umid > 50){
            printf("O ambiente está muito úmido, perigo de mofo!\n");
        } else {
            printf("Condições adequadas de umidade.\n");}
        
        if (temp > 30){
            printf("Ambiente muito quente! Cuidado.\n");
        } else {
            printf("Condições de temperatura ideais.\n");}
        
        if (estoque < 5){
            printf("Estoque baixo. Convém repor!\n");
        } else { 
            printf("Estoque ideal.\n");}

return 0;

}