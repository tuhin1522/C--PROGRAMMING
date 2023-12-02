#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define float long double


int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<int>v(n);
        float sum=0;
        float s=0;
        for(int i=0;i<n;i++){
            cin>>v[i],sum += v[i],s += (v[i])*(v[i]);
        }
        ll sq= (ll)sqrtl(16*sum*sum + 16*n*(c-s));
        ll d=(8*n);
        ll w=(ll)(-4*sum + sq)/d;
        cout<<w<<endl;
    }  
}