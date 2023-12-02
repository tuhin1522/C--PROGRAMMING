#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll m = 0;
        
        ll fact=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0){
                fact=1;
                m=a[i];
            } 
        }
        if(fact==1){
            cout<<m<<endl;
        }else{
            sort(a,a+n);
            cout<<a[n-1]<<endl;
        }
        
        
    }
}