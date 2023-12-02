#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    ll n; 
    cin >> n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll cnt=0;
    ll mx = a[0];
    for(ll i=1;i<n;i++){
        if(mx<=a[i]){
            mx=a[i];
        }
        else{
            cnt += mx-a[i];
        }
    }
    cout<<cnt<<endl;
	return 0;
}
