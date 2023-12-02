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
        string s;cin>>s;
        set<char>v;
        for(int i=0;i<s.size()/2;i++){
            v.insert(s[i]);
        }
        if(v.size()==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        v.clear();
    }
}
    