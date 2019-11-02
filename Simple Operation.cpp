#include<bits/stdc++.h>
#define     Copy_maris_nah       int main()
#define     Okay_bye             return 0;

using namespace std;
Copy_maris_nah
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a,c;
        char b;
        cin>>a>>b>>c;
        if(b=='+')
            cout<<"Case "<<i<<": "<<a+c<<endl;
        else if(b=='-')
            cout<<"Case "<<i<<": "<<a-c<<endl;
        else if(b=='*')
            cout<<"Case "<<i<<": "<<a*c<<endl;
    }
    Okay_bye;
}
