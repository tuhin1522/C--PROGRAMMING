#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    Faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count0=0,countx=0,count1=0;
        bool x=false;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count0++;
            }
            else if(a[i]==1) count1++;
            else{
                x=true;
            }
        }
        if(count0<=((n+1)/2)) cout<<0<<endl;
        else if(x || count0==n) cout<<1<<endl;
        else cout<<2<<endl;

    }
}