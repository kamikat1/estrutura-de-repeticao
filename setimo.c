//Faça um programa que receba 100 valores e mostre o menor e o maior valor digitado.
#include <stdio.h>
#include <stdlib.h>

int main()
{   float num, menor, maior, i=1;
    while(i<10){
        printf("digite o %f valor: ", i);
        scanf("%f", &num);

        if(num==1){
            menor=num;
            maior=num;
        }
        else if(num>maior){
            maior=num;
        }
        else if(num<menor){
            menor=num;
        }
    i++;
    }

    printf("o menor valor foi %f e o maior %f ", menor, maior);

    return 0;
}
