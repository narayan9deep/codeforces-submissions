#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char a[1000];
    cin>>a;
    if (!(a[0]>='A' && a[0]<='Z'))
    {
        /* code */
        a[0] = a[0]-32;
    }
    cout<<a;
    return 0;
}



// Submission by: Deep Narayan
// Codeforces Profile: https://codeforces.com/profile/narayan9deep
// Codechef Profile: https://www.codechef.com/users/narayan9deep