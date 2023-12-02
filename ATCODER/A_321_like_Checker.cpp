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
    int n;
    cin>>n;
    string s = to_string(n);
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>s[i+1]){
            cnt++;
        }
    }
    if(cnt==s.size()){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
	return 0;
}
