#include<iostream>
#include<stdio.h>
#define    copy_maris_na     int main()
#define    Okay_bye    return 0
using namespace std;
copy_maris_na
{
    int s,a,r,u;
    int hello,world[1001];
    cin>>s>>a;
    for(int i=1; i<=s; i++)
        cin>>world[i];
    for(int i=1; i<=a; i++)
    {
        cin>>r>>u;
        if(world[r]<1)
            --world[u];
        if(world[r]<1)
            --world[u];
    }
    hello=0;
    for(int j=1; j<=s; j++)
        if(world[j]<1)
            hello++;
    cout<<hello<<endl;
    Okay_bye;
}

