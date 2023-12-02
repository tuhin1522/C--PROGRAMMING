#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void primefact(int n)
{
	int count=0;
    for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
            while(n%i == 0)
			{
				n=n/i;
			}
		}
	}
	if(n>1) count++;

    cout<<count<<endl;
}
int main()
{
	int t;
	while(cin>>t)
	{
		
		if(t==0) break;
        cout<<t<<" : ";
		primefact(t);
	}
	return 0;
}
 