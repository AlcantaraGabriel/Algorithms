#include <stdio.h>
#include <stdlib.h>

int main()
{   //quantidade de números primos de 0 a n
    int n;
    scanf("%d",&n);
    int *vet = (int*) calloc(n+1,sizeof(int));////lista zerada com N posições
    int i,cont=0;
    ///Crivo de Eratóstenes
    for(i=2;i<=sqrt(n);i++){
        if(vet[i]==0){//é primo
            int j;
            for(j=i*2;j<=n;j+=i)//elinando múltiplos de i
                    vet[j] = 1;//não é primo
        }
    }

    ///imprimindo números primos
    for(i=2;i<=n;i++){
        if(vet[i]==0){//se a condição for verdadeira é um número primo
            printf("%d\n",i);//primo
            cont++;//+1 primo
        }
    }
    printf("Quantidade de numeros primos até N: %d",cont);
    return 0;
}
