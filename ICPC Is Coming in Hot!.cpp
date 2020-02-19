#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld double
ll c[11], m, ans;
int main()
{
    char str[10010];

    scanf("%s", str);
    ll i, l=strlen(str);
    for(i=0; i<l; i++)
    {
        c[str[i]-'0']++;
    }
    for(i=0; i<=9; i++)
    {
        if(c[i]>m) m=c[i], ans=i;
    }
    cout<<ans<<endl;
    return 0;
}
