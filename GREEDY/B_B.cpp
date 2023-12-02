#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    Faster;
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    ll ans=0;
    for (int i = 0; i < n; i++) {
        ans += (ll)(pow(2, i)*a[i]);
    }
    
    cout<<ans<<endl;
}
