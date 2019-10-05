/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000],n,i,temp;
    scanf("%d",&n);

    for(i=0; i<n; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    temp=arr[i+1];
    printf("%d",temp);

    return 0;
}
