#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    int q=b-a;
    double ans = (double)c/q;
    if(x<=a) cout<<fixed<<setprecision(12)<<(double)1<<endl;
    else if(x<=b) cout<<fixed<<setprecision(12)<<(double)ans<<endl;
    else cout<<fixed<<setprecision(12)<<(double)0<<endl;
    
}