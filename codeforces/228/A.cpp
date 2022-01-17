#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll int n = 4;
    ll int arr[4];
    for (ll int i = 0; i < 4; ++i)
    {
        /* code */
        cin>>arr[i];
    }
    ll int ans = 1;
    sort(arr,arr+n);
    for (ll int i = 1; i < 4; ++i)
    {
        /* code */
        if (arr[i-1]==arr[i])
        {
            /* code */
            ans++;
        }
    }
    // if((ans-1)==0)
    // {
    //     cout<<1;
    // }
    // else
    // {
    cout<<ans-1;
    
    return 0;
}



// Submission by: Deep Narayan
// Codeforces Profile: https://codeforces.com/profile/narayan9deep
// Codechef Profile: https://www.codechef.com/users/narayan9deep