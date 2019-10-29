#include<iostream>
#include<stdio.h>
#define HI_Sexy int main()
#define Okay_bye return 0
using namespace std;
HI_Sexy
{
    int n,m,sex,y,ass=0;
    scanf("%d",&n);
    sex=n*(n+1)/2;
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&y);
        ass+=y;
    }
    printf("%d\n",sex-ass);

    Okay_bye;
}
