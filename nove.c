//faça um programa que receba 2 números e mostre todos os numeros que dividem ambos os valores. 
//Sejam a e b inteiros. Dizemos que a é divisível por b se existe um inteiro c, de
//modo que bc = a. Dizemos também que b divide a, ou que b é um fator de a, ou que b é um
//divisor de a. A notação correspondente é b\a

#include <stdio.h>
#include <stdlib.h>

int main()
{   int a, b, maior;
    scanf("%d %d", &a, &b);
    if(a>=b)
        maior=a;
    
    else maior=b;
    
    for(int i=1; i<=maior; i++){
        if((a%i==0) && (b%i==0)){
            printf("%d  ", i);
        }
    }
    return 0;
}
