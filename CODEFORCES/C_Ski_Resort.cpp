#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        int a[n];
        ll cnt=0,ans=0,x;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>q){
                if(cnt>=k){
                    x = cnt-k+1;
                    ans += (x*(x+1))/2;
                }
                cnt=0;
            }
            else cnt++;
        }
        if(cnt>=k){
            x = cnt-k+1;
            ans += (x*(x+1))/2;
        }
        cout<<ans<<endl;
    }
}
    