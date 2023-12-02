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
ll fact[N];
int main() {
    Faster;
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]= fact[i-1]*i;
    }
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string s = to_string(fact[n]);
        cout<<s<<endl;
    }
	return 0;
}
