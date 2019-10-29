#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0,over=0,ball=0;
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] != 'N' && s[i] != 'W' && s[i] != 'D')
                count++;
        }
        ball=count%6;
        over=count/6;
        if(ball == 0 && over != 0)
			printf("%d %s\n", over, (over>1)? "OVERS" : "OVER");
		else if(over == 0 && ball != 0)
			printf("%d %s\n", ball, (ball>1)? "BALLS" : "BALL");
		else
			printf("%d %s %d %s\n", over, (over>1)? "OVERS" : "OVER", ball, (ball>1)? "BALLS" : "BALL");

    }

    return 0;
}
