/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string st,re;
    cin>>st;
    re=st;
    reverse(re.begin(),re.end());
    if(st==re)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;

    return 0;
}
