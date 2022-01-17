#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h;
    cin>>n>>h;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        cin>>arr[i];
    }
    int width = 0;
    for (int i = 0; i < n; ++i)
    {
        /* code */
        if(arr[i]>h)
        {
            width=width+2;
        }
        else
        {
            width = width+1;
        }
    }
    cout<<width;
 

    return 0;
}