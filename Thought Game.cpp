#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b;
        c=(a+b)/2;
        if(c%2==0)
            cout<<"Sadia will be happy."<<endl;
        else
            cout<<"Oops!"<<endl;
    }
}
