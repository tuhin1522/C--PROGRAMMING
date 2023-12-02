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
        int n,m;
        cin>>n>>m;
        cout<<n<<m<<endl;
        if(n==1 && m==1) cout<<0<<endl;
        else if((n==2 && m==1) || (n==1 && m==2)) cout<<1<<endl;
        else if(n==1 || m==1) cout<<-1<<endl;
        else{
            
            int x=min(n,m);
            int y=max(n,m);
            int ans=2*(x-1);
            int a=y-x;
            if(a%2==0){
                ans += a*2;    
            }
            else{
                ans += a*2-1;
            }
            cout<<ans<<endl;
        }
    }
}