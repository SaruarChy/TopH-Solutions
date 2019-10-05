/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<n; i++)
    {
        if(a[i-1]>a[i])
        {
            cout<<"No"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"Yes"<<endl;
    }
    return 0;
}
