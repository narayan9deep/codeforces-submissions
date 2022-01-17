#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 100;
    char a[n], b[n];
    cin>>a>>b;
    int i = 0;
    for (i=0; a[i]!='\0'; ++i)
    {
        /* code */
        if(a[i]>='A' && a[i]<='Z')
        {
           a[i]=a[i]+32; 
        }  
    }
    // cout<<a<<endl;
    i = 0;
    for (i=0; b[i]!='\0'; ++i)
    {
        /* code */
        if(b[i]>='A' && b[i]<='Z')
        {
           b[i]=b[i]+32; 
        }  
    }
    // cout<<b;

    int ans = 0;

    for (i=0; b[i]!='\0'; ++i)
    {
        /* code */
        if(a[i]!=b[i])
        {
            if(a[i]>b[i])
            {
                ans = 1;
                break;
            }
            else
            {
                ans = -1;
                break;
            }
        }

    }
    cout<<ans;
    
    return 0;
}



// Submission by: Deep Narayan
// Codeforces Profile: https://codeforces.com/profile/narayan9deep
// Codechef Profile: https://www.codechef.com/users/narayan9deep