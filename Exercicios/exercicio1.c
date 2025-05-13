/*
Apresentação do Jogador
Crie um programa que peça o primeiro nome de um jogador, sua idade e a quantidade de gols que ele já fez na carreira. Em seguida, exiba essas informações na tela.
*/

#include <stdio.h>

int main(){

    int gols;
    int idade;
    char nome[10];

    printf("Qual é o nome do jogador de futebol? \n ");
    scanf("%s", &nome);
    printf("Qual é a idade do jogador? \n ");
    scanf("%d", &idade);
    printf("Quantidade de gols marcados? \n");
    scanf("%d", &gols);

    printf("\n==============================\n");

    printf( "O nome do jogador é: %s \n", nome) ;
    printf("A idade do jogador é: %d \n", idade);
    printf ("Quantidade de gols marcados é de: %d \n", gols);


    return 0;
}