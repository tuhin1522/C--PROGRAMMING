#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    
    ll t;cin>>t;
    while(t--){
        priority_queue<ll,vector<ll>,greater<ll>>q;
        ll n;cin>>n;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            q.push(x);
        }
        long long sum=0;
        while(q.size()>1){
            long long a = q.top();
            q.pop();
            long long b = q.top();
            q.pop();
            long long r = a+b;
            
            sum += r; 
            q.push(r);
            //if(q.size()==1) break;
            
        }
        cout<<sum<<endl;
    }
}