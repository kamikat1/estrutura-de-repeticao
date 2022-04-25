#include <stdio.h>
#include <stdlib.h>
//Faça um programa que dados dois números mostre todos os números inteiros entre estes dois números.
int main(){
        int f, l;
        printf("digite um numero: ");
        scanf("%d", &f);
        printf("digite um numero: ");
        scanf("%d", &l);
        while(f<=l){
            printf("%d, ", f);
            f++;
        }
//deveria excluir os n das extremidades

return 0;
}
