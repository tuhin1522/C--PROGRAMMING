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
        ll sum=0,sub=0;
        for(int i=0;i<n;i++){
            if(v[i]>0){
                sum = sum + v[i];
            }
            else{
                sub = sub + ((-1)*(v[i]));
            }
        }
        (sum>sub)?cout<<sum-sub<<endl:cout<<sub-sum<<endl;
    }
    
}