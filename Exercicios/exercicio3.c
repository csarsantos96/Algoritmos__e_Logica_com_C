/*  
    3 - Conversão de Minutos para Tempo de Jogo
Peça ao usuário para digitar o tempo jogado em minutos. Depois, converta esse valor para horas e minutos e exiba o resultado.

*/

#include <stdio.h>

int main(){

    int minutos, horas, minRestantes;


    printf("Quantos minutos você jogou?\n");
    scanf("%d", &minutos);
    

    horas = minutos / 60;
    minRestantes = minutos % 60;

    printf("Resultado: %d hora(s) e %d minutos", horas, minRestantes);

    return 0;
}