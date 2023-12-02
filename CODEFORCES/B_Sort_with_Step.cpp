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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(is_sorted(a,a+n)) cout<<0<<endl;
        else{
            int count=0;
            for(int i=0;i<n;i++){
                int s = abs(a[i]-(i+1));
                if(s%k!=0) count++;
            }
            if(count==0) cout<<0<<endl;
            else if(count==2) cout<<1<<endl;
            else cout<<-1<<endl;
        }
    }
        
}