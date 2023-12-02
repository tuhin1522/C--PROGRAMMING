#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    string s;
    cin>>s;
    int k;
    cin>>k;
    int a[26];
    int mx=0;
    for(int i=0;i<26;i++){
        cin>>a[i];
        mx = max(mx,a[i]);
    }
    int ans=0;
    for(int i=0;i<s.size();i++){
        int x=(int)(s[i]);
        int y=x-97;
        ans=ans+(i+1)*a[y];
    }
    for(int i=s.size();i<(s.size()+k);i++){
        ans=ans+(i+1)*mx;
    }
    cout<<ans<<endl;
}