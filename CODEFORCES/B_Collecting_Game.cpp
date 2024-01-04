#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;

#define endl '\n'
#define pb push_back
#define int long long
#define intd long double
#define uint unsigned long long
//#define size(x) (int) x.size()
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



void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(arr.begin() + 1, arr.end());

    vector<int> nxt(n + 1);
    vector<int> sum(n + 1);
    vector<int> ans(n + 1);

    nxt[0] = sum[0] = 0;

    for (int i = 1; i <= n; i++) {
        if (nxt[i - 1] >= i) {
            nxt[i] = nxt[i - 1];
            sum[i] = sum[i - 1];
        } else {
            sum[i] = sum[i - 1] + arr[i].first;
            nxt[i] = i;

            while (nxt[i] + 1 <= n && sum[i] >= arr[nxt[i] + 1].first) {
                nxt[i]++;
                sum[i] += arr[nxt[i]].first;
            }
        }

        ans[arr[i].second] = nxt[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] - 1 << " ";
    }
    cout << endl;
}
int32_t main()
{
    Faster;
    int t; 
    cin>>t; 
    while(t--) solve();

    return 0;
}
