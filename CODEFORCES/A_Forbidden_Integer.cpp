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
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>v;
        for(int i=1;i<=k;i++){
            if(i!=x){
                v.push_back(i);
            } 
        }
        int count=0;
        for(int i=0;i<k-1;i++){
            cout<<v[i]<<" ";
        }
        if(x==1 && k==1){
            cout<<"NO"<<endl;
        }
        else if(x==1 && k>1){
            if(n%2==0){
                for(int i=0;i<n/2;i++){
                    cout<<2<<endl;
                }
            }
            else{
                for(int i=0;i<n;i++){
                    cout<<1<<endl;
                }
            }
            
        }
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<endl;
            }
        }
    }
}