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
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>a;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            x-=i;
            v[i]=a[x];
            a[x]++;
        }
        ll cnt=0;
        for(int i=0; i<n; i++){
            cnt+=v[i];
        }    
        cout<<cnt<<endl;
    }
}
