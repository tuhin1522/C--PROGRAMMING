#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int p[n];
        for (int i = 0; i < n; i++){
            cin >> p[i];
        }
        int cnt=1;
        for (int i = 0; i < n; i++) {
            if (p[i] == cnt){
                cnt++;
            }
        }
        cout << (n-cnt+k)/k  << endl;
    }
}
    