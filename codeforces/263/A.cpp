#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[5][5];

    for (int i = 0; i < 5; ++i)
    {
        /* code */
        for (int j = 0; j < 5; ++j)
        {
            /* code */
            cin>>arr[i][j];
        }
    }
    int steps = 0;

    int a,b;
    for (int i = 0; i < 5; ++i)
    {
        /* code */
        for (int j = 0; j < 5; ++j)
        {
            /* code */
            // cout<<arr[i][j]<<" ";
            if(arr[i][j]==1)
            {
                a=i;
                b=j;
                break;
            }
        }

        // cout<<endl;
    }
    // cout<<a<<" "<<b<<endl;

    if (a<2)
    {
        /* code */
        steps = steps + (2-a);
    }
    else if (a>2)
    {
        /* code */
        steps = steps + (a-2);
    }

    // cout<<a<<endl;

    if (b<2)
    {
        /* code */
        steps = steps + (2-b);
    }
    else if (b>2)
    {
        /* code */
        steps = steps + (b-2);
    }
    // cout<<b<<endl;
    cout<<steps;

    
    return 0;
}



// Submission by: Deep Narayan
// Codeforces Profile: https://codeforces.com/profile/narayan9deep
// Codechef Profile: https://www.codechef.com/users/narayan9deep