#include<bits/stdc++.h>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0
using namespace std;
Copy_maris_nah
{
    int t,l,n,x,i;
    char s[50],a[50];
    cin>>t;
    while(t--)
    {
        n=0;
        cin>>s;
        l=strlen(s);
        n=l/2;
        for (i=n-1,x=0;i>=0;i--,x++)
            a[x]=s[i];

        a[x]='\0';

        cout<<a;
        cout<<endl;
    }
    Okay_bye;
}
