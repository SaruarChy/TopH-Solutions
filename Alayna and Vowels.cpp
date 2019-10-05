/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    string a;
    cin>>a;
    for(int i=0; i<a.length(); i++)
    {
        switch(tolower(a[i]))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                c++;
                break;
        }
    }
    cout<<c<<endl;
    return 0;
}
