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
        int n,m;
        cin>>n>>m;
        vector<string>s(n);
        string ans = "vika";
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int c=0,cn=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(s[j][i]==ans[c]){
                    c++;
                    break;
                }
            }
        }
        if(c>=4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
