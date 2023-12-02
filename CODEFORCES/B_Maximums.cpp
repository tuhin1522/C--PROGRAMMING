#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    int n;
    cin>>n;
    int b[n];
    int x=0;
    for(int i=0;i<n;i++){
        cin>>b[i];
        b[i] += x;
        x = max(x,b[i]);
        cout<<b[i]<<" ";
    }
    
    cout<<endl;
}
    