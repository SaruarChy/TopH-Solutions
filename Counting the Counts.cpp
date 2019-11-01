#include<iostream>
#include<algorithm>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0

using namespace std;
Copy_maris_nah
{
    int t,i,c=0;
    cin>>t;
    int a[t+1];
    for(i=0; i<t; i++)
        cin>>a[i];
    sort(a,a+t);
    for(i=0; i<t; i++)
    {
        if(a[i]>=80)
            c++;
    }
    cout<<c<<endl;
}
