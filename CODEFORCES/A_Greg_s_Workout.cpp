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



void solve()
{
    int n;
    cin>>n;
    vi a(n),b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int chest=0;
    for(int i=0;i<n;i+=3){
        chest += a[i];
    }
    b.push_back(chest);
    int biceps=0;
    for(int i=1;i<n;i+=3){
        biceps += a[i];
    }
    b.push_back(biceps);
    int back=0;
    for(int i=2;i<n;i+=3){
        back += a[i];
    }
    b.push_back(back);
    // for(int i=0;i<size(b);i++){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;

    int mx=b[0];
    int ans = 0;
    for(int i=1;i<size(b);i++){
        if(mx<b[i]){
            mx=b[i];
            ans = i;
        }
    }
    if(ans == 0){
        cout<<"chest"<<endl;
    }
    else if(ans == 1){
        cout<<"biceps"<<endl;
    }
    else{
        cout<<"back"<<endl;
    }
}
int32_t main()
{
    Faster;
    solve();

    return 0;
}
