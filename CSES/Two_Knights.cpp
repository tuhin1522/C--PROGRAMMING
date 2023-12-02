#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    int n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        ll ans = (((i*i)*((i*i)-1))/2) - 4*(i-1)*(i-2);
        cout<<ans<<endl;
    }
	return 0;
}
