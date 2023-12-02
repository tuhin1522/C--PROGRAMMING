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

int main() {
    Faster;
    ll n;
    cin>>n;
    ll ans=0;
    for(int i=1;i<=1000;i++){
        if(n<pow(5,i)){
            break;
        }
        else{
            ans += n/pow(5,i);
        }
    }
    cout<<ans<<endl;
	return 0;
}
