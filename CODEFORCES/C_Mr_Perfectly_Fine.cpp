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
#define FOR(i,a,b) for (int i = a; i <= b; i++)


void solve() {
    int n;
    cin >> n;
    vector<pair<int,string>> mp;
    for(int i = 0; i < n; i++) {
        int x;
        string y;
        cin >> x >> y;
        mp.push_back(make_pair(x,y));
    }
    
    vector<int> a, b, c;
    sort(mp.begin(), mp.end());
    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second[0] == '0' && it->second[1] == '1') {
            a.push_back(it->first);
        }
        if (it->second[0] == '1' && it->second[1] == '0') {
            b.push_back(it->first);
        }
        if (it->second[0] == '1' && it->second[1] == '1') {
            c.push_back(it->first);
        }
    }
    
    int ans = LLONG_MAX;
    if (!a.empty() && !b.empty()) {
        ans = min(ans, a[0] + b[0]);
    }
    if (!c.empty()) {
        ans = min(ans, c[0]);
    }
    
    if (ans == LLONG_MAX) {
        cout << "-1" << endl;
    } else {
        cout << ans << endl;
    }
}

int32_t main()
{
    Faster;
    int t; 
    cin>>t; 
    while(t--) solve();

    return 0;
}
