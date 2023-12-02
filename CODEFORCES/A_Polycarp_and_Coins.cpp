#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        if(n%3==0){
            cout<<n/3<<" "<<n/3<<endl;
        }
        else{
            int div = n/3;
            int a = n-3*div;
            if(a%2==0){
                cout<<div<<" "<<div+(a/2)<<endl;
            }else cout<<div+a<<" "<<div<<endl;
        }
    }
	return 0;
}
