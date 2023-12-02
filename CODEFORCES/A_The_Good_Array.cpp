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
        int n,k;
        cin>>n>>k;
        int ans = n;
        for(int i=1;i<=n;i++){
            int a = (i+k-2)/k;
            int b = (n+k-i-1)/k;
            ans = min(ans,(a+b));
        }
        cout<<ans+1<<endl;
    }
}