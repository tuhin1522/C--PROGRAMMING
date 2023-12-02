#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define endl '\n'
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
        vector<int>b,c;
        for(int i=0;i<n;i++){
            if(a[i]%2==0) b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        vector<int>ans;
        for(int i=0;i<b.size();i++){
            ans.push_back(b[i]);
        }
        for(int i=0;i<c.size();i++){
            ans.push_back(c[i]);
        }
        int cnt=0;
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                if(__gcd(ans[i],2*ans[j])>1){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
	return 0;
}
