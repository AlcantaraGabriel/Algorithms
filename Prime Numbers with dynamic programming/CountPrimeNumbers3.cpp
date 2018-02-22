//Author: Gabriel Alcântara Silva
//Title: Using dynamic programming for viewing and count of prime numbers

#include <cstdio>
#include <vector>
 
using namespace std;
 
#define MAX 100000000000
bool vet[MAX];
 
vector <int> primos;
 
int main()
{
    int n=100000000,NdivSeis = n/6;
 
    for(int m=1; NdivSeis>=m; m++){
        int x = 6*m -1,y = 6*m +1;
 
        int NdivPrimo=n/x;
 
        for(int j=6*m;(n/x)+1>=j;j+=6){
 
            if(vet[x]==false || vet[y]==false){
                if(vet[x]==false)
                    vet[x*(j-1)]=true,vet[x*(j+1)]=true;
                if(vet[y]==false)
                    vet[y*(j-1)]=true,vet[y*(j+1)]=true;
            }
 
            else if(vet[x]==true && vet[y]==true)
                break;
        }
 
        if(vet[x]==false){
            //printf("%d\n",x);
            primos.push_back(x);
        }
        if(vet[y]==false){
            //printf("%d\n",y);
            primos.push_back(y);
        }
    }
    printf("Quantidade de primos: %d\n",primos.size()+2);
    return 0;
}
