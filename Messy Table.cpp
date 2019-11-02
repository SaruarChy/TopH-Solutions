#include<iostream>
#include<algorithm>
#define     Copy_maris_nah      int main()
#define     Okay_bye           return 0
using namespace std;
int dp[101][101];
Copy_maris_nah
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        dp[a][b]=dp[b][a]=1;
    }
    for(int i=1; i<=100; i++)
    {
        for(int j=1; j<=100; j++)
        {
            if(dp[i][j]==1)
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[100][100]<<endl;

    Okay_bye;
}
