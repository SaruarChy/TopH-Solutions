#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,count=0;
    int a[101],b[101];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            if(a[i]==b[j])
                count++;
        }
    cout<<count<<endl;
    return 0;
}
