#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cin>>arr[i];
    }
    int max_element = arr[0];
    int min_element = arr[0];

    int amazing = 0;

    for (int i = 1; i < n; ++i)
    {
        /* code */
        max_element = max(arr[i-1],max_element);
        min_element = min(arr[i-1],min_element);

        if(arr[i]>max_element || arr[i]<min_element)
        {
            amazing++;
        }
    }

    cout<<amazing;


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