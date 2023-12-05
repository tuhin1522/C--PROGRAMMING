#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;

#define ll long long int
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define range(start,end) for(ll i=(ll)(start);i<(ll)(end);i++)

int main() {
    Faster;
    int t; 
    cin >> t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        vi a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll l=1;
        ll r=1e10;
        while(l<r-1){
            ll w=0;
            ll mid = l+(r-l)/2;
            for(ll i=0;i<n;i++){
                if(a[i]<mid){
                    w += (mid-a[i]);
                }
            }
            if(w>x){
                r=mid;
            }
            else{
                l=mid;
            }
        }
        cout<<l<<endl;

    }
	return 0;
}
