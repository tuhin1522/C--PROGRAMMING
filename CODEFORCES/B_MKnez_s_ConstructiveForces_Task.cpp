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
        int n;
        cin>>n;
        if(n==3) cout<<"NO"<<endl;
        else{
            if(n%2==0){
                cout<<"YES"<<endl;
                for(int i=1;i<=n;i++){
                    if(i%2==1) cout<<1<<" ";
                    else cout<<-1<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"YES"<<endl;
                int k = (n-1)/2;
                for(int i=1;i<=n;i++){
                    if(i%2==1) cout<<k-1<<" ";
                    else cout<<-k<<" ";
                }
                cout<<endl;
            }
        }
    }
}