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
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]=i;
        }
        sort(a.begin(),a.end());
        int cnt=1;
        int index=m[a[0]];
        for(int i=1;i<n;i++){
            int x=m[a[i]];
            if(x!=index+1){
                cnt++;
            }
            index=x;
        }
        if(cnt<=k){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
	return 0;
}
