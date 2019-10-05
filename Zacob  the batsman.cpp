#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int z;
        cin>>z;
        if(((z>=4) && (z%2==0)) || (z==0))
            cout<<"Zacob Zacob!"<<endl;

        else
            cout<<"Sorry Zacob!"<<endl;
    }
    return 0;
}
