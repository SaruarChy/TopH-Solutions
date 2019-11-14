#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long long int  a[101];
    long long int b,c,d;
    long long int t,test=1;
    cin>>t;
    while(t--)
    {
        cin>>b>>c>>d;
        long long int ans=0;
        for(long long int i=1; i<=b; i++)
            cin>>a[i];
        for(long long int i=1; i<=b; i++)
        {
            long long int now = a[i];
            if(c==1 && now==d)
                ans++;
            for(long long int j=i+1; j<=b && c>=2; j++)
            {
                now=a[i]+a[j];
                if(c==2 && now==d)
                    ans++;
                for(long long int l=j+1; l<=b && c>=3; l++)
                {
                    now=a[i]+a[j]+a[l];
                    if(c==3 && now==d)
                        ans++;

                }
            }

        }
        printf("Case %lld: %lld\n",test++,ans);
    }
}
