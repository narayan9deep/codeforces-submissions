#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    char a[n];
    cin>>a;
    // sort(a,a+n);
    // cout<<a<<endl;
    int ans=0;
    for (int i = 1; a[i]!='\0'; ++i)
    {
        /* code */
        if (a[i-1]==a[i])
        {
            /* code */
            ans++;
        }
    }

    cout<<ans;
    return 0;
}



// Submission by: Deep Narayan
// Codeforces Profile: https://codeforces.com/profile/narayan9deep
// Codechef Profile: https://www.codechef.com/users/narayan9deep