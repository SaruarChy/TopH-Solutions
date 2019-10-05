#include<bits/stdc++.h>
using namespace std;
bool areanagram(string a,string b)
{
    int l,l1;
    l=a.length();
    l1=b.length();
    if(l!=l1)
        return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i=0; i<l; i++)
    {
        if(a[i]!=b[i])
            return false;
    }
    return true;
}
int main()
{
    string a,b;
    cin>>a>>b;
    if(areanagram(a,b))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
