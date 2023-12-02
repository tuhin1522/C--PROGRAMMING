#include<bits/stdc++.h>
using  namespace  std;
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;


ll power(ll base,ll n)
{
    ll result=1;
    while(n)
    {
        if(n%2==1)
        {
            result*=base;
            n--;
        }
        else
        {
            base*=base;
            n/=2;
        }
    }
    return result;
}

ll primefact(int n)
{
    ll res=1;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i == 0)
            {
                cnt++;
                n=n/i;
            }
            res*=((power(i,cnt+1)-1)/(i-1));
        }
    }
    if(n>1)
    {
        res*=((power(n,2)-1)/(n-1));
    }

    return res;
}


int main()
{
    faster;
    int t;
    cin>>t;
    while(t--)
    {
        ll x,a,b;
        cin>>x>>a>>b;
        ll n =x*b;
        if(n%a==0 && primefact(n/a)==x)cout<<n/a<<endl;
        else cout<<-1<<endl;
    }
}

