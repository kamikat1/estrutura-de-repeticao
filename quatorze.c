//faça um programa que receba uma lista de numeros, finalizada com zero. o programa deve mostrar
//a soma dos numeros positivos e a soma dos numeros negativos digitados
//Faça um programa que some todos os valores dados por um usuário até que este digite zero.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valores, positivos, negativos;
    printf("Digite a lista de numeros \n");
    do {
        scanf("%f", &valores);
        if(valores<0){
            negativos=negativos+valores;
        }
        else
            positivos=positivos+valores;


    }
    while(valores!=0);
    printf("soma dos positivos: %.1f, soma dos negativos: %.1f.", positivos, negativos);
    return 0;
}
