#include <bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nline "\n"

using namespace std;

void solve()
{
    int n,h;
    cin>>n>>h;
    int ans = 0;
    int arr[n];
    for (int i = 0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=h) ans+=1;
        else ans+=2;
    }
    cout<<ans;
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

    #ifndef ONLINE_JUDGE
		cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	#endif
	
	return 0;
}