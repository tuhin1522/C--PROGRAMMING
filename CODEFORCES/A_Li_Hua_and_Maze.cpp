#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--){
        ll n,m; 
        cin>>n>>m;
        ll a,b,c,d; 
        cin>>a>>b>>c>>d;
        if(((a==1||a==n) && (b==1||b==m)) ||((c==1||c==n) && (d==1||d==m))){
            cout<<2<<endl;
        }
        else if((a==1 || a==n) || (b==1 || b==m) || (c==1 || c==n) || (d==1 || d==m)){
            cout<<3<<endl;
        }
        else{
            cout<<4<<endl;
        }
    }
}