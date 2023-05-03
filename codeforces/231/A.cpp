#include <bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nline "\n"

using namespace std;

void solve()
{
    int n;
    int ans = 0;
    cin>>n;
    while(n--)
    {
        int arr[3];
        for (int i = 0; i < 3; ++i)
        {
            cin>>arr[i];
        }
        int sum = 0;
        for (int i = 0; i < 3; ++i)
        {
            if (arr[i]==1)
            {
                sum++;
            }
        }
        if (sum>=2)
        {
            ans++;
        }
    }
    cout<<ans<<nline;
    return;
}

int main()
{
	fastio();
	#ifndef ONLINE_JUDGE
		freopen("input.txt",  "r",  stdin);
		freopen("output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
	#endif
	clock_t z = clock();

	//write code here:

        // //if number of testcases present:
        //     //input number of test cases:
        //     int tc;
        //     cin>>tc;
        //     while(tc--)
        //     {
        //         solve();
        //     }

        //if number of testcases not present
        solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	
	return 0;
}