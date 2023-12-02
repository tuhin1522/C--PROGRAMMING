#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll power(ll base,ll p){
    ll ans=1;
    while(p){
        if(p%2==1){
            ans = (ans*base)%mod;
            p--;
        }else{
            base = (base*base)%mod;
            p /=2;
        }
    }
    return ans%mod;
}

ll fact(ll n)
{
    ll ans=1;
    for(ll i=2;i<=n;i++){
        ans = (ans*i)%mod;
    }
    return ans%mod;
}

ll nCr(ll n1,ll r1,ll k){
    ll ans,ans1,ans2;
    ans1 = power(r1,mod-2);
    ans2 = power(k,mod-2);
    ans= (ans*ans1)%mod;
    ans=(ans*ans2)%mod;
    return ans%mod;
}

int main()
{
    ll n,r;
    cin>>n>>r;
    ll n1 = fact(n);
    ll r1=fact(r);
    ll k = fact(n-r);
    ll ans = nCr(n1,r1,k);
    cout<<ans<<endl;
}