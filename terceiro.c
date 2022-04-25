#include <stdio.h>
#include <stdlib.h>
// Faça um programa que dados 20 valores retornar a soma e a média desses valores.
// Não sei se é para retornar de fato ou imprimir na tela.
int main(){
    int i=0, soma=0, media=0, n;
    while (i < 5){
        printf("digite um numero: ");
        scanf("%d", &n);
        soma = soma + n;
        media = (media+soma)/5;
        i++;
}
printf("%d %d", soma, media);
return 0;
}
