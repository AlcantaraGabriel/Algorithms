//Author: Gabriel Alcântara Silva
//Profile: https://br.linkedin.com/in/gabrielcratoalcantara
//Title: Using dynamic programming for viewing and count of prime numbers

//Distribution of primes numbers: 3*2^N+1 our 3*2^N+1, N is a natural number greater than -1
//N = 0
//3*2^0-1 = 2, is prime
//3*2^0+1 = 4, not is prime
//Special case: 3*2^0, it is the only case that is prime number

#include <cstdio>
using namespace std;

#define MAX 1000000000
//Array used to save the false prime numbers
bool vet[MAX];

int main()
{
    int n,cont=0;
    //make the adjustment for values greater than 10 
    scanf("%d",&n);
    //printf("%d\n%d\n",2,3);
    for(int m=1; n/6>=m; m++){
        int x = 6*m -1,y = 6*m +1;
        //is prime (3*(2^1))-1 our 6m-1
        if(vet[x]==false){
            cont++;
            //printf("%d\n",x);
        }
        //is prime (3*(2^1))+1 our 6m+1
        if(vet[y]==false){
            cont++;
            //printf("%d\n",y);
        }
            //Eliminating all multiples of X or Y smaller than N
            //EX: 5 * 7 = 35, m = 6, 35 = 6*m -1, 35 is false prime numbers
            for(int j=6*m;j<=6*(n/x) ;j+=6){

                if(vet[x]==false) vet[x*(j-1)]=true,vet[x*(j+1)]=true;
                if(vet[y]==false) vet[y*(j-1)]=true,vet[y*(j+1)]=true;
            }
    }
    //Total of prime numbers
    printf("Quantidade de primos: %d ",cont+2);
    return 0;
}
