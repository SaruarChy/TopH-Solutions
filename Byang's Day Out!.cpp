#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int i;
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b<c)
        {
            cout<<"No"<<endl;
        }
        else if(a+c<b)
        {
            cout<<"No"<<endl;
        }
        else if(b+c<a)
        {
            cout<<"No"<<endl;
        }
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
