#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d,ans,z;
        cin>>a>>b>>c>>d;
        ans=b;
        if(a>b){
            if(c<=d){
                ans=-1;
            }
            else{
                ll x=a-b;
                ll y=c-d;
                if(x%y==0){
                    z=x/y;
                }
                else{
                    z=x/y+1;
                }
                ans=ans+z*c;
            }
        }
        cout<<ans<<endl;
    }
}