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
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        sort(a.begin(),a.end());
        a[0] = a[0]+1;
        ll sum=1;
        for(int i=0;i<n;i++){
            sum *= a[i];
        }
        cout<<sum<<endl;
    }
	return 0;
}
