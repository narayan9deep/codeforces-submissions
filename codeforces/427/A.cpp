#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cin>>arr[i];
    }
    int temp = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        /* code */
        temp+=arr[i];
        if (temp<0)
        {
            /* code */
            ans++;
            temp=0;
        }

    }
    cout<<ans;

    return 0;
}



// Submission by: Deep Narayan
// Codeforces Profile: https://codeforces.com/profile/narayan9deep
// Codechef Profile: https://www.codechef.com/users/narayan9deep