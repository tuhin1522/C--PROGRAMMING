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
        if(k>=n){
            cout<<k-n<<endl;
        }
        else{
            cout<<(n-k)%2<<endl;
        }
    }
}