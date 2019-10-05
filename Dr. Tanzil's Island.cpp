                        /*Bismillahhir Rahmanir Rahim*/
                            /*Saruar Chowdhury*/
                        /*Metropolitan University*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i;
    double avg,sum=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        sum+=a;
        avg=sum/i;
        printf("%.4lf\n",avg);
    }
    return 0;
}
