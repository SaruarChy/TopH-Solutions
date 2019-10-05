/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/
#include<bits/stdc++.h>
using namespace std;
bool prime[1000000];

void sieve()
{
    int i,j;
    for(i=2; i<=1000000; i++)
    {
        prime[i]=true;
    }
    for(i=2; i*i<=1000000; i++)
    {
        for(j=i*i; j<=1000000; j+=i)
        {
            prime[j]=false;
        }
    }
}

int main()
{
    sieve();
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(prime[n]==true)
        {
            cout<<n<<" is a prime number."<<endl;
        }
        else
            cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}
