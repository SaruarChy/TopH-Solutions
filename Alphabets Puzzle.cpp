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
    string s;
    cin>>s;
    set<char>S;
    for(int i=0; i<s.length(); i++){
        S.insert(s[i]);
    }
    cout<<26-S.size()<<endl;

    return 0;
}

