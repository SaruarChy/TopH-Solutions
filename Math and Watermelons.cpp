/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,k,r;
    cin>>m>>k;
    if((k<100)&&(m<1000000))
    {
        r=m%k;
    }
    cout<<r<<endl;

    return 0;
}
