/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/
#include<iostream>
using namespace std;
int main()
{
    int fib;
    int n1=0,n2=1,n3=0,i;
    cin>>fib;
    for(i=0; i<fib; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    cout<<n1<<endl;
    return 0;
}
