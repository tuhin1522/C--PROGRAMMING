#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=1;i<=n;i++){
        if(i!=a[i]){
            cout<<i<<endl;
            break;
        }
    }
}
