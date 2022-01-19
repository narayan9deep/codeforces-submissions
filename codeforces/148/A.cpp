#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int damage= 0;
    int i;
    for (i = 1; i <= d; i++)
    {
        /* code */


   
        if((i%k==0)||(i%l==0)||(i%m==0)||(i%n==0))
        {

            damage++;
            
        }

    }
    // if(damage==0)
    // {
    //     damage++;
    // }
    cout<<damage;
    
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
