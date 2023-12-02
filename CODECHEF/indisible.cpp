#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,sum=0,sum1=0;
        cin>>n>>x>>y;
        ll a = (n*(n+1))/2;
        ll b = n/x;
        ll c = x * (b*(b+1))/2;
        ll d = n/y;
        ll e = y* (d*(d+1))/2;
        if(y%x==0)
        {
            cout<<a - c<<'\n';
        }
        else{
            cout<<a - c - e <<'\n';
        }
    }
}

