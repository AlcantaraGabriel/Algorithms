#include <cstdio>
#include <time.h>

#define MAX 1000000000
//Array used to save the false prime numbers
bool vet[MAX];

int main()
{
    int n=100000000,cont=0,Pprimos=n/6;
    for(int m=1; Pprimos>=m; m++){
        int x = 6*m -1,y = 6*m +1;
        //is prime 6m-1
        if(vet[x]==false && x<=n){
            cont++;
        }
        //is prime 6m+1
        if(vet[y]==false && y<=n){
            cont++;
        }
        //Eliminating all multiples of X or Y smaller than N
        //EX: 5 * 7 = 35, m = 6, 35 = 6*m -1, 35 is false prime numbers
        //if((n/x)+1>=x+1) printf("Pos %d: %d %d\n\n",m, x,y);

        for(int j=6*m;(n/x)+1>=j;j+=6){
            if(vet[x]==false) vet[x*(j-1)]=true,vet[x*(j+1)]=true;
            if(vet[y]==false) vet[y*(j-1)]=true,vet[y*(j+1)]=true;

        }
    }
    //Total of prime numbers
    printf("Quantidade de primos: %d \n",cont+2);
    return 0;
}
