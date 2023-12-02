#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    ll n,m;cin>>n>>m;
    ll x =(m*m)/n;
    if(m*m>x*m){
        cout<<-1<<endl;
    }
    else cout<<x<<endl;
}