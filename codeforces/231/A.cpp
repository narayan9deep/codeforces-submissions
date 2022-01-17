#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int ans = 0;
    cin>>n;
    while(n--)
    {
        int arr[3];
        for (int i = 0; i < 3; ++i)
        {
            /* code */
            cin>>arr[i];
        }
        int sum = 0;
        for (int i = 0; i < 3; ++i)
        {
            /* code */
            if (arr[i]==1)
            {
                /* code */
                sum++;
            }
        }
        if (sum>=2)
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