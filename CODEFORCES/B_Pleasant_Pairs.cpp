#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n+2);
        for(int i=1;i<=n;i++){
			cin>>a[i];
		}
        ll ans=0;
        for(int i=2;i<=n;i++)
        {
            int z=i+i-1;
            if(a[i]>z){
				continue;
			}
            int x=(z%a[i]+1);
            int y=i-x;
            while(y>=1)
            {
                if(y+i==a[i]*a[y])ans++;
                y-=a[i];
            }
        }
        cout<<ans<<endl;
    }
}
