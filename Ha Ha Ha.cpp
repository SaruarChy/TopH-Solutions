#include<iostream>
#include<stdio.h>
#define Okay_bye return 0
using namespace std;
int main()
{
    int hi,s,e,x,y;
    x=1;
    scanf("%d",&hi);
    while(hi--)
    {
        y=0;
        scanf("%d%d",&s,&e);
        y=(s*s)+(e*e);
        printf("Case %d: %d\n",x,y);
        x++;
    }
    Okay_bye;
}
