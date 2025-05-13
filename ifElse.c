#include <stdio.h>

int main(){
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >=18){
        printf("Você está liberado");
    } else{
        printf("Entrada não autorizada");
    }



    return 0;
}