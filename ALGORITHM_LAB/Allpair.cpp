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

#define inf INT_MAX
#define MAX 4

void solve(int n, double cost[MAX][MAX])
{
    double a[MAX][MAX];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = cost[i][j];
        }
    }

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j] = min(a[i][j],a[i][k]+a[k][j]);
            }
        }
    }
    cout<<"all pairs shortest : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==inf){
                cout<<"inf\t";
            }else{
                cout<<a[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
}
int32_t main()
{
    Faster;
    double cost[MAX][MAX] = {
        {0,5,inf,10},
        {inf,0,3,inf},
        {inf,inf,0,1},
        {inf,inf,inf,0}
    };
    int n = MAX;
    solve(n,cost);

    return 0;
}
