//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n;
    string s;
    cin>>s;
    n = s.length();
    map<char,int>mp;
    int flag = 0;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    if(mp['m']>=1 && mp['i']>=1 && mp['c']>=1 && mp['r']>=1 && mp['o']>=1 && mp['s']>=1 && mp['f']>=1 && mp['t']>=1)
        flag = 1;
    if(flag == 1){
        cout<<"We both love Microsoft!"<<endl;
    }
    else{
        cout<<"Only I love Microsoft!"<<endl;
    }

    return 0;
}

