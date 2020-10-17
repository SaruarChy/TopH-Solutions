#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll n,a[100001],v,q;
    scanf("%lld", &n);
    for(ll i=1; i<=n; i++){
        scanf("%lld", &a[i]);
        a[i] += a[i-1];
    }
    scanf("%lld", &v);
    scanf("%lld", &q);
    while(q--){
        ll l,r;
        ll avg = 0,sum = 0,d = 0;
        scanf("%lld", &l);
        scanf("%lld", &r);
        sum = a[r] - a[l-1];
        avg = sum/(r-l+1);
        if(avg >= v){
            printf("Hurray! we made it in time!!\n");
        }
        else{
            printf("Oh! we missed it!!\n");
        }
    }

    return 0;
}

