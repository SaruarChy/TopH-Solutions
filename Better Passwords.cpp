#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 's')
            cout << '$';
        else if (s[i] == 'i')
            cout << '!';
        else if (s[i] == 'o')
            cout << "()";
        else{
            if (i == 0 && isalpha(s[i]))
                s[i] = toupper(s[i]);
            cout << s[i];
        }
    }
    cout << "." << endl;
    return 0;

}
//unsophisticated
