#include<bits/stdc++.h>
using namespace std;
#define     ultailaimu      int main()
#define     kamloilisi      return 0

ultailaimu
{
    string s;
    while(cin>>s)
    {
        int len=s.length();
        for(int i=0; i<len; i++)
        {
            if((len-i)%3==0 && i>0)
                cout<<",";
            cout<<s[i];
        }
        cout<<endl;
    }
    kamloilisi ;
}
