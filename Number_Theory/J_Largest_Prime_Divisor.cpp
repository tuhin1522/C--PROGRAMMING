#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
vector<ll>v;

void primefact(ll n)
{
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i == 0)
			{
				n=n/i;
			}
			v.push_back(i);
		}
	}
	if(n>1)v.push_back(n);
}
int main()
{
	ll n;
	while(1)
	{
		cin>>n;
        if(n==0) break;
        if (n < 0) n *= -1;
		primefact(n);
        if(v.size()<2){
            cout<<-1<<endl;
        }
        else{
            cout<<v.back()<<endl;
        }
        v.clear();
	}
	return 0;
}
 