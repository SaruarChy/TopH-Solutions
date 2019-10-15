#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A=0,b=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            A++;
        else if(s[i]>='a' && s[i]<='z')
            b++;
    }
    cout<<A<<" "<<b<<endl;
    return 0;
}
