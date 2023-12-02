#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll N=1e5;
vector<ll> prime,a[N+1];
bool p[N+1];
 
void divCount(ll n){
    ll temp=n;
    ll ans=1;
    for(ll i=0;i<prime.size() && prime[i]*prime[i]<=n;i++){
        ll count=0;
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                count++;  
                n/=prime[i];   
            }
            ans=ans*(2*count+1);     
        }
    }
 
    if(n>1){
        ans=ans*3;
    }
    a[ans].push_back(temp*temp);
     
}

void SieveOfEratosthenes()
{
    for(int i=2;i*i<=N;i++){
        if(p[i]==0){
            for(int j=i*i;j<=N;j+=i){
                p[j]=1;
            }
        }
    }
    for(int i=2;i<=N;i++){
        if(p[i]==0){
            prime.push_back(i);
        }
    }
    cout<<endl;
}
int main(){
    optimize();
    SieveOfEratosthenes();
    for(ll i=1;i<=N;i++){
        divCount(i);
    }
    
    ll t;
    scanf("%lld",&t);
    while(t--){
        ll k,l,r;
        scanf("%lld%lld%lld",&k,&l,&r);
        ll x =lower_bound(a[k].begin(),a[k].end(),l)-a[k].begin();
        ll y=upper_bound(a[k].begin(),a[k].end(),r)-a[k].begin();

        printf("%lld\n",y-x);
 
    }
}