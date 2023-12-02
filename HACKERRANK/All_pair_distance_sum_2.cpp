#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll sum = 0;
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++) {
        sum += (i * v[i]) - ((n-i-1) * v[i]);
    }
    cout << sum << endl;
    return 0;
}