#include<iostream>
#include<cstring>
#include<algorithm>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0

using namespace std;
string x,y;
int dp[1001][1001];
int i,j,m,n;

void lcs()
{
    m=x.length();
    n=y.length();
    for(i=0; i<=m; i++)
        dp[i][0]=0;
    for(i=0; i<=n; i++)
        dp[0][i]=0;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
        {
            if(x[i-1]==y[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else if(dp[i-1][j] >= dp[i][j-1])
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=dp[i][j-1];
        }
}

int main()
{
    int t,l,k=1;
    cin>>t;
    while(t--)
    {
        l=0;
        cin>>x;
        y=x;
        l=x.length();
        reverse(y.begin(),y.end());
        lcs();
        cout<<"Case "<<k<<": "<<l-dp[m][n]<<endl;
        k++;
    }
    Okay_bye;
}
