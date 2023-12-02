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
      int n;               cin>>n;
      string s;
      cin>>s;
      int ans,alice=0,bob=0;
      if(s[0]=='A') alice=1;
      else alice=0;
      for(int i=0;i<n;i++){
         if(s[i]=='A'&& s[i+1]=='A'){
            alice++;
         }
         else if(s[i]=='B'&& s[i+1]=='B'){
            bob++;
         }
      }
      cout<<alice<<" "<<bob<<endl;

   }
   return 0;
}
