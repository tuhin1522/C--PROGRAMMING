#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll power(ll base,ll n,ll m)
{
    ll result=1;
    while(n)
    {
        if(n%2==1){
            result = (result*base)%m;
            n--;
        }
        else{
            base = (base*base)%m;
            n = n/2;
        }
    }
    return result;
}

int main()
{
    ll n;     cin>>n;
    ll x = power(8,n,10);
    cout<<x<<endl;
}
