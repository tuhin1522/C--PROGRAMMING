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
        int l,r;
        int count1=0,count2=0;
        for (int i = 0; i < n; i++)
        {
            
            cin>>l>>r;
            if(l==k){
                count1++;
            }if(r==k) count2++;
        }
        if(count1>0 && count2>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}