#include <bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nline "\n"

using namespace std;

void solve()
{
    int n;
    cin>>n;
    char arr[n];
    int a=0,d=0;
    for(int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
        if(arr[i]=='A') a++;
        else if(arr[i]=='D') d++;
    }
    if(a>d)
    {
        cout<<"Anton"<<nline;
    }  
    else
    {
        if(a<d)
        {
            cout<<"Danik"<<nline;
        }   
        else
        {
            cout<<"Friendship"<<nline;
        }
    }
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