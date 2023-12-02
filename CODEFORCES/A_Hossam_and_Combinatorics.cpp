#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main(){
    Faster;
    ll t;                      
    cin>>t;
    while(t--){
        int n;                  
        cin>>n;
        vector<int> a(n);
        int mn=INT_MAX,mx=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        }
 
        ll mnC=0,mxC=0;
        for(ll i=0;i<n;i++){
            if(a[i]==mn){
                mnC++;
            }
            if(a[i]==mx){
                mxC++;
            }
        }
 
        ll ans;
        if(mn==mx){
            ans = (mnC*(mnC-1));
        }
        else{
            ans = 2LL*(mnC*(mxC));
        }
 
        cout<<ans<<endl;
    }
    return 0;
}