/*
    2 - Média de Gols por Partida
Escreva um programa que receba o número total de gols de um jogador e a quantidade de partidas jogadas. Depois, calcule e exiba a média de gols por partida.
*/

#include <stdio.h>

int main(){
    int quantDeGols;
    int quantDeJogos;
    float mediaDeGols;

    printf("Qual é a quantidade de gols? \n");
    scanf("%d", &quantDeGols);
    printf("Qual é a quantidade de partidas \n");
    scanf("%d", &quantDeJogos);


    mediaDeGols = (float)quantDeGols / quantDeJogos ;



    printf("A media de gols por partida é de: %.2f\n", mediaDeGols);

    return 0;
}