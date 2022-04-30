//Faça um programa que receba um valor inteiro e mostre todos os divisores deste número.
#include <stdio.h>
#include <stdlib.h>

int main()
{   int numero, divisor;
    printf("Quer saber os divisores de que numero \n");
    scanf("%d", &numero);

    for (int i = 1; i<=numero; i++){
        if((numero%i)==0){
            printf("%d ", i);
        }
    }
    return 0;
}
