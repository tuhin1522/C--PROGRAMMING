#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
const int MAX_N = 100000000;
bool prime[MAX_N + 1];
vector<ll> v;

void sieve() {
    prime[0] = prime[1] = true;
    for (int i = 2;i*i<=MAX_N;i++) {
        if (prime[i]==false) {
            for (int j=i*i;j<=MAX_N;j+=i) {
                prime[j] = true;
            }
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]==false) {
            v.push_back(i);
        }
    }
}

int main() {
    sieve();
    for (ll i = 1; i < MAX_N + 1; i += 100) {
        if (i - 1 < v.size()) {
            cout << v[i - 1] <<endl;
            
        }
    }
}