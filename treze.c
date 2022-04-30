//Faça um programa que some todos os valores dados por um usuário até que este digite zero.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valores, soma;
    printf("Digite os valores a serem somados. Quando terminar, digite zero. \n");
    do {
        scanf("%f", &valores);
        soma=soma+valores;
    }
    while(valores!=0);
    printf("%.1f", soma);
    return 0;
}
