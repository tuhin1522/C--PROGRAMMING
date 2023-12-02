#include <bits/stdc++.h>
using namespace std;
const int N = (int) 80;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
    int n;
    cin>>n;
    int f=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if((i*3+j*5+k*7)==n && f==0){
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    f=1;
                    break;
                    return;
                }
            }
        }
    }
    if(f==0)
        cout<<-1<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}