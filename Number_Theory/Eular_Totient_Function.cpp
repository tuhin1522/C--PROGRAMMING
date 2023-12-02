#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void Totientfact(ll n)
{
	ll ans = n;
    for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i == 0)
			{
				n=n/i;
			}
			ans *= i-1;
            ans /= i;
		}
	}
	if(n>1){
        ans *= n-1;
        ans /= n; 
    }
    cout<<ans<<endl;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Totientfact(n);
	}
	return 0;
}
 