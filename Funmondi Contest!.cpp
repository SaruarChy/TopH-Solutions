#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,q,c,i;
    cin>>n>>q;
    long long int s[n+5];
    c=0;
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        if(s[i]>0)
            c++;
    }
    while(q--)
    {
        int a;
        long long int b;
        cin>>a>>b;
        if(a==1)
        {
            if(s[b-1]==1)
            {
                c--;
            }
            s[b-1]-=1;
        }
        else if(a==2)
        {
            if(s[b-1]==0)
            {
                c++;
            }
            s[b-1]+=1;
        }
        cout<<c<<endl;
    }
    return 0;
}
