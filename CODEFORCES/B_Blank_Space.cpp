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
        int n;
        cin>>n;
        int a[n];
        int mx= 0, cnt= 0;
        for(int i=0; i<n; i++) {
 
            cin>>a[i];
            if(a[i]==1){
                cnt= 0;
            }
            else {
                cnt++;
                mx= max(mx, cnt);
            }
        }
        cout<<mx<<"\n";
    }
}