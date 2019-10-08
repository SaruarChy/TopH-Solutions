#include<iostream>
using namespace std;
int main()
{
    int n,b,c,i;
    cin>>n>>c;
    b=c;
    for(i=0; i<n; i++)
    {
        if(b%n!=0)
        {
            b++;
        }

    }
    cout<<b-c<<endl;
    return 0;
}
