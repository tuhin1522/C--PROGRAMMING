#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;

#define ll long long int
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<ll>ans;
    int cnt=1;
    for(ll i=1;i<n;i++)
    {
        if(a[i]-a[i-1]>x)
        {
            cnt++;
            if(a[i]-a[i-1]-1>=1)
            {
                ans.push_back(a[i]-a[i-1]-1);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(ll i=0;i<ans.size();i++)
    {
        ll c=ans[i];
        if(c/x<=k && k>0)
        {
            cnt--;
            k-=(c/x);
        }
        else break;
    }
    cout<<cnt<<endl;
}
