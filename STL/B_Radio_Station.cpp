#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n,m;
    cin>>n>>m;
    cin.ignore();
    map<string,string>mp;
    for(int i=0;i<n;i++)
    {
        string x,y;cin>>x>>y;
        mp[y]=x;
    }
    for(int i=0;i<m;i++)
    {
        string a,b;cin>>a>>b;
        b.pop_back();
        cout<<a<<" "<<b<<"; #"<<mp[b]<<endl;
    }
    
}