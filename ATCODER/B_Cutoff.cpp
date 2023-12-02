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
    int n, x;
    cin>>n>>x;

    vector<int> a(n-1);
    for (int i=0;i<n-1;i++) {
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    int mn= -1;

    for (int i=0;i<=100;i++) {
        vector<int> b = a;
        b.push_back(i);

        sort(b.begin(), b.end());

        int f = 0;
        for (int i = 1; i < n - 1; i++) {
            f += b[i];
        }

        if (f >= x) {
            mn = i;
            break;
        }
    }

    cout << mn << endl;

    return 0;
}
