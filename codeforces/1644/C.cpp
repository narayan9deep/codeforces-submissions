#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define pny cout<<"YES\n"
#define pnn cout<<"NO\n"
#define pb push_back
#define pna cout<<"a"
#define pnb cout<<"b"
#define pnc cout<<"c"
typedef long long int lli;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int k[n+1]={0};
        for(int l=1;l<=n;l++){
                
                int sum=0;
                for(int i=0;i<l;i++){
                    sum+=a[i];
                }
                int msum=sum;
                for(int i=1;i<=n-l;i++){
                    sum=(sum-a[i-1]+a[i+l-1]);
                    
                    if(sum>msum){
                        msum=sum;
                    } 
                    
                    
                }
                
                for(int i=0;i<=n;i++){
                    k[i]=max(k[i],msum+min(l,i)*x);
                }
        }
        for(int i=0;i<=n;i++){
            cout<<k[i]<<" ";
        }
        cout<<endl;
    }   
    
}





    
    

