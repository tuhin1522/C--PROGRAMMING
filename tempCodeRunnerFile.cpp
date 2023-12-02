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
        ll n,k,ans;
        cin>>n>>k;
        if(n%2==0){
            ans = n + 2*k;
            cout<<ans<<endl;
        }else{
            ans = 2*n+2*(k-1);
            cout<<ans<<endl;
        }
    }
}