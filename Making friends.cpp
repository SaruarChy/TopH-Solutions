/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
