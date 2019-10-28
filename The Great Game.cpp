#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    long long a,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a;
        string b=to_string(a);
        int len=b.length();
        for(int i=0; i<len; i++)
            sum+=b[i]-'0';
        cout<<"Case "<<j<<":";
        if((len%2==0 && sum%2==0) || (len%2!=0 && sum%2!=0))
                cout<<" Safe to push"<<endl;
        else
            cout<<" BOOM"<<endl;
        j++;
    }
    return 0;
}
