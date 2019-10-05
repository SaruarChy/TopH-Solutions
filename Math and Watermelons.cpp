/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/

#include<stdio.h>
int main()
{
    int m,k,r;
    scanf("%d%d",&m,&k);
    if((k<100)&&(m<1000000))
    {
        r=m%k;
    }
    printf("%d",r);

    return 0;
}
