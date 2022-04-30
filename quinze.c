//Faça um programa que apresente um menu de opções, das quatro operações básicas, para calculo entre dois numeros.
//O programa deve possibilitar ao usuario a escolha da opção desejada, os valores a serem operados, e ao final retornar ao menu.
#include <stdio.h>
#include <stdlib.h>

int main()
{   float num1, num2, escolha;
    int parar;
    do {
    printf(" digite 1 para SOMA,\n digite 2 para SUBTRAÇÃO, \n digite 3 para MULTIPLICAÇÃO,\n digite 4 para DIVISAO.\n");
    scanf("%f", &escolha);
    printf("Digite os numeros a serem operados.");
    scanf("%f %f", &num1, &num2);

    if (escolha==1){
        printf("%.1f\n", num1+num2);
    }
    else if (escolha==2){
        printf("%.1f\n", num1-num2);
    }
    else if (escolha==3){
        printf("%.1f\n", num1*num2);
    }
    else if (escolha==4){
        printf("%.1f\n", num1/num2);
    }
    else printf("Essa opção não existe.\n");


    printf("Para parar o programa digite '-9999'\n\n Para continuar, digite qualquer numero.");
    scanf("%d", &parar);
    }
    while (parar != -9999);

    return 0;
}
