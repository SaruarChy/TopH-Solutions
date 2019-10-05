/*Bismillahhir Rahmanir Rahim*/
/*Saruar Chowdhury*/
/*Metropolitan University*/

#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int i,k;
    bool a,b,c;
    char s[101];
    while (scanf ("%s",s)!= EOF)
    {
        a = b = c = false;
        k = 0;
        for (i=0; s[i]; i++)
        {
            if (islower(s[i]))
                a = true;
            else if (isupper(s[i]))
                b = true;
            else
                c = true;
            if (a && b && c)
            {
                ++k;
                a = b = c = false;
            }
        }
        cout<<k<<endl;
    }

    return 0;
}
