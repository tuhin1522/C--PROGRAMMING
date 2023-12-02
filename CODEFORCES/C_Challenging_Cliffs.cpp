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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int mn = INT_MAX;
        int r,l;
        for(int i=0;i<n-1;i++){
            if(v[i+1]-v[i]<mn){
                mn=v[i+1]-v[i];
                l=i;
                r=i+1;
            }
        }
        if(n==2) cout<<v[0]<<" "<<v[1]<<endl;
        else{
            for(int i=r;i<n;i++){
                cout<<v[i]<<" ";
            }
            for(int i=0;i<=l;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}
