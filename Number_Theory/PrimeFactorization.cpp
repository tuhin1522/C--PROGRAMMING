#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;

#define ll long long int
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

vector<bool> marked;
vector<int> primes;

void sieve(int n){
   marked.assign(n+2,false);
   marked[1]=true;
   for(int i=2;i*i<=n;i++){
      if(marked[i])continue;
      for(int j=i*i;j<=n;j+=i){
         marked[j]=true;
      }
   }

   for(int i=2;i<=n;i++){
      if(!marked[i]){
         primes.push_back(i);
      }
   }
}



int main(){
   sieve(1000000);

   int x;
   cin>>x;

   vector<int> Pfactors;

   for(int i=0;primes[i]<=x;i++){
      while(x%primes[i]==0){
         x/=primes[i];
         Pfactors.push_back(primes[i]);
      }
   }

   for(auto i:Pfactors){
      cout<<i<<" ";
   }
   cout<<endl;
   
   return 0;
}
