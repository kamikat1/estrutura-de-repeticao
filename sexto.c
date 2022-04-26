//Faça um programa que mostre quantos números múltiplos de 3 foram digitados por um usuário, em um total de 50.
#include <stdio.h>
#include <stdlib.h>

int main()
{   int num, quant;
    for(int i=0; i<10; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        if((num%3)==0){
            quant++;
        }
    }
    printf("foram digitados %d numeros multiplos de 3", quant);
  return 0;
}
