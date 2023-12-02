#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = n * (n - 1) / 2;
        vector<int> a(x);
        for (int i = 0; i < x; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        a.resize(unique(a.begin(), a.end()) - a.begin());
        cout << a.size() << endl;
        for (int i : a) {
            cout << i << ' ';
        }
        cout << endl;
    }
}
