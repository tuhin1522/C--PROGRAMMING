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
        ll n,ans;
        cin>>n;
        for(ll i=2;i<30;i++){
            ll x = (1<<i)-1;
            if(n%x==0){
                ans = n/x;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
    