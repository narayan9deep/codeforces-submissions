#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int awon=0, dwon=0;
    for (int i = 0; i < s.length(); ++i)
    {
        /* code */
        if(s[i]=='A')
        {
            awon++;
        }
        else if(s[i]=='D')
        {
            dwon++;

        }
    }

    if(awon>dwon)
    {
        cout<<"Anton";
    }
    else if(awon==dwon)
    {
        cout<<"Friendship";
    }
    else
    {
        cout<<"Danik";
    }
 

    return 0;
}