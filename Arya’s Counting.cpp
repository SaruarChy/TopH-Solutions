#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,c;
    cin>>t;
    for (i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        printf("Case %d: ",i);
        if (a > b && a > c)
            cout<<"A"<<endl;
        else if (b > c && b > a)
            cout<<"B"<<endl;
        else if (c > a && c > b)
            cout<<"C"<<endl;
        else
            cout<<"Confused"<<endl;
    }
    return 0;
}
