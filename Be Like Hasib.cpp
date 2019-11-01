#include<iostream>
#include<stdio.h>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0

using namespace std;
Copy_maris_nah
{
    long long int n,x;
    long long int low,high,mid,count=0;
    cin>>n>>x;
    low=1,high=n;
    while(low<high)
    {
        mid=(low+high)/2;
        count++;
        if(x>mid)
            low=mid+1;
        else
            high=mid;
    }
    cout<<count<<endl;

    Okay_bye;
}
