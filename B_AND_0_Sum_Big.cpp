#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;

#define endl '\n'
#define pb push_back
#define int long long
#define intd long double
#define uint unsigned long long
#define size(x) (int) x.size()
#define aint(x) (x).begin(), (x).end()

typedef vector<int> vi;
typedef vector<int> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<int, int> pint;
typedef vector<pii> vii;
typedef vector<pint> vint;
typedef double dl;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#define debugin(x) cerr << #x <<" "; _print(x); cerr << "; ";
#else
#define debug(x)
#define debugin(x)
#endif

void _print(int t) {cerr << t;}void _print(string t) {cerr << t;}void _print(char t) {cerr << t;}
void _print(intd t) {cerr << t;}void _print(double t) {cerr << t;}void _print(uint t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

//--------------------------- Combinator -------------------------//
int BinaryExponential(int x,int y){
    int res=1;
    while(y){
        if(y&1){
            res=(res*x)%mod;
        }
        y>>=1;
        x=(x*x)%mod;
    }
    return res;
}

int F[N+2];
void PreCalFacts(){
	int res=1;
	for(int i=1;i<=N;i++){
		res*=i;
		res%=mod;
		F[i]=res;
	}
}

int nCr(int n,int r){
	if(r>=n)return 0LL;
	int x=F[n];
	int y=(F[r]%mod*F[n-r]%mod)%mod;
	y = BinaryExponential(y,mod-2);
	int ans=(x%mod * y%mod)%mod;
	return ans;
}

int nPr(int n,int r){
	if(r>=n)return 0LL;
	int x=F[n];
	int y=(F[n-r]%mod)%mod;
	y = BinaryExponential(y,mod-2);
	int ans=(x%mod * y%mod)%mod;
	return ans;
    // int main(){
	// PreCalFacts();
	// while(t--){
	// 	cout<<nCr(n,r)<<endl;
	// }
}

void solve()
{
    int n,k;
    cin>>n>>k;
    cout<<BinaryExponential(n,k)<<endl;
}
int32_t main()
{
    Faster;
    int t = 1; 
    cin>>t; 
    while(t--) solve();

    return 0;
}
