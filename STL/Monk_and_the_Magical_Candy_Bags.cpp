#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        long long n,m;    cin>>n>>m;
        multiset<long long>s;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            s.insert(x);
        }
        long long ans=0;
        for(long long i=0;i<m;i++){
            auto it = --s.end();
            long long y = *it;
            ans += y;
            s.erase(it);
            s.insert(y/2);
        }
        cout<<ans<<endl;
    }
}
