#include<bits/stdc++.h>
using namespace std;
const int MOD = 10000;
int fact[20];

int main()
{
    int n,i;

    fact[0] = 1;

    for (i=1; i<20; i++)
        fact[i] = ((fact[i-1] % MOD) * (i % MOD)) % MOD;

    while (cin >> n)
        cout << (n < 20 ? fact[n] : 0) << endl;

    return 0;
}
