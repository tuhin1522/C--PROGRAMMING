#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;  cin>>t;
	ll c=1;
	while (t--)
	{

		ll n,k;
		cin>>n>>k;
		ll t[n];
		for(ll i=0; i<n; i++)
		{
			cin>>t[i];
		}
		int sum=0;
		int suma[n];
		int sum2[n];
		for(ll i=0; i<n; i++)
		{
			sum += t[i];
			suma[i]=sum;
		}
		if(k==1)
		{
			cout<<"Case "<<c<<": "<<suma[n-1]<<endl;
		}
		else if(k==2)
		{
			sum2[0]=suma[0]+t[0];
			for(ll i=0;i<n-1; i++)
			{
				if(suma[i+1]>sum2[i])
				{
					sum2[i+1]=suma[i+1]+t[i+1];
				}
				else
				{
					sum2[i+1]=sum2[i]+t[i+1];
				}
			}
			cout<<"Case "<<c<<": "<<sum2[n-1]<<endl;
		}
		else
		{
			sum2[0]=suma[0]+t[0];
			for(ll i=0;i<n-1; i++)
			{
				if(suma[i+1]>sum2[i])
				{
					sum2[i+1]=suma[i+1]+t[i+1];
				}
				else
				{
					sum2[i+1]=sum2[i]+t[i+1];
				}
			}
			ll diff=sum2[n-1]-suma[n-1];
			ll ans=suma[n-1]+(k-1)*diff;
			cout<<"Case "<<c<<": "<<ans<<endl;

		}
		c++;
	}
	
}
