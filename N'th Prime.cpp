#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 7368790

bool IsPrime[MAX_SIZE];
int primes[50005],i,j,k=2;
int main()
{
    int n;
    primes[0]=0,primes[1]=2;
    for(i=3; i<2716; i+=2)
        for(j=2*i+i; j<MAX_SIZE; j+=2*i)
            IsPrime[j]=1;
    for(i=3; i<MAX_SIZE; i+=2)
    {
        if(!IsPrime[i])
            primes[k]=i,++k;
    }
    cin>>n;
    cout<<primes[n]<<endl;
}
