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
    int t; 
    cin >> t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        auto it = unique(a.begin(),a.end());
        a.resize(distance(a.begin(), it));
        
        for (it = a.begin(); it!=a.end(); ++it){
            if(*it==k){
                cout<<"YES"<<endl;
            }
            else cnt++;
        }
        if(cnt==a.size()) cout<<"NO"<<endl; 
    }
	return 0;
}
