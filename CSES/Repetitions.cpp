#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    string s;
    cin>>s;
    int cnt=1,ans=0;
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]){
            ans=max(ans,cnt);
            cnt=1;
        }
        else{
            cnt+=1;
        }
    }
    ans=max(ans,cnt);
    cout<<ans<<endl;
    
}
