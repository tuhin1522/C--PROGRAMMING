#include<bits/stdc++.h>
using  namespace  std;
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

void div(string s,int m)
{
    int ans = 0;
    for(int i=0;i<s.size();i++){
        ans = ans *10 + (s[i] - '0');
        ans = ans % m;
    }
    if(ans%m==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int m;
        cin>>s>>m;
        div(s,m);
    }
}