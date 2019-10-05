/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/
#include<iostream>
using namespace std;
int main()
{
    int n,m=0,i,flag=0;
    cin>>n;
    m=n/2;
    for(i=2; i<=m; i++)
    {
        if(n%i==0)
        {
            for(int j=0; j<n; j++)
                cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;

            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO PUNISHMENT"<<endl;
    }
    return 0;
}
