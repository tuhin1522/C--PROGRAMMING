#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 101
ll ar[N][N], I[N][N];
ll mod = 1000000007;

void mul(ll A[][N],ll B[][N],ll n)
{
    ll i,j,k;
    ll R[n+1][n+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            R[i][j]=0;
            for(k=1;k<=n;k++){
                ll x = (A[i][k]*B[k][j])%mod;
                R[i][j]= (R[i][j]+x)%mod;
            }
        }
    }
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			A[i][j]=R[i][j];
		}
	}
}

void power(ll A[][N], ll n, ll p)
{
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(i==j) I[i][j]=1;
            else I[i][j]=0;
        }
    }
    while(p)
    {
        if(p%2==1)
        {
            mul(I,A,n);
            p--;
        }
        else{
            mul(A,A,n);
            p /= 2;
        }
    }
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            A[i][j] = I[i][j];
        }
    }
}

int main()
{
    int t;      cin>>t;
    while(t--)
    {
        ll n,p,i,j,k;       cin>>n>>p;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>ar[i][j];
            }
        }
        power(ar,n,p);

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}