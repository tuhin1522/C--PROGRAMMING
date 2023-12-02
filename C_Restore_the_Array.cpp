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
        int n;
        cin>>n;
        vector<int>a(n-1);
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        if(n==2){
            cout<<a[0]<<" "<<a[0]<<endl;
        }
        else{
            cout<<a[0]<<" ";
            for(int i=0;i<n-2;i++){
                int x = min(a[i],a[i+1]);
                cout<<x<<" ";
            }
            cout<<a[n-2]<<endl;
        }
    }
	return 0;
}
