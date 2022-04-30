//Faça um programa que receba a idade de 30 pessoas e mostre quantos estão nas seguintes faixas estarias( 1a ate 12,
// 2a de 12 ate 17,3a de 18 ate 30, 4a de 31 ate 50, 5a acima de 50) enunciado errado... farei: 1a ate 12, 2a de 13 ate 17...
#include <stdio.h>
#include <stdlib.h>

int main()
{   int i, idade=0, qt1=0, qt2=0, qt3=0, qt4=0, qt5=0;

    for (i = 1; i<=5; i++){
        printf("Digite a idade:  \n");
        scanf("%d", &idade);
        if(idade<=12){
            qt1=qt1+1;
        }



        else if(idade<=13 && idade <= 17){
            qt2++;
        }



        else if(idade<=18 && idade <= 30){
            qt3++;
        }



        else if(idade<=31 && idade <= 50){
            qt4++;
        }



        else if (idade > 50){
            qt5++;
        }
    }
    printf("\n%d estao na 1a faixa,\n %d estao na 2a faixa,\n %d estao na 3a faixa,\n %d estao na 4a faixa,\n %d estao na 5a faixa", qt1, qt2, qt3, qt4, qt5);

    return 0;
}
