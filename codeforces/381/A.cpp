#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cin>>arr[i];
    }
    int s = 0;
    int d = 0;
    
    int i = 0;
    int j = n-1;
    while(i<=j)
    {
        if(arr[i]>arr[j])
        {
            s+=arr[i];
            i++;
        }
        else if(arr[i]<arr[j])
        {
            s+=arr[j];
            j--;
        }
        else if(arr[i]==arr[j])
        {
            s+=arr[j];
            break;
        }



        if(arr[i]>arr[j])
        {
            d+=arr[i];
            i++;
        }
        else if(arr[i]<arr[j])
        {
            d+=arr[j];
            j--;
        }
        else if(arr[i]==arr[j])
        {
            d+=arr[j];
            break;
        }
    }

    cout<<s<<" "<<d;

    return 0;
}



// Submission by: Deep Narayan
// Codeforces Profile: https://codeforces.com/profile/narayan9deep
// Codechef Profile: https://www.codechef.com/users/narayan9deep