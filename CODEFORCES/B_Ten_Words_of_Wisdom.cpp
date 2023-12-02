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
        int mx=0,ans;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;


            if(a<=10){
                if(b>mx){
                    mx=b;
                    ans=i;
                }
            }
        }
        cout<<ans+1<<endl;
        
    }
}