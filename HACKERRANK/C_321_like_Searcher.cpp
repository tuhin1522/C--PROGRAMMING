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

bool solve(int n){
    string s = to_string(n);
    int cnt=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]>s[i+1]){
            cnt++;
        }
    }
    if(cnt==s.size()-1){
        return true;
    }
    else return false;
}

int main() {
    Faster;
    ll n;
    cin>>n;
    //string s = to_string(n);
    vector<ll> a;
    int cnt=0;
    for(int i=1;i<=N;i++){
        if(solve(i)==true){
            a.push_back(i);
            
        }
        
    }
    cout<<a[n-1]<<endl;
	return 0;
}
