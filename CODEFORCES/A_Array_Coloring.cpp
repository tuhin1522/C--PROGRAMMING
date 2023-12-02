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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll sume=0,sumo=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sume += a[i];
            }
            else{
                sumo += a[i];
            }
        }
        if((sume%2==0 && sumo%2==0) || (sume%2!=0 && sumo%2!=0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
          
    }
}
