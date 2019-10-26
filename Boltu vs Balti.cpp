#include<bits/stdc++.h>
using namespace std;
int main (void)
{
    double x,y,res;
    while (cin >> x >> y)
    {
        if (x > y)
            swap (x,y);

        res = ((x+y)*(y-x+1))/2;

        printf("Sum of %0.lf to %0.lf is -> %0.lf;\n",x,y,res);
    }

    return 0;
}
