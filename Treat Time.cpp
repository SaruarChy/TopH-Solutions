#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a>=b) && (b==c))
    {
        cout<<"Chocolate"<<endl;
    }
    else if((a<b) && (a>c))
    {
        cout<<"Ice-cream"<<endl;
    }
    else if((a>=b) && (a>=c))
    {
        cout<<"Chocolate"<<endl;
    }
    else
    {
        cout<<"Chocolate"<<endl;
    }
    return 0;
}
