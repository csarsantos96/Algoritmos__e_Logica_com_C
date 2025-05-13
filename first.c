#include <stdio.h>

int main(){
    int numero = 10;
    float numQuebrado = 50.49;
    char letra = 'A';
    char nome[6] = "Cesar";

    printf("Numero: %d\n", numero);
    printf("Flutuante: %.2f\n", numQuebrado);
    printf("Letra: %c\n", letra );
    printf("Nome: %s\n", nome);

    return 0;
}