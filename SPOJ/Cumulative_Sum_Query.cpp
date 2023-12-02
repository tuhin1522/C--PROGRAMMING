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
vector<int>pf(N);
vector<int>a(N);


int main() {
    Faster;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    pf[0]=a[0];
    for(int i=1;i<n;i++){
        pf[i] = pf[i-1] + a[i];

    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(l==0){
            cout<<pf[r]<<endl;
        }
        else
            cout<<pf[r]-pf[l-1]<<endl;
    }
}