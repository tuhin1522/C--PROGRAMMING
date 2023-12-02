#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long int
set<ll> st;

void solve(){
    ll n,k;
    cin>>n>>k;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            st.insert(i);
            st.insert(n/i);
        }
    }
    if(st.size()<k){
        cout<<-1<<endl;
        return;
    }
    ll i=1;
    ll ans=0;
    for(auto it = st.begin();it!=st.end();it++){
        if(i==k){
            ans=(*it);
            break;
        }
        i++;
    }
    cout<<ans<<endl;

}


int main()
{  
    solve(); 
}