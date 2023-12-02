#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
   int t;                  cin>>t;
   while(t--){
        int n,k;               cin>>n>>k;
        vector<int>v;
        if(n%k!=0) cout<<1<<endl<<n<<endl;
        else{
            cout<<2<<endl;
            cout<<1<<" "<<n-1<<endl;
            
        }
   }
   return 0;
}