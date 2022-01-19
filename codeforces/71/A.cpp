#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;

        if (s.length()<=10)
        {
            /* code */
            cout<<s<<endl;
            
        }
        else
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }

    }

    return;
}   
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}


// Submission by: Deep Narayan
// Codeforces Profile: https://codeforces.com/profile/narayan9deep
// Codechef Profile: https://www.codechef.com/users/narayan9deep