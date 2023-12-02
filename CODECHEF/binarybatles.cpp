#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,z=0;
        cin>>n>>a>>b;
        while(n>1){
            z++;
            n = n/2;
        }
        ll x = z*a;
        ll y = (z-1)*b;
        cout<<(x+y)<<endl;
    }
}