//todos os numeros q dividem ambos os valores (2 q o usuari odigitar)
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
