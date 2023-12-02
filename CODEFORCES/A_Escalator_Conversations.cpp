#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--){
        int n,m,k,h;
        int ans=0;
        cin>>n>>m>>k>>h;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int x=abs(h-a[i]);
            if(x%k==0){
                if((x/k)<m && x/k!=0){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    
}