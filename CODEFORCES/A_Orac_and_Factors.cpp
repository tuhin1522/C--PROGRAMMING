#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int primefact(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			int cnt=0;
			while(n%i == 0)
			{
				cnt++;
				n=n/i;
			}
			return i;
		}
	}
	if(n>1)return n;
}

bool primality_test(int n){
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    Faster;
    int t;
    cin>>t;
    while(t--){
        ll n,k,ans;
        cin>>n>>k;
        if(n%2==0){
            ans = n + 2*k;
            cout<<ans<<endl;
        }else{
            if(primality_test(n)==true){
                ans = 2*n+2*(k-1);
                cout<<ans<<endl;
            }
            else{
                ans = n + primefact(n) + 2*(k-1);
                cout<<ans<<endl;
            }
        }
    }
}