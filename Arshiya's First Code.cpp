#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0;
    cin>>n;
    c=n/2;
    if(n%2!=0)
        cout<<c+1<<endl;
    else
        cout<<c<<endl;
    return 0;
}
