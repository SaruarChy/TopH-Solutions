#include<iostream>
#include<algorithm>
#define     Copy_maris_nah      int main()
#define     Okay_bye            return 0;
using namespace std;
Copy_maris_nah
{
    int n,i;
    long long int a[100000];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n,greater<long long int>());
    cout<<a[0]<<endl;

    Okay_bye;
}
