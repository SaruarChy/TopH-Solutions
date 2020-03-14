#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,s,r;
    s=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<s; j++){
            cout<<" ";
        }
        s--;
        r=2*i-1;
        for(j=1; j<=r;){
            cout<<"*";
            j++;
            if(j<r){
                cout<<" ";
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}
