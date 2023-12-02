#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        long long n,m;    cin>>n>>m;
        set<long long>s;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            s.insert(x);
        }
        
        for(int i=0;i<m;i++){
            long long x;
            cin>>x;
            long long a = s.size();
            s.insert(x);
            long long b = s.size();
            if(a!=b) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        
    }
}
