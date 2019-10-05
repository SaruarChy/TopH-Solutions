/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/
#include<iostream>
using namespace std;
int main()
{
    int s,e,x;
    int i,ass[100],sex=0;
    cin>>s;
    cin>>e>>x;
    for(i=0; i<s; i++)
    {
        cin>>ass[i];
    }
    for(i=e; i<=x; i++)
    {
        sex+=ass[i];
    }
    cout<<sex<<endl;

    return 0;
}
