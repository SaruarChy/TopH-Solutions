#include<bits/stdc++.h>
using namespace std;
 long long int dp[101][101],a[10002];
int main(){
    int n,i,j,k=0,c,m;
    cin>>n;
    int l=n*n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>dp[i][j];
            a[k]=dp[i][j];
            k++;
        }
    }
    sort(a,a+l,greater<long long int>());
        c=l-n;
    long long int sum1=0,sum2=0,ans;
    c=l-n;
            for(i=0;i<n;i++)
            sum1+=a[i];
    if((n%2)==0){
        for(i=l-1;c<=i;i--)
            sum2+=a[i];
    }
    else{
        for(i=l-1;c<i;i--)
            sum2+=a[i];
            sum2+=a[n-1];
    }
    ans=sum1-sum2;
    cout<<ans<<endl;
return 0;
}
