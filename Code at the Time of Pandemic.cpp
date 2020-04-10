#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,test=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int inf=0,total=1;
        cout<<"Case "<<test<<":"<<endl;
        cout<<"Day = 1, New = 0, Total = 1"<<endl;
        for(int i=2; i<=n; i++){
            inf=total*2;
            total=total+inf;
            cout<<"Day = "<<i<<", New = "<<inf<<", Total = "<<total<<endl;
        }
        test++;
    }
    return 0;
}
