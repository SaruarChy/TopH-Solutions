#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,stop="the end.";
    for(;getline(cin,s);)
    {
        if(s==stop)
            break;

//        6, 9, 1, 0, 5 and 2
//        b, g, l, o, s and z
        for(int i=0; s[i]!='\0'; i++){
            //numbers to letters
            if(s[i]=='6')
                s[i]='b';
            else if(s[i]=='9')
                s[i]='g';
            else if(s[i]=='1')
                s[i]='l';
            else if(s[i]=='0')
                s[i]='o';
            else if(s[i]=='5')
                s[i]='s';
            else if(s[i]=='2')
                s[i]='z';
            //letters to numbers
            else if(s[i]=='b')
                s[i]='6';
            else if(s[i]=='g')
                s[i]='9';
            else if(s[i]=='l')
                s[i]='1';
            else if(s[i]=='o')
                s[i]='0';
            else if(s[i]=='s')
                s[i]='5';
            else if(s[i]=='z')
                s[i]='2';
        }
        cout<<s<<endl;
    }
    return 0;
}
