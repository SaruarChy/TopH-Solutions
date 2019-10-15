#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        double a,sum=0,avg=0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum+=a;
        }
        avg=sum/n;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(3)<<avg<<endl;
    }
    return 0;
}
