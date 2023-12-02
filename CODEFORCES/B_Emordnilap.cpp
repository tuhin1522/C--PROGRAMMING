#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define int long long
const int N =  1e5+5;
const int mod = 1000000007;
//#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

signed main() {
    Faster;
    vector<int>fact(N);
    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i] = fact[i-1]*i;
        fact[i] %= mod;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = n*(n-1)%mod;
        ans = (ans*fact[n])%mod;
        cout<<ans<<endl;
    }
}