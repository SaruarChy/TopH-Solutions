#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,test=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int>mp;
        map<char,int>visit;

        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
            visit[s[i]]=1;
        }
        cout<<"Case #"<<test<<":"<<endl;

        for(int i=0; i<s.length(); i++){
            if(visit[s[i]]){
                cout<<s[i]<<" "<<mp[s[i]]<<endl;
                visit[s[i]]=0;
            }
        }
        test++;
    }
    return 0;
}
