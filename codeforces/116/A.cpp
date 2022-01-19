#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    

    vector <pair<int,int>> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        /* code */
        int p,q;
        cin>>p>>q;
        v.push_back(make_pair(p,q));
    }
    // for (int i = 0; i < 4; ++i)
    // {
    //     /* code */
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    int ans[n];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        if(i==0)
        {
            ans[i]=v[0].second;
        }
        else
        {
            ans[i]=ans[i-1]-(v[i].first)+(v[i].second);
        }
        
    }
    int p = ans[0];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        p = max(p,ans[i]);
    }
    cout<<p;

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