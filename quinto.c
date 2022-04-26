////Faça um programa que dados dois números mostre todos os números inteiros entre estes dois números.

#include <stdio.h>
#include <stdlib.h>

int main()
{   int min, max, aux, count;
    printf("digite 2 numeros: ");
    scanf("%d %d", &min, &max);

    if(min>max){
        aux = min;
        min=max;
        max = min;
    }
    count=min+1;
    for(count<min; count<max; count++){
        printf("%d", count);
    }

    return 0;
}
