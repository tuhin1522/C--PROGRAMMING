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
        n=2*n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cntE=0,cntO=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                cntE++;
            }
            else cntO++;
        }
        if(cntE==cntO){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
         
    }
	return 0;
}
