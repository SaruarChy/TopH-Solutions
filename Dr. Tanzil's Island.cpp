#include <bits/stdc++.h>
using namespace std;


const double PI = acos(-1.0);


int main(void)
{
    int t;
    double r;

    cin >> t;

    while (t--)
    {
        cin >> r;
        cout << fixed << setprecision(6) << PI*r*r << endl;
    }

    return 0;
}
