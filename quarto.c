#include <stdio.h>
#include <stdlib.h>
// Faça um programa que dados 35 valores mostre o produto entre eles.
int main(){
    int i=0, prod=1, n;
    do {
        printf("digite um numero: ");
        scanf("%d", &n);
        prod = prod*n;
        i++;
    }
    while (i < 5);
printf("%d", prod);
return 0;
}
